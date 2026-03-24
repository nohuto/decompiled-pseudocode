/*
 * XREFs of HvpMarkCellDirty @ 0x1405FAC04
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140580AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x1405818C4 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1405AB0AC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpSetValueKeyNew @ 0x1405ACBBC (CmpSetValueKeyNew.c)
 *     CmpMarkIndexDirty @ 0x1405AD40C (CmpMarkIndexDirty.c)
 *     HvpIsFreeNeighbor @ 0x1405ADDAC (HvpIsFreeNeighbor.c)
 *     CmpMarkKeyDirty @ 0x1405AE028 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1405AE27C (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1405AE578 (CmpMarkValueDataDirty.c)
 *     CmpAddSubKeyEx @ 0x1405AEA60 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1405AEEC0 (CmpAddToLeaf.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405CF3BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpCheckLeaf @ 0x1405D8BC0 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1405D9450 (CmpCheckValueList.c)
 *     HvpFindFreeCellInBin @ 0x1405FB8C4 (HvpFindFreeCellInBin.c)
 *     CmpVEExecuteOpenLogic @ 0x14063C000 (CmpVEExecuteOpenLogic.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406950E4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x140695608 (CmpLightWeightCreateSetValueData.c)
 *     CmpClearKeyAccessBits @ 0x1406B2B30 (CmpClearKeyAccessBits.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406C35BC (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1406CA0F4 (CmpInsertSecurityCellList.c)
 *     CmpSelectLeaf @ 0x140700060 (CmpSelectLeaf.c)
 *     CmpMarkCurrentProfileDirty @ 0x140730D84 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407367B4 (CmpMarkCurrentValueDirty.c)
 *     CmSetKeyFlags @ 0x1407EF41C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8AC (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x1407F0580 (CmpSetValueKeyTombstone.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F4B50 (CmpCopySaclToVirtualKey.c)
 *     CmpCopySyncTree2 @ 0x1407FCC04 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x1407FD864 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x1407FD900 (CmpMarkKeyValuesDirty.c)
 *     CmpSyncKeyValues @ 0x1407FE4DC (CmpSyncKeyValues.c)
 *     CmpMarkAllChildrenDirty @ 0x1407FFBDC (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x1407FFC84 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407FFE28 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x1408000F0 (CmpSplitLeaf.c)
 *     HvMarkCellDirty @ 0x140800FB4 (HvMarkCellDirty.c)
 *     CmRestoreKey @ 0x1408013AC (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140802DAC (CmpRefreshHive.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140804004 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140804268 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140804410 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408045F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x1408049D0 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140804E80 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140805268 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x1405FAD2C (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1405FB04C (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  ULONG_PTR v3; // rsi
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rax
  char v8; // si
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v10 = -1;
  v3 = (unsigned int)BugCheckParameter3;
  v11 = 0;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || (BugCheckParameter3 & 0x80000000) != 0LL )
    return 1;
  v6 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  if ( !a3 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         (unsigned int)v3,
         &v10);
  if ( !v7 || v7 == 4 )
  {
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
    }
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x270uLL);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
    v8 = HvpMarkDirty(BugCheckParameter2);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
    }
    if ( v8 )
    {
      *(_BYTE *)(BugCheckParameter2 + 141) = 1;
      return 1;
    }
  }
  return 0;
}
