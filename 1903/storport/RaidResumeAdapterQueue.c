/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C0016638
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001B40 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0016380 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortAdapterActiveCondition @ 0x1C001E920 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C0033240 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C00360D4 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C0036430 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0037200 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C003AFE0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C003B570 (StorPortPause.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
