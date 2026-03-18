/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x140630158
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14012EEB8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmpTransSearchAddTrans @ 0x1406367D8 (CmpTransSearchAddTrans.c)
 *     CmRmFinalizeRecovery @ 0x14068BDE4 (CmRmFinalizeRecovery.c)
 *     CmpRunDownCmRM @ 0x1406BA870 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 *     CmObliterateRMTxArray @ 0x14082EDBC (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x14082EEA0 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
