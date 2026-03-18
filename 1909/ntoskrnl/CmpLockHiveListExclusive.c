/*
 * XREFs of CmpLockHiveListExclusive @ 0x14068CCDC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpUnJoinClassOfTrust @ 0x1401128CC (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x14018206C (CmpJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void CmpLockHiveListExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}
