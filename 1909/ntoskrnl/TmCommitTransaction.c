/*
 * XREFs of TmCommitTransaction @ 0x14019F590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitTransaction(PKTRANSACTION Transaction, BOOLEAN Wait)
{
  return __imp_TmCommitTransaction(Transaction, Wait);
}
