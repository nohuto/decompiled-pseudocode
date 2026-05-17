/*
 * XREFs of _wcstoui64 @ 0x18008E4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008E4D4 @ 0x18008E4D4 (sub_18008E4D4.c)
 */

unsigned __int64 __cdecl wcstoui64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18008E4D4((unsigned int)&off_180118AE8, (_DWORD)String, (_DWORD)EndPtr, Radix, 1, 0LL);
}
