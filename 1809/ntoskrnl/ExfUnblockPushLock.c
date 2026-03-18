/*
 * XREFs of ExfUnblockPushLock @ 0x1401B7430
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
 *     PspReferenceCidTableEntry @ 0x140646D30 (PspReferenceCidTableEntry.c)
 *     ObSetHandleAttributes @ 0x14068D8F0 (ObSetHandleAttributes.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919E0 (ObpProcessRemoveObjectQueue.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140693564 (CmpCommitLightWeightTransaction.c)
 *     ExDupHandleTable @ 0x1406965A0 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x1406969C4 (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x1406977B0 (ObpEnumFindHandleProcedure.c)
 *     CmpWorkerEngineWorker @ 0x1406978C0 (CmpWorkerEngineWorker.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406979A0 (ObQueryObjectAuditingByHandle.c)
 *     CmpEnumerateCallback @ 0x1406D0730 (CmpEnumerateCallback.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6E8 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FA978 (CmpTransInitializeTransaction.c)
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EB564 (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x14081E630 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140827360 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x140860CC0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140861150 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408613B4 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BEC20 (EtwpObjectHandleEnumCallback.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CA8D0 (EtwpSavePersistedLoggersWorker.c)
 *     ExQueryProcessHandleInformation @ 0x1408CDE90 (ExQueryProcessHandleInformation.c)
 *     ExUnlockHandleTableEntry @ 0x1408CE100 (ExUnlockHandleTableEntry.c)
 *     ExpSnapShotHandleTables @ 0x1408CE234 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140111B60 (ExpUnblockPushLock.c)
 */

void __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  ExpUnblockPushLock(a1, a2, 0);
}
