/*
 * XREFs of HvLockHiveFlusherShared @ 0x140631304
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140112918 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
