/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x1402AA4FC
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x1402EBCA4 (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiInitializeMdlPfn @ 0x1400113B8 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG_PTR **a1, unsigned int *a2, __int64 *a3)
{
  ULONG_PTR *v5; // rsi
  unsigned int v6; // ebp
  int v7; // edx
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 SlabPage; // rdi
  __int64 v11; // rbx
  unsigned __int8 v12; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  bool v14; // zf
  volatile signed __int32 *v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int16 v16; // [rsp+28h] [rbp-40h]
  unsigned __int16 v17; // [rsp+2Ah] [rbp-3Eh]
  char v18; // [rsp+78h] [rbp+10h] BYREF
  int v19; // [rsp+88h] [rbp+20h]

  v5 = MiPartitionObjectToPartition(a1, 1, &v18);
  v6 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v15);
  if ( *a2 )
  {
    v7 = v17;
    v8 = v16;
    v19 = v17;
    do
    {
      v9 = v8 & _InterlockedExchangeAdd(v15, 1u) | v7;
      if ( (*((_DWORD *)v5 + 1) & 8) != 0 )
        SlabPage = MiGetSlabPage(v5, 24LL, -1LL, 0LL);
      else
        SlabPage = -1LL;
      if ( SlabPage == -1 )
      {
        SlabPage = MiGetPage((__int64)v5, v9, 0);
        if ( SlabPage == -1 )
          break;
      }
      v11 = 48 * SlabPage - 0x58000000000LL;
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 16) = ZeroPte;
      *(_QWORD *)(v11 + 40) = *(_QWORD *)(v11 + 40) & 0xFDFFFFF000000000uLL | 0xFFFFFFFFDLL;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 52);
      v12 = MiLockPageInline(v11);
      MiInitializeMdlPfn(v11, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v12);
      v7 = v19;
      ++v6;
      *a3++ = SlabPage;
    }
    while ( v6 < *a2 );
  }
  v14 = v18 == 0;
  *a2 = v6;
  if ( !v14 )
    PsDereferencePartition(v5[21]);
}
