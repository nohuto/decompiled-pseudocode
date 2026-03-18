/*
 * XREFs of MiMoveLargeFreePage @ 0x1402E6B2C
 * Callers:
 *     MiTransferPartitionPageRun @ 0x1402EB500 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiTryUnlinkNodeLargePage @ 0x140131048 (MiTryUnlinkNodeLargePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, unsigned int a2, __int64 a3, __int16 *a4)
{
  __int64 v6; // rbx
  ULONG_PTR v7; // r12
  int v8; // ebp
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int16 v13; // dx
  unsigned __int64 v14; // rbp
  unsigned __int8 CurrentIrql; // r15
  int v16; // r15d
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r14
  struct _KPRCB *v19; // rcx
  unsigned __int8 v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h]

  v6 = MiLargePageSizes[a2];
  v7 = a1 & ~(v6 - 1);
  v22 = MiTryUnlinkNodeLargePage(a3, v7, a2, 8);
  v8 = v22;
  if ( v22 > 1 )
    return 0LL;
  v10 = 48 * v7 - 0x58000000000LL;
  if ( *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != a3 )
  {
    v11 = MiLockPageInline(48 * v7 - 0x58000000000LL);
    MiInsertLargePageInNodeList(v7, v8, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v11);
    return 0LL;
  }
  v13 = *a4;
  v14 = v10 + 48 * v6 - 48;
  CurrentIrql = KeGetCurrentIrql();
  v20 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v14 >= v10 )
  {
    v16 = v22;
    v17 = v14 + 24;
    v18 = (unsigned __int64)(v13 & 0x3FF) << 40;
    do
    {
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)v17 < 0 );
      }
      *(_QWORD *)(v17 + 16) = v18 | *(_QWORD *)(v17 + 16) & 0xFFFC00FFFFFFFFFFuLL;
      if ( v14 == v10 )
        MiInsertLargePageInNodeList(v7, v16, 0);
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      v14 -= 48LL;
      v17 -= 48LL;
    }
    while ( v14 >= v10 );
    CurrentIrql = v20;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v19);
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
