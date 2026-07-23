/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140695254
 * Callers:
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpCleanupLightWeightTransaction @ 0x140694BFC (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140694CD0 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x140694E30 (NtCreateKeyTransacted.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406950AC (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FBBF8 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1407F9CDC (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
