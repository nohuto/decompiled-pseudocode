/*
 * XREFs of HvFreeCell @ 0x1405AEBD8
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1401B3530 (CmpDereferenceSecurityNode.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1405ADC78 (CmpAddValueKeyNew.c)
 *     CmpSetValueDataNew @ 0x1405ADE10 (CmpSetValueDataNew.c)
 *     CmpFreeKeyBody @ 0x1405AE664 (CmpFreeKeyBody.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     HvReallocateCell @ 0x1405AE9CC (HvReallocateCell.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1405AEF04 (CmpFreeValueData.c)
 *     CmpSetValueKeyExisting @ 0x1405AF27C (CmpSetValueKeyExisting.c)
 *     CmpRemoveSubKeyFromList @ 0x1405AF780 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x1405AFA60 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1405AFEC0 (CmpAddToLeaf.c)
 *     CmpFreeSecurityDescriptor @ 0x1405B034C (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveValueFromList @ 0x1405B04E8 (CmpRemoveValueFromList.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140696790 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406967C8 (CmpLightWeightCreateSetValueData.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406BDD20 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpSetValueDataExisting @ 0x1406CF6DC (CmpSetValueDataExisting.c)
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x1407FE86C (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x1407FE904 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407FF6DC (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x1407FFC98 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x1407FFEB4 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140801028 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x1408012F0 (CmpSplitLeaf.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140804C84 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140804E5C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x1405AEDAC (HvpIsFreeNeighbor.c)
 *     HvpEnlistFreeCell @ 0x1405FBF0C (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     HvpRemoveFreeCellHint @ 0x1405FCB90 (HvpRemoveFreeCellHint.c)
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
