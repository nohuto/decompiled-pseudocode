/*
 * XREFs of ExpHeapGCInitialization @ 0x1401B75B0
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1409B0434 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimer @ 0x14016B920 (ExAllocateTimer.c)
 */

bool ExpHeapGCInitialization()
{
  int v0; // ebx

  v0 = 0;
  ExpHpGCTimerPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 0LL, 8u);
  if ( ExpHpGCTimerPaged && (ExpHpGCTimerNonPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 1LL, 8u)) != 0 )
  {
    ExpHpGCScheduledNonPaged = 0;
    ExpHpGCScheduledPaged = 0;
    ExpHpGCInitialized = 1;
  }
  else
  {
    v0 = -1073741801;
  }
  return v0 >= 0;
}
