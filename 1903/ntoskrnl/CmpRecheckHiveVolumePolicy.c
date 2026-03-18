/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x14009902C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x14077FE28 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140007890 (CmpArmLazyWriter.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406612E8 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140661320 (HvLockHiveFlusherExclusive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14066133C (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvUnlockHiveFilePages @ 0x1406627B4 (HvUnlockHiveFilePages.c)
 *     HvViewMapContainsLockedPages @ 0x1407336D0 (HvViewMapContainsLockedPages.c)
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
