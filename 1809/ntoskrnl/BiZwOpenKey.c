/*
 * XREFs of BiZwOpenKey @ 0x14016E588
 * Callers:
 *     BiCreateKey @ 0x140713004 (BiCreateKey.c)
 *     BiOpenKey @ 0x1407137A0 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
