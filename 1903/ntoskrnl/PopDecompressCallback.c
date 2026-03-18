/*
 * XREFs of PopDecompressCallback @ 0x1405ACB70
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x1405AD13C (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
