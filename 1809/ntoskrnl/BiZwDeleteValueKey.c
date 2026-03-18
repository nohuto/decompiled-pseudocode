/*
 * XREFs of BiZwDeleteValueKey @ 0x14016E658
 * Callers:
 *     BiDeleteRegistryValue @ 0x140711814 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1401B9B90 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
