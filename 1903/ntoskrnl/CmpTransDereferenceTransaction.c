/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1406335B0
 * Callers:
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     CmpTransSearchAddTrans @ 0x1406331E8 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406355A8 (CmpTransSearchAddLightWeightTrans.c)
 *     NtCreateKeyTransacted @ 0x14063DB60 (NtCreateKeyTransacted.c)
 *     CmpCleanupRollbackPacket @ 0x1406627FC (CmpCleanupRollbackPacket.c)
 *     CmpTransInitializeTransaction @ 0x140699834 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x14069BC54 (CmpAbortRollbackPacket.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E1F44 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1406E7950 (NtOpenKeyTransactedEx.c)
 *     CmRmFinalizeRecovery @ 0x1406EEA7C (CmRmFinalizeRecovery.c)
 *     CmpRollbackTransactionArray @ 0x140831FD0 (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
