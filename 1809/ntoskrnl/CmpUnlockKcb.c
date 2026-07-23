/*
 * XREFs of CmpUnlockKcb @ 0x1405E4580
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1405D1194 (CmQueryMultipleValueKey.c)
 *     CmpDelayCloseWorker @ 0x1405D2760 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmLockKeyForWrite @ 0x14068F520 (CmLockKeyForWrite.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140692E2C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140693F94 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpCloseKeyObject @ 0x140695F40 (CmpCloseKeyObject.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F947C (CmpFindSubkeyInHashByChildCell.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x1407F2690 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F2B48 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F7110 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmDumpKey @ 0x140802398 (CmDumpKey.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmpCreateRegistryRoot @ 0x1409C4FAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 */

__int64 __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  __int64 result; // rax

  v2 = *(_DWORD *)(BugCheckParameter2 + 4) & 0x80000;
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) == KeGetCurrentThread() )
    *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
  result = ExReleasePushLockEx(BugCheckParameter2 + 40, 0LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
      return CmpFreeKeyControlBlock(BugCheckParameter2);
  }
  return result;
}
