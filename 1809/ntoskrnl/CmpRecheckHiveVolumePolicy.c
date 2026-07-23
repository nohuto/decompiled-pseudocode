/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x14000EDFC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x14075A7D4 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14008CC94 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x1401B33B4 (CmpAdjustFileCFSafety.c)
 *     HvUnlockHiveFilePages @ 0x1405A504C (HvUnlockHiveFilePages.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1405A59A4 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1405A59D4 (HvLockHiveFlusherExclusive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1405A59F0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     HvViewMapContainsLockedPages @ 0x140709AA4 (HvViewMapContainsLockedPages.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4848) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal() )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 216) )
        CmpArmLazyWriter(2LL, 0LL, 0LL);
    }
    else if ( (*(_DWORD *)(a1 + 160) & 0x8000) == 0 )
    {
      v2 = a1;
      if ( (*(_DWORD *)(a1 + 4152) & 0x10000) == 0 )
      {
        HvUnlockHiveFlusherExclusive(a1);
        CmpUnlockRegistry();
        v3 = CmpAdjustFileCFSafety(*(HANDLE *)(a1 + 1536));
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(a1);
        if ( v3 < 0 )
          goto LABEL_10;
        *(_DWORD *)(a1 + 4152) |= 0x10000u;
        v2 = a1;
      }
      HvUnlockHiveFilePages(v2);
    }
  }
LABEL_10:
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
