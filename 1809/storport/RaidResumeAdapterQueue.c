/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C001435C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001FA0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortAdapterActiveCondition @ 0x1C00212A0 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00376A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C003A438 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A730 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C003B3D0 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C003E8B0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C003EE40 (StorPortPause.c)
 * Callees:
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 876));
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}
