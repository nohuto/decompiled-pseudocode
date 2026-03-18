/*
 * XREFs of PopCompressCallback @ 0x14059A0F0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x14059A114 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
