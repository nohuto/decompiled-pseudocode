/*
 * XREFs of BiZwDeleteKey @ 0x140169AA4
 * Callers:
 *     BiDeleteKey @ 0x140729518 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1401C1AB0 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
