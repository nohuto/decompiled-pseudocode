/*
 * XREFs of ExfAcquirePushLockShared @ 0x1400EF6D0
 * Callers:
 *     ExpCovQueryInformation @ 0x14091462C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
