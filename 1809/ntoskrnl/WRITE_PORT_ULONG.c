/*
 * XREFs of WRITE_PORT_ULONG @ 0x14013E0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_PORT_ULONG(PULONG Port, ULONG Value)
{
  __outdword((unsigned __int16)Port, Value);
}
