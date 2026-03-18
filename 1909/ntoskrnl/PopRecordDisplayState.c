/*
 * XREFs of PopRecordDisplayState @ 0x140730724
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordDisplayState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE14(PopBsdPowerTransition) = BYTE14(PopBsdPowerTransition) & 0x3F | ((a1 + 1) << 6);
  PopBsdHandleRequest(1);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
