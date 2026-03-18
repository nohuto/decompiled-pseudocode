/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x14062C2DC
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
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
