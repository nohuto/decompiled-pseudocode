/*
 * XREFs of TmCommitComplete @ 0x14019EE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitComplete(Enlistment, TmVirtualClock);
}
