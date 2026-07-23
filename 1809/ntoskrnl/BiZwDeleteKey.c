/*
 * XREFs of BiZwDeleteKey @ 0x1401595D4
 * Callers:
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1401B9CB0 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
