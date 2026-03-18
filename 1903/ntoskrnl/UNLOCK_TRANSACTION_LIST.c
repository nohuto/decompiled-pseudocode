/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x14062C308
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14012E568 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1406319AC (CmpRundownUnitOfWork.c)
 *     CmpTransSearchAddTrans @ 0x1406331E8 (CmpTransSearchAddTrans.c)
 *     CmKtmNotification @ 0x1406999A0 (CmKtmNotification.c)
 *     CmpRunDownCmRM @ 0x14069B940 (CmpRunDownCmRM.c)
 *     CmRmFinalizeRecovery @ 0x1406EEA7C (CmRmFinalizeRecovery.c)
 *     CmObliterateRMTxArray @ 0x14082EF4C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x14082F030 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
