/*
 * XREFs of PopCompressCallback @ 0x14056B5D0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
