/*
 * XREFs of TmReadOnlyEnlistment @ 0x140194AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReadOnlyEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmReadOnlyEnlistment(Enlistment, TmVirtualClock);
}
