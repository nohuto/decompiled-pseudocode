/*
 * XREFs of ExfAcquirePushLockShared @ 0x14009C740
 * Callers:
 *     ExpCovQueryInformation @ 0x140914BCC (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
