/*
 * XREFs of BiZwDeleteValueKey @ 0x140177B50
 * Callers:
 *     BiDeleteRegistryValue @ 0x14073B920 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
