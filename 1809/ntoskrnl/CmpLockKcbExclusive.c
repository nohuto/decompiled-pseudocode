/*
 * XREFs of CmpLockKcbExclusive @ 0x1405D1728
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmpLockKcbStackExclusive @ 0x1405AA5D8 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405CF478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x1405D1760 (CmpDelayCloseWorker.c)
 *     CmEnumerateValueKey @ 0x1405D4080 (CmEnumerateValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpVEExecuteOpenLogic @ 0x14063C000 (CmpVEExecuteOpenLogic.c)
 *     CmpDeleteKeyObject @ 0x14063F500 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441A0 (CmpDereferenceKeyControlBlock.c)
 *     CmLockKeyForWrite @ 0x14068E360 (CmLockKeyForWrite.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140692DD4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B1DB4 (CmpVEExecuteCreateLogic.c)
 *     CmSetKeyFlags @ 0x1407EF41C (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0328 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F12BC (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x1407F1490 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C74 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F3798 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F5F10 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9C88 (CmpEnumerateAllHigherLayerKcbs.c)
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
