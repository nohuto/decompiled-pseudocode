/*
 * XREFs of HvpMarkCellDirty @ 0x1405D4FF0
 * Callers:
 *     CmpUpdateKeyNodeAccessBits @ 0x14062DAD4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSetValueKeyNew @ 0x14062DBC4 (CmpSetValueKeyNew.c)
 *     HvpIsFreeNeighbor @ 0x14062DE44 (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x14062EAC0 (HvpFindFreeCellInBin.c)
 *     CmpMarkValueDataDirty @ 0x14062FECC (CmpMarkValueDataDirty.c)
 *     CmpMarkKeyDirty @ 0x140631144 (CmpMarkKeyDirty.c)
 *     CmpCommitSetValueKeyUoW @ 0x140632124 (CmpCommitSetValueKeyUoW.c)
 *     CmpAddToLeaf @ 0x1406328AC (CmpAddToLeaf.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063BAF0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063CDE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063D1F0 (CmpGetSecurityDescriptorNode.c)
 *     CmpCheckLeaf @ 0x14064F610 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140650CB0 (CmpCheckValueList.c)
 *     CmpVEExecuteOpenLogic @ 0x1406BA460 (CmpVEExecuteOpenLogic.c)
 *     CmpMarkIndexDirty @ 0x1406D8A5C (CmpMarkIndexDirty.c)
 *     CmpClearKeyAccessBits @ 0x1406D8CCC (CmpClearKeyAccessBits.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406DD1E8 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E28E0 (CmpLightWeightCreateSetValueData.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406E3428 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1406E99B4 (CmpInsertSecurityCellList.c)
 *     CmpCommitAddKeyUoW @ 0x140715E20 (CmpCommitAddKeyUoW.c)
 *     CmpSelectLeaf @ 0x14071AEFC (CmpSelectLeaf.c)
 *     CmpMarkCurrentValueDirty @ 0x140757E30 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14075C434 (CmpMarkCurrentProfileDirty.c)
 *     CmpSetValueKeyTombstone @ 0x14082AD8C (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x14082C98C (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x14082D0C4 (CmpReplicateKeyToVirtual.c)
 *     CmpCopySyncTree2 @ 0x140836060 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140836CA4 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140836D40 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x140838F7C (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140839024 (CmpMarkEntireIndexDirty.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14083E1D4 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083EA38 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1405D5440 (HvpGetCellMap.c)
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
