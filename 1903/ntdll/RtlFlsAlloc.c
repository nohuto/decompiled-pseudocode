/*
 * XREFs of RtlFlsAlloc @ 0x180068BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  return sub_180068BD4(Callback, FlsIndex, Callback, FlsIndex);
}
