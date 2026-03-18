/*
 * XREFs of HvFreeCell @ 0x14062DCA8
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpAddValueKeyNew @ 0x14062DEF4 (CmpAddValueKeyNew.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x14062ED98 (CmpFreeValueData.c)
 *     HvReallocateCell @ 0x14062EFDC (HvReallocateCell.c)
 *     CmpSetValueDataNew @ 0x14062F154 (CmpSetValueDataNew.c)
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpAddSubKeyEx @ 0x1406324F4 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1406328AC (CmpAddToLeaf.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063BAF0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063D1F0 (CmpGetSecurityDescriptorNode.c)
 *     CmpRemoveSubKeyFromList @ 0x1406D69DC (CmpRemoveSubKeyFromList.c)
 *     CmpFreeSecurityDescriptor @ 0x1406DB65C (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveValueFromList @ 0x1406DD06C (CmpRemoveValueFromList.c)
 *     CmpFreeKeyBody @ 0x1406DD154 (CmpFreeKeyBody.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406E285C (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E28E0 (CmpLightWeightCreateSetValueData.c)
 *     CmpSetValueDataExisting @ 0x1406EE178 (CmpSetValueDataExisting.c)
 *     CmpCopyKeyPartial @ 0x140716014 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x14072D780 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x14082C5C0 (CmpCreateEmptyKey.c)
 *     CmpCopyValue @ 0x1408367E8 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x140836ABC (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140836B54 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140837924 (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x140837EA4 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x1408380B8 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1408391BC (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140839478 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14083D32C (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14083D528 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvpEnlistFreeCell @ 0x1405D52F8 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x1405D5440 (HvpGetCellMap.c)
 *     HvpIsFreeNeighbor @ 0x14062DE44 (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x14062E3D0 (HvpRemoveFreeCellHint.c)
 */

char __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  volatile signed __int64 *v2; // r15
  ULONG_PTR v3; // rsi
  __int64 v5; // r14
  unsigned int v6; // r13d
  __int64 CellMap; // rax
  _QWORD *v8; // r10
  __int64 v9; // rax
  unsigned int v10; // r12d
  unsigned __int64 v11; // rdi
  unsigned int *v12; // rbx
  unsigned int v13; // esi
  char v14; // al
  unsigned int v16; // ecx
  __int64 v17; // r9
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // r8d
  unsigned int v22; // r11d
  __int64 v23; // rax
  int v24; // r8d
  _DWORD BugCheckParameter3a[18]; // [rsp+30h] [rbp-48h]
  unsigned int *v26; // [rsp+90h] [rbp+18h]
  int v27; // [rsp+98h] [rbp+20h]

  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v3 = (unsigned int)BugCheckParameter3;
  v5 = 0LL;
  v6 = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  CellMap = HvpGetCellMap(BugCheckParameter2, v3);
  v8 = (_QWORD *)CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x629uLL);
  v9 = *(_QWORD *)(CellMap + 8);
  v10 = (unsigned int)v3 >> 31;
  v11 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v9 & 4) != 0 )
  {
    v21 = *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 4);
    v22 = v21 + *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    while ( v21 < v22 )
    {
      v23 = HvpGetCellMap(BugCheckParameter2, v21);
      *(_QWORD *)(v23 + 8) &= ~4uLL;
      v21 = v24 + 4096;
    }
  }
  v12 = (unsigned int *)(v11 + *v8 + (v3 & 0xFFF));
  *v12 = -*v12;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v16 = *v12;
    v17 = v6++;
    v18 = *v26;
    if ( v26 <= v12 )
    {
      *v26 = v18 + v16;
      v19 = v3 - v18;
      v12 = v26;
    }
    else
    {
      *v12 = v16 + v18;
      v19 = v16 + v3;
    }
    *(&v27 + v17) = v18;
    BugCheckParameter3a[v17] = v19;
  }
  while ( v6 < 2 );
  v13 = (_DWORD)v12 + (v10 << 31) + *(_DWORD *)(v11 + 4) - v11;
  if ( v6 )
  {
    v20 = v6;
    do
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, (unsigned int)BugCheckParameter3a[v5++], v13);
      --v20;
    }
    while ( v20 );
  }
  HvpEnlistFreeCell(BugCheckParameter2, v13, *v12, v10);
  v14 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
