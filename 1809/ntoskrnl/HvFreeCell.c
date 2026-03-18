/*
 * XREFs of HvFreeCell @ 0x1405ADBD8
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1401B33D0 (CmpDereferenceSecurityNode.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140580AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140581354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1405ACC78 (CmpAddValueKeyNew.c)
 *     CmpSetValueDataNew @ 0x1405ACE10 (CmpSetValueDataNew.c)
 *     CmpFreeKeyBody @ 0x1405AD664 (CmpFreeKeyBody.c)
 *     CmpFreeKeyByCell @ 0x1405AD6F8 (CmpFreeKeyByCell.c)
 *     HvReallocateCell @ 0x1405AD9CC (HvReallocateCell.c)
 *     CmpFreeValue @ 0x1405ADB5C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1405ADF04 (CmpFreeValueData.c)
 *     CmpSetValueKeyExisting @ 0x1405AE27C (CmpSetValueKeyExisting.c)
 *     CmpRemoveSubKeyFromList @ 0x1405AE780 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x1405AEA60 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1405AEEC0 (CmpAddToLeaf.c)
 *     CmpFreeSecurityDescriptor @ 0x1405AF34C (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveValueFromList @ 0x1405AF4E8 (CmpRemoveValueFromList.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406955F0 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x140695628 (CmpLightWeightCreateSetValueData.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406BCAA0 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpSetValueDataExisting @ 0x1406CE45C (CmpSetValueDataExisting.c)
 *     CmpCopyKeyPartial @ 0x1406FF8E0 (CmpCopyKeyPartial.c)
 *     CmpCreateHiveRootCell @ 0x14075BBB8 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpCopyValue @ 0x1407FD3A4 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x1407FD68C (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x1407FD724 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407FE4FC (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x1407FEAB8 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x1407FECD4 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407FFE48 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140800110 (CmpSplitLeaf.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140803AA4 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140803C7C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140804EA0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x1405ADDAC (HvpIsFreeNeighbor.c)
 *     HvpEnlistFreeCell @ 0x1405FAF0C (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x1405FB04C (HvpGetCellMap.c)
 *     HvpRemoveFreeCellHint @ 0x1405FBB90 (HvpRemoveFreeCellHint.c)
 */

__int64 __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  volatile signed __int64 *v2; // r12
  ULONG_PTR v3; // rsi
  __int64 v5; // r14
  unsigned int v6; // r15d
  __int64 CellMap; // rax
  _QWORD *v8; // r11
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  int *v11; // rbx
  int v12; // esi
  char v13; // al
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rdi
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // r10d
  unsigned int v23; // ebx
  __int64 v24; // rax
  int v25; // r10d
  int *v26; // [rsp+30h] [rbp-48h]
  _DWORD v27[2]; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter3a; // [rsp+98h] [rbp+20h]

  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v3 = (unsigned int)BugCheckParameter3;
  v5 = 0LL;
  v6 = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v3);
  v8 = (_QWORD *)CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x62EuLL);
  v9 = *(_QWORD *)(CellMap + 8);
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v9 & 4) != 0 )
  {
    v22 = *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 4);
    v23 = v22 + *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    while ( v22 < v23 )
    {
      v24 = HvpGetCellMap(BugCheckParameter2, v22);
      *(_QWORD *)(v24 + 8) &= ~4uLL;
      v22 = v25 + 4096;
    }
  }
  v11 = (int *)(v10 + *v8 + (v3 & 0xFFF));
  *v11 = -*v11;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v15 = v6++;
    if ( v26 <= v11 )
    {
      v19 = *v26;
      v20 = v3 - *v26;
      v27[v15] = *v26;
      v21 = *v11 + v19;
      v11 = v26;
      *v26 = v21;
      *((_DWORD *)&BugCheckParameter3a + v15) = v20;
    }
    else
    {
      v16 = *v11;
      v17 = *v26;
      v27[v15] = *v26;
      *((_DWORD *)&BugCheckParameter3a + v15) = v16 + v3;
      *v11 = v16 + v17;
    }
  }
  while ( v6 < 2 );
  v12 = (_DWORD)v11 + ((unsigned int)v3 >> 31 << 31) + *(_DWORD *)(v10 + 4) - v10;
  if ( v6 )
  {
    v18 = v6;
    do
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v5), v12);
      v5 += 4LL;
      --v18;
    }
    while ( v18 );
  }
  HvpEnlistFreeCell(BugCheckParameter2);
  v13 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
