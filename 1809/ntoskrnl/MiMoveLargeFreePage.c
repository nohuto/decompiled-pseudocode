/*
 * XREFs of MiMoveLargeFreePage @ 0x1402CCB34
 * Callers:
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BC80 (MiTryUnlinkNodeLargePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  int v8; // ebp
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  unsigned __int8 v12; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v17; // rbx
  int v18; // edi
  unsigned __int64 v19; // r15
  struct _KPRCB *v20; // rcx
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+10h]

  v6 = MiLargePageSizes[a2];
  v21 = v6;
  v7 = a1 & ~(v6 - 1);
  v23 = MiTryUnlinkNodeLargePage(a3, v7, a2, 8);
  v8 = v23;
  if ( v23 > 1 )
    return 0LL;
  v10 = 48 * v7 - 0x58000000000LL;
  v11 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL));
  if ( v11 != a3 )
  {
    v12 = MiLockPageInline(48 * v7 - 0x58000000000LL);
    MiInsertLargePageInNodeListHelper(v7, v6, v8, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v12);
    return 0LL;
  }
  v14 = *a4;
  v15 = v10 + 48 * v6 - 48;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v15 >= v10 )
  {
    v17 = v15 + 24;
    v18 = v23;
    v19 = (unsigned __int64)(v14 & 0x3FF) << 40;
    do
    {
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22, v14, v11);
        while ( *(__int64 *)v17 < 0 );
      }
      *(_QWORD *)(v17 + 16) = v19 | *(_QWORD *)(v17 + 16) & 0xFFFC00FFFFFFFFFFuLL;
      if ( v15 == v10 )
        MiInsertLargePageInNodeListHelper(v7, v21, v18, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      v15 -= 48LL;
      v17 -= 48LL;
    }
    while ( v15 >= v10 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v20);
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
