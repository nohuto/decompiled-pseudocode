/*
 * XREFs of ExfAcquirePushLockShared @ 0x140005530
 * Callers:
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
