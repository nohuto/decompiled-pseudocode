/*
 * XREFs of BiZwDeleteValueKey @ 0x14016E678
 * Callers:
 *     BiDeleteRegistryValue @ 0x1407117F4 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1401B9BB0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
