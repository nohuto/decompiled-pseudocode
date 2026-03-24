/*
 * XREFs of BiZwOpenKey @ 0x14016E5A8
 * Callers:
 *     BiCreateKey @ 0x140712FE4 (BiCreateKey.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
