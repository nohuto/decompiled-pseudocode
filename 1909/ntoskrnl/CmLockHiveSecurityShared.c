/*
 * XREFs of CmLockHiveSecurityShared @ 0x140832088
 * Callers:
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1776, 0LL);
}
