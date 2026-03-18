/*
 * XREFs of NtPrePrepareComplete @ 0x14019EB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrePrepareComplete(EnlistmentHandle, TmVirtualClock);
}
