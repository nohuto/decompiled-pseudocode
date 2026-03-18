/*
 * XREFs of CmLockHiveSecurityShared @ 0x140832A38
 * Callers:
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1776, 0LL);
}
