/*
 * XREFs of ExfUnblockPushLock @ 0x1401BFCF0
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0680 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6820 (ObpReferenceProcessObjectByHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC0E0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     PspClearProcessThreadCidRefs @ 0x14060EF18 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x14060EFC0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14060F0D0 (ObSetHandleAttributes.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 *     CmpTransSearchAddTrans @ 0x1406331E8 (CmpTransSearchAddTrans.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpTransInitializeTransaction @ 0x140699834 (CmpTransInitializeTransaction.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     MiLockImageSection @ 0x1406A5BC8 (MiLockImageSection.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406BAD50 (ObpProcessRemoveObjectQueue.c)
 *     ExDupHandleTable @ 0x1406BBBA0 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x1406BBFE0 (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x1406BCC10 (ObpEnumFindHandleProcedure.c)
 *     CmpWorkerEngineWorker @ 0x1406BCD20 (CmpWorkerEngineWorker.c)
 *     CmpCommitLightWeightTransaction @ 0x1406E1D34 (CmpCommitLightWeightTransaction.c)
 *     CmpEnumerateCallback @ 0x1406EF570 (CmpEnumerateCallback.c)
 *     ExUnlockHandleTableEntry @ 0x14072AE50 (ExUnlockHandleTableEntry.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x14082606C (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x1408585A0 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x1408617C0 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x14089D730 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14089DBC0 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x14089DE24 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408FB9C0 (EtwpObjectHandleEnumCallback.c)
 *     ExQueryProcessHandleInformation @ 0x14090B450 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14090B7D8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14010BB14 (ExpUnblockPushLock.c)
 */

void __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  ExpUnblockPushLock(a1, a2, 0);
}
