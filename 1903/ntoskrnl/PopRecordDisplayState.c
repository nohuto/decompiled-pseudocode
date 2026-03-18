/*
 * XREFs of PopRecordDisplayState @ 0x14073A99C
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x14073A74C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BEAE4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordDisplayState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE14(PopBsdPowerTransition) = BYTE14(PopBsdPowerTransition) & 0x3F | ((a1 + 1) << 6);
  PopBsdHandleRequest(1);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
