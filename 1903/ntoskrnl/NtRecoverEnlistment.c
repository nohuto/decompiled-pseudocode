/*
 * XREFs of NtRecoverEnlistment @ 0x14019ECD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  return __imp_NtRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
}
