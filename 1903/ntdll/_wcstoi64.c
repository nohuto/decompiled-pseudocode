/*
 * XREFs of _wcstoi64 @ 0x18008E470
 * Callers:
 *     _wtoi64 @ 0x18008E820 (_wtoi64.c)
 * Callees:
 *     sub_18008E4D4 @ 0x18008E4D4 (sub_18008E4D4.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18008E4D4((unsigned int)&off_180118AE8, (_DWORD)String, (_DWORD)EndPtr, Radix, 0, 0LL);
}
