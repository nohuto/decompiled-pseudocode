/*
 * XREFs of CmpUnlockHiveList @ 0x1405B0118
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x1401B3170 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B320C (CmpUnJoinClassOfTrust.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}
