/*
 * XREFs of NtRollbackComplete @ 0x14019F450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtRollbackComplete(EnlistmentHandle, TmVirtualClock);
}
