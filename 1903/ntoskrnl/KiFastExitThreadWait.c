/*
 * XREFs of KiFastExitThreadWait @ 0x14011AF94
 * Callers:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x1400BA4A0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14011AAE0 (KiWaitForAllObjects.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiExitThreadWait @ 0x14011B080 (KiExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = 0;
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
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
        break;
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v9[5] - 1;
          v9[5] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v13);
      while ( *(_QWORD *)(a2 + 64) );
    }
    KiReleaseThreadLockSafe(a2);
  }
  LOBYTE(a3) = v3;
  return KiExitThreadWait(a1, a2, a3);
}
