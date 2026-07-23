/*
 * XREFs of PopDecompressCallback @ 0x14057DCC0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x14057E27C (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
