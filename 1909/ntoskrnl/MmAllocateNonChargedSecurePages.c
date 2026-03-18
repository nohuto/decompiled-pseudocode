/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x1402C2AAC
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x1403090DC (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     MiInitializeMdlPfn @ 0x1400DCE94 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x1400DD2C4 (MiPartitionObjectToPartition.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG_PTR **a1, unsigned int *a2, __int64 *a3)
{
  ULONG_PTR *v5; // rsi
  unsigned int v6; // ebp
  signed __int32 v7; // ecx
  unsigned int v8; // ebx
  __int64 SlabPage; // rdi
  __int64 v10; // rbx
  unsigned __int8 v11; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  bool v13; // zf
  volatile signed __int32 *v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  char v16; // [rsp+78h] [rbp+10h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v5 = MiPartitionObjectToPartition(a1, 1, &v16);
  v6 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v14);
  if ( *a2 )
  {
    do
    {
      v7 = _InterlockedExchangeAdd(v14, 1u);
      v8 = v15 & v7 | HIDWORD(v15);
      if ( (*((_DWORD *)v5 + 1) & 8) != 0 )
        SlabPage = MiGetSlabPage((_DWORD)v5, 24, 0, -1, 0);
      else
        SlabPage = -1LL;
      if ( SlabPage == -1 )
      {
        SlabPage = MiGetPage((__int64)v5, v8, 0LL);
        if ( SlabPage == -1 )
          break;
      }
      v10 = 48 * SlabPage - 0x58000000000LL;
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = ZeroPte;
      *(_QWORD *)(v10 + 40) = *(_QWORD *)(v10 + 40) & 0xFDFFFFF000000000uLL | 0xFFFFFFFFDLL;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 53);
      v11 = MiLockPageInline(v10);
      MiInitializeMdlPfn(v10, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v11);
      *a3 = SlabPage;
      ++v6;
      ++a3;
    }
    while ( v6 < *a2 );
  }
  v13 = v16 == 0;
  *a2 = v6;
  if ( !v13 )
    PsDereferencePartition(v5[21]);
}
