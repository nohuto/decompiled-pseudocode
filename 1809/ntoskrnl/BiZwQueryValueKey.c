/*
 * XREFs of BiZwQueryValueKey @ 0x14016E57C
 * Callers:
 *     BiGetRegistryValue @ 0x1407131A4 (BiGetRegistryValue.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall BiZwQueryValueKey(
        void *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, Length, ResultLength);
}
