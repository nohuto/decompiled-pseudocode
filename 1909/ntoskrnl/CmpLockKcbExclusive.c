/*
 * XREFs of CmpLockKcbExclusive @ 0x140661A18
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x140112918 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     DelistKeyBodyFromKCB @ 0x140604420 (DelistKeyBodyFromKCB.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmpLockKcbStackExclusive @ 0x14063BBC8 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063D450 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x140661A50 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x1406B5BF0 (CmpVEExecuteOpenLogic.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F9D60 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x14073C2DC (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x14082A224 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082EB98 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
