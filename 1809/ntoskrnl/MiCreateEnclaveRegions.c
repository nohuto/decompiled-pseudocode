/*
 * XREFs of MiCreateEnclaveRegions @ 0x1409BB34C
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiInitializeMdlPfn @ 0x1400113B8 (MiInitializeMdlPfn.c)
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 */

_BOOL8 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 *v2; // r13
  __int64 v3; // rbx
  __int64 *i; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *PoolWithTag; // rax
  bool v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  unsigned __int8 v16; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v18; // [rsp+60h] [rbp+8h]

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 32);
  v3 = MiSwizzleInvalidPte(128LL);
  v18 = v2;
  for ( i = (__int64 *)*v2; i != v2; i = (__int64 *)*i )
  {
    if ( ((*((_DWORD *)i + 4) - 33) & 0xFFFFFFFD) != 0 )
      continue;
    v6 = i[3];
    v7 = i[4];
    if ( v1 )
    {
      v8 = v1[4];
      if ( v6 == v8 + v1[3] )
      {
        v1[4] = v8 + v7;
        goto LABEL_16;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52456D4Du);
    v1 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    PoolWithTag[3] = v6;
    v10 = 0;
    PoolWithTag[4] = v7;
    v11 = (_QWORD *)qword_14043B248;
    if ( !qword_14043B248 )
      goto LABEL_15;
    while ( v6 >= v11[3] )
    {
      v12 = (_QWORD *)v11[1];
      if ( !v12 )
      {
        v10 = 1;
        goto LABEL_15;
      }
LABEL_21:
      v11 = v12;
    }
    v12 = (_QWORD *)*v11;
    if ( *v11 )
      goto LABEL_21;
    v10 = 0;
LABEL_15:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14043B248, (unsigned __int64)v11, v10, v1);
LABEL_16:
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, v7, 0, 0);
    v13 = 48 * v6 - 0x58000000000LL;
    if ( v7 )
    {
      do
      {
        v14 = MiLockPageInline(v13);
        v15 = *(_QWORD *)(v13 + 40);
        v16 = v14;
        *(_WORD *)(v13 + 32) = 0;
        *(_QWORD *)(v13 + 24) &= 0x8000000000000000uLL;
        *(_QWORD *)(v13 + 16) = v3;
        *(_QWORD *)(v13 + 40) = v15 & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
        if ( *((_DWORD *)i + 4) == 33 )
          MiInsertPageInFreeOrZeroedList(v6, 256);
        else
          MiInitializeMdlPfn(v13, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v16);
        v13 += 48LL;
        ++v6;
        --v7;
      }
      while ( v7 );
      v2 = v18;
    }
    qword_14043C0D8 -= i[4];
  }
  return !qword_14043B248 || (unsigned int)MiInitializeEnclaveMetadataPage();
}
