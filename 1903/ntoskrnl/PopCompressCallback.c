/*
 * XREFs of PopCompressCallback @ 0x14059A110
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x14059A134 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
