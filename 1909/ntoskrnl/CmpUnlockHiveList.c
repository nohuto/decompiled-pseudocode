/*
 * XREFs of CmpUnlockHiveList @ 0x14068CCFC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpUnJoinClassOfTrust @ 0x1401128CC (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x14018206C (CmpJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}
