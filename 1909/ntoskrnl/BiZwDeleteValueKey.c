/*
 * XREFs of BiZwDeleteValueKey @ 0x140178240
 * Callers:
 *     BiDeleteRegistryValue @ 0x14073D820 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
