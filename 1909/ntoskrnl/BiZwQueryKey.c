/*
 * XREFs of BiZwQueryKey @ 0x1401781C0
 * Callers:
 *     BiEnumerateSubKeys @ 0x14073EB60 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x14073FE1C (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1401C0F10 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
