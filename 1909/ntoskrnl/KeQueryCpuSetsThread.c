/*
 * XREFs of KeQueryCpuSetsThread @ 0x1402ACC00
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x1400FC9A8 (KiGetThreadCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // r14d
  __int64 ThreadCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rcx
  struct _KPRCB *v15; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v5 = 20;
  ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v18);
  if ( v18 <= 0x14 )
    v5 = v18;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v11[5] - 1;
        v11[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( v5 )
  {
    v13 = ThreadCpuSetMaskPointer - (_QWORD)a2;
    v14 = v5;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v13);
      ++a2;
      --v14;
    }
    while ( v14 );
  }
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v15);
  }
  __writecr8(CurrentIrql);
  return v18;
}
