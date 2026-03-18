/*
 * XREFs of PopSetSleepMarker @ 0x1406DD1DC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopGetTransitionsToOnCount @ 0x140142B0C (PopGetTransitionsToOnCount.c)
 *     PopWriteBsdPowerTransition @ 0x14071C488 (PopWriteBsdPowerTransition.c)
 */

void __fastcall PopSetSleepMarker(char a1)
{
  __int16 TransitionsToOnCount; // bx

  TransitionsToOnCount = -1;
  if ( (unsigned int)PopGetTransitionsToOnCount() < 0xFFFF )
    TransitionsToOnCount = PopGetTransitionsToOnCount();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  WORD6(PopBsdPowerTransition) = TransitionsToOnCount;
  BYTE8(PopBsdPowerTransition) = (16 * a1) | BYTE8(PopBsdPowerTransition) & 0xF;
  BYTE14(PopBsdPowerTransition) = PopSleepCheckpointStatus & 0xF | BYTE14(PopBsdPowerTransition) & 0xF0;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
