/*
 * XREFs of BiZwOpenKey @ 0x140178170
 * Callers:
 *     BiCreateKey @ 0x14073F25C (BiCreateKey.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
