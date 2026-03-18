/*
 * XREFs of RIMWatchDogTimerInit @ 0x1C010B4C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(struct _KTIMER *a1)
{
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  if ( !a1 )
    gbWatchDogTimerArmed = 0;
  qword_1C01D0C18 = 0LL;
  gWatchDogTimer = a1;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
}
