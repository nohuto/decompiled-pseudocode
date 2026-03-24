/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140694094
 * Callers:
 *     CmpCleanupRollbackPacket @ 0x1405AFF78 (CmpCleanupRollbackPacket.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmpDeleteKeyObject @ 0x14063F500 (CmpDeleteKeyObject.c)
 *     CmpCleanupLightWeightTransaction @ 0x140693A3C (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140693B10 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x140693C70 (NtCreateKeyTransacted.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140693EEC (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x1406CDC28 (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6C8 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FA958 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140701C2C (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x1407027CC (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1407F8ADC (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
