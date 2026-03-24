/*
 * XREFs of BiZwQueryKey @ 0x14016E5F8
 * Callers:
 *     BiEnumerateSubKeys @ 0x140712924 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140713B4C (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1401B8450 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
