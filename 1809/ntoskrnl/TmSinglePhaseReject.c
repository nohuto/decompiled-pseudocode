/*
 * XREFs of TmSinglePhaseReject @ 0x140194C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmSinglePhaseReject(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmSinglePhaseReject(Enlistment, TmVirtualClock);
}
