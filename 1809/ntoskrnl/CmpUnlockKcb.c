/*
 * XREFs of CmpUnlockKcb @ 0x1405E3580
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1405D0194 (CmQueryMultipleValueKey.c)
 *     CmpDelayCloseWorker @ 0x1405D1760 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1405D4080 (CmEnumerateValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpVEExecuteOpenLogic @ 0x14063C000 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x14063F500 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441A0 (CmpDereferenceKeyControlBlock.c)
 *     CmLockKeyForWrite @ 0x14068E360 (CmLockKeyForWrite.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140691C6C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140692DD4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpCloseKeyObject @ 0x140694D80 (CmpCloseKeyObject.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B1DB4 (CmpVEExecuteCreateLogic.c)
 *     CmpUnlockTwoKcbs @ 0x1406BC638 (CmpUnlockTwoKcbs.c)
 *     NtFlushKey @ 0x1406BFF70 (NtFlushKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F81DC (CmpFindSubkeyInHashByChildCell.c)
 *     CmSetKeyFlags @ 0x1407EF41C (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0328 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F12BC (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x1407F1490 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1407F1948 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F19FC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F3798 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F5F10 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9C88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmDumpKey @ 0x140801198 (CmDumpKey.c)
 *     CmRestoreKey @ 0x1408013AC (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140802DAC (CmpRefreshHive.c)
 *     CmpCreateRegistryRoot @ 0x1409C3FAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140692BF4 (CmpFreeKeyControlBlock.c)
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
