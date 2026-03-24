/*
 * XREFs of ExfUnblockPushLock @ 0x1401B7450
 * Callers:
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D11B0 (ObpReferenceProcessObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405E5AE0 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x1405E6360 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405F5614 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x1405F6DAC (PspClearProcessThreadCidRefs.c)
 *     MiLockImageSection @ 0x14061F25C (MiLockImageSection.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x140646D10 (PspReferenceCidTableEntry.c)
 *     ObSetHandleAttributes @ 0x14068D8D0 (ObSetHandleAttributes.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919C0 (ObpProcessRemoveObjectQueue.c)
 *     CmpPerformUnloadKey @ 0x140692390 (CmpPerformUnloadKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140693544 (CmpCommitLightWeightTransaction.c)
 *     ExDupHandleTable @ 0x140696580 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x1406969A4 (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x140697790 (ObpEnumFindHandleProcedure.c)
 *     CmpWorkerEngineWorker @ 0x1406978A0 (CmpWorkerEngineWorker.c)
 *     ObQueryObjectAuditingByHandle @ 0x140697980 (ObQueryObjectAuditingByHandle.c)
 *     CmpEnumerateCallback @ 0x1406D0710 (CmpEnumerateCallback.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6C8 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FA958 (CmpTransInitializeTransaction.c)
 *     PopBatteryWorker @ 0x140719D80 (PopBatteryWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EB544 (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x14081E610 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140827340 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x140860CA0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140861130 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x140861394 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BEC00 (EtwpObjectHandleEnumCallback.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CA8B0 (EtwpSavePersistedLoggersWorker.c)
 *     ExQueryProcessHandleInformation @ 0x1408CDE70 (ExQueryProcessHandleInformation.c)
 *     ExUnlockHandleTableEntry @ 0x1408CE0E0 (ExUnlockHandleTableEntry.c)
 *     ExpSnapShotHandleTables @ 0x1408CE214 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140111B80 (ExpUnblockPushLock.c)
 */

void __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  ExpUnblockPushLock(a1, a2, 0);
}
