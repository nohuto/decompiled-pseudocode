/*
 * XREFs of ExfUnblockPushLock @ 0x1401C0870
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0B80 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0D60 (PsLookupThreadByThreadId.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6FF0 (ObpReferenceProcessObjectByHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC8B0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     PspClearProcessThreadCidRefs @ 0x140610A28 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x140610AD0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x140610BE0 (ObSetHandleAttributes.c)
 *     ObReferenceFileObjectForWrite @ 0x14062D830 (ObReferenceFileObjectForWrite.c)
 *     CmpTransSearchAddTrans @ 0x1406367D8 (CmpTransSearchAddTrans.c)
 *     ObpEnumFindHandleProcedure @ 0x1406A50F0 (ObpEnumFindHandleProcedure.c)
 *     CmpWorkerEngineWorker @ 0x1406A5260 (CmpWorkerEngineWorker.c)
 *     MiLockImageSection @ 0x1406A5458 (MiLockImageSection.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B64E0 (ObpProcessRemoveObjectQueue.c)
 *     ExDupHandleTable @ 0x1406B73C0 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x1406B7800 (ObInheritObjectHandle.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 *     CmpTransInitializeTransaction @ 0x1406BAD38 (CmpTransInitializeTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x1406E33B4 (CmpCommitLightWeightTransaction.c)
 *     CmpEnumerateCallback @ 0x1406F11E0 (CmpEnumerateCallback.c)
 *     ExUnlockHandleTableEntry @ 0x14072CCF0 (ExUnlockHandleTableEntry.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x14082576C (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x140857CA0 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140860EC0 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x14089CF50 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14089D3E0 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x14089D644 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408FB3A0 (EtwpObjectHandleEnumCallback.c)
 *     ExQueryProcessHandleInformation @ 0x14090AEB0 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14090B238 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400F8AC4 (ExpUnblockPushLock.c)
 */

void __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  ExpUnblockPushLock(a1, a2, 0);
}
