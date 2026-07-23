/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1800F9050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsNonEmptyDirectoryReparsePointAllowed(ULONG ReparseTag)
{
  return (ReparseTag & 0x10000000) != 0 || ReparseTag == -2147483624;
}
