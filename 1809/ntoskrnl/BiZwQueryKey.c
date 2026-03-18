/*
 * XREFs of BiZwQueryKey @ 0x14016E5D8
 * Callers:
 *     BiEnumerateSubKeys @ 0x140712944 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140713B6C (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1401B8430 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
