/*
 * XREFs of BiZwDeleteKey @ 0x1401594B4
 * Callers:
 *     BiDeleteKey @ 0x1406E1E8C (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1401B9B30 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
