/*
 * XREFs of CmpLockHiveListExclusive @ 0x1405B10F8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x1401B32D0 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B336C (CmpUnJoinClassOfTrust.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockHiveListExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}
