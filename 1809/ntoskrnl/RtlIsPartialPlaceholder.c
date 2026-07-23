/*
 * XREFs of RtlIsPartialPlaceholder @ 0x140898DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsPartialPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x440000) != 0;
}
