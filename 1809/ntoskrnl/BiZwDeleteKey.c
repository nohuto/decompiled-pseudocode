/*
 * XREFs of BiZwDeleteKey @ 0x1401594D4
 * Callers:
 *     BiDeleteKey @ 0x1406E1E6C (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1401B9B50 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
