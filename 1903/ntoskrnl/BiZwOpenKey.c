/*
 * XREFs of BiZwOpenKey @ 0x140177A80
 * Callers:
 *     BiCreateKey @ 0x14073D35C (BiCreateKey.c)
 *     BiOpenKey @ 0x14073DB30 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
