/*
 * XREFs of CmpUnlockHiveList @ 0x140662270
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x14008BF44 (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x14018197C (CmpJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}
