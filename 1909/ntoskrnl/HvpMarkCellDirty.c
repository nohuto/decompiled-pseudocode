/*
 * XREFs of HvpMarkCellDirty @ 0x1405D57B0
 * Callers:
 *     CmpUpdateKeyNodeAccessBits @ 0x140631924 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSetValueKeyNew @ 0x140631A40 (CmpSetValueKeyNew.c)
 *     HvpIsFreeNeighbor @ 0x140631CC4 (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x140632940 (HvpFindFreeCellInBin.c)
 *     CmpMarkValueDataDirty @ 0x140633D4C (CmpMarkValueDataDirty.c)
 *     CmpMarkKeyDirty @ 0x140634FC4 (CmpMarkKeyDirty.c)
 *     CmpCommitSetValueKeyUoW @ 0x140635FA4 (CmpCommitSetValueKeyUoW.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063FE98 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpGetSecurityDescriptorNode @ 0x14064052C (CmpGetSecurityDescriptorNode.c)
 *     CmpCheckLeaf @ 0x1406627D0 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140663E70 (CmpCheckValueList.c)
 *     CmpVEExecuteOpenLogic @ 0x1406B5BF0 (CmpVEExecuteOpenLogic.c)
 *     CmpAddToLeaf @ 0x1406C50F8 (CmpAddToLeaf.c)
 *     CmpMarkIndexDirty @ 0x1406D86CC (CmpMarkIndexDirty.c)
 *     CmpClearKeyAccessBits @ 0x1406D893C (CmpClearKeyAccessBits.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406DDE68 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E3F60 (CmpLightWeightCreateSetValueData.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406E48D8 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1406EAA74 (CmpInsertSecurityCellList.c)
 *     CmpCommitAddKeyUoW @ 0x140716A80 (CmpCommitAddKeyUoW.c)
 *     CmpSelectLeaf @ 0x14071CCEC (CmpSelectLeaf.c)
 *     CmpMarkCurrentValueDirty @ 0x14075C6C4 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x140760BB4 (CmpMarkCurrentProfileDirty.c)
 *     CmpSetValueKeyTombstone @ 0x14082A48C (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x14082C08C (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x14082C7C4 (CmpReplicateKeyToVirtual.c)
 *     CmpCopySyncTree2 @ 0x1408356C0 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140836304 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x1408363A0 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x1408385DC (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140838684 (CmpMarkEntireIndexDirty.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14083D834 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083E098 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x1405D58F0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1405D5C00 (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  ULONG_PTR v3; // rdi
  int v4; // eax
  __int64 v7; // rax
  char v8; // di
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v3 = (unsigned int)BugCheckParameter3;
  v11 = 0;
  v4 = *(_DWORD *)(BugCheckParameter2 + 160);
  v10 = -1;
  if ( (v4 & 1) != 0 || (BugCheckParameter3 & 0x80000000) != 0LL )
    return 1;
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
      KeAbPostRelease(BugCheckParameter2 + 80);
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
      KeAbPostRelease(BugCheckParameter2 + 80);
    }
    if ( v8 )
    {
      *(_BYTE *)(BugCheckParameter2 + 141) = 1;
      return 1;
    }
  }
  return 0;
}
