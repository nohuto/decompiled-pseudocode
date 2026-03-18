/*
 * XREFs of BiZwDeleteKey @ 0x1401694F4
 * Callers:
 *     BiDeleteKey @ 0x14072A888 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1401C2630 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
