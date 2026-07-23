/*
 * XREFs of BiZwOpenKey @ 0x14016E6A8
 * Callers:
 *     BiCreateKey @ 0x140714284 (BiCreateKey.c)
 *     BiOpenKey @ 0x140714A20 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
