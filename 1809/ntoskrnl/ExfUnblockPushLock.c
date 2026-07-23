/*
 * XREFs of ExfUnblockPushLock @ 0x1401B75B0
 * Callers:
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D21B0 (ObpReferenceProcessObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405F6614 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x1405F7DAC (PspClearProcessThreadCidRefs.c)
 *     MiLockImageSection @ 0x14062025C (MiLockImageSection.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x140647D30 (PspReferenceCidTableEntry.c)
 *     ObSetHandleAttributes @ 0x14068EA90 (ObSetHandleAttributes.c)
 *     ObpProcessRemoveObjectQueue @ 0x140692B80 (ObpProcessRemoveObjectQueue.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 *     ExDupHandleTable @ 0x140697740 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x140697B64 (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x140698950 (ObpEnumFindHandleProcedure.c)
 *     CmpWorkerEngineWorker @ 0x140698A60 (CmpWorkerEngineWorker.c)
 *     ObQueryObjectAuditingByHandle @ 0x140698B40 (ObQueryObjectAuditingByHandle.c)
 *     CmpEnumerateCallback @ 0x1406D19B0 (CmpEnumerateCallback.c)
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FBBF8 (CmpTransInitializeTransaction.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EC744 (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x14081F810 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140828540 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x140861F00 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140862390 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408625F4 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BFEC0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CBB70 (EtwpSavePersistedLoggersWorker.c)
 *     ExQueryProcessHandleInformation @ 0x1408CF130 (ExQueryProcessHandleInformation.c)
 *     ExUnlockHandleTableEntry @ 0x1408CF3A0 (ExUnlockHandleTableEntry.c)
 *     ExpSnapShotHandleTables @ 0x1408CF4D4 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
 */

void __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  ExpUnblockPushLock(a1, a2, 0);
}
