/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x1400ED6CC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x140782848 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140007920 (CmpArmLazyWriter.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068FF8C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14068FFC4 (HvLockHiveFlusherExclusive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14068FFE0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvUnlockHiveFilePages @ 0x140690FBC (HvUnlockHiveFilePages.c)
 *     HvViewMapContainsLockedPages @ 0x140735930 (HvViewMapContainsLockedPages.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4832) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal() || (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 216) )
        CmpArmLazyWriter(2, 0LL, 0);
    }
    else
    {
      HvUnlockHiveFilePages(a1);
    }
  }
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
