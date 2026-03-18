/*
 * XREFs of TmPrepareEnlistment @ 0x14019F750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrepareEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrepareEnlistment(Enlistment, TmVirtualClock);
}
