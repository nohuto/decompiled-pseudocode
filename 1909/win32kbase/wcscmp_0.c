/*
 * XREFs of wcscmp_0 @ 0x1C00BE77C
 * Callers:
 *     RIMGetProductString @ 0x1C013DE8C (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C01402D8 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
