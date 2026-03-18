/*
 * XREFs of CmpUnlockKcb @ 0x1405F94F0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpDoQueryKeyName @ 0x1400CFEE0 (CmpDoQueryKeyName.c)
 *     CmpRemoveHiveFromNamespace @ 0x140112918 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     DelistKeyBodyFromKCB @ 0x140604420 (DelistKeyBodyFromKCB.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmEnumerateValueKey @ 0x140660F30 (CmEnumerateValueKey.c)
 *     CmpDelayCloseWorker @ 0x140661A50 (CmpDelayCloseWorker.c)
 *     CmpUnlockTwoKcbs @ 0x140663500 (CmpUnlockTwoKcbs.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpVEExecuteOpenLogic @ 0x1406B5BF0 (CmpVEExecuteOpenLogic.c)
 *     CmpCloseKeyObject @ 0x1406B6B30 (CmpCloseKeyObject.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406B8B24 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     NtFlushKey @ 0x1406E5920 (NtFlushKey.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F9D60 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140714FD4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmLockKeyForWrite @ 0x14073C2DC (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x14082A224 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082B300 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082EB98 (CmpGlobalUnlockKeyForWrite.c)
 *     CmDumpKey @ 0x140839D60 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 */

char __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  char result; // al

  v2 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) == KeGetCurrentThread() )
    *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
  result = ExReleasePushLockEx(BugCheckParameter2 + 48, 0LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
      return CmpFreeKeyControlBlock(BugCheckParameter2);
  }
  return result;
}
