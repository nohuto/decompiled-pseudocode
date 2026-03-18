/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1406940B4
 * Callers:
 *     CmpCleanupRollbackPacket @ 0x1405AFF78 (CmpCleanupRollbackPacket.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     CmpCleanupLightWeightTransaction @ 0x140693A5C (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140693B30 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x140693C90 (NtCreateKeyTransacted.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140693F0C (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x1406CDC48 (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6E8 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FA978 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x1407027EC (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1407F8AFC (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
