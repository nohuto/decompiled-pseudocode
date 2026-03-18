/*
 * XREFs of CmpLockKcbExclusive @ 0x14064E858
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x14008BE7C (CmpRemoveHiveFromNamespace.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     DelistKeyBodyFromKCB @ 0x140602910 (DelistKeyBodyFromKCB.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 *     CmpLockKcbStackExclusive @ 0x140638B38 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063A3C0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x14064E890 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x1406BA460 (CmpVEExecuteOpenLogic.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F7FA0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x14073A04C (CmLockKeyForWrite.c)
 *     EnlistKeyBodyWithKCB @ 0x14075E5F8 (EnlistKeyBodyWithKCB.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077C23C (CmpStartSiloRegistryNamespace.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082B5BC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082ED28 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
