/*
 * XREFs of HvLockHiveFlusherShared @ 0x14062D4B4
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14008BE7C (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmpReorganizeHive @ 0x14065EAFC (CmpReorganizeHive.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
