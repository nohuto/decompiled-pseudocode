/*
 * XREFs of CmpLockKcbExclusive @ 0x1405D2728
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmpLockKcbStackExclusive @ 0x1405AB5D8 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x1405D2760 (CmpDelayCloseWorker.c)
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmLockKeyForWrite @ 0x14068F520 (CmLockKeyForWrite.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140693F94 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x1407F2690 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F7110 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
