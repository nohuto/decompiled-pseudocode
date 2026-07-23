/*
 * XREFs of RtlFlsFree @ 0x180074600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return sub_180074610(FlsIndex, FlsIndex);
}
