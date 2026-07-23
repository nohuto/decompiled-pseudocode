/*
 * XREFs of NtFreezeTransactions @ 0x1401944F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl NtFreezeTransactions(PLARGE_INTEGER FreezeTimeout, PLARGE_INTEGER ThawTimeout)
{
  return __imp_NtFreezeTransactions(FreezeTimeout, ThawTimeout);
}
