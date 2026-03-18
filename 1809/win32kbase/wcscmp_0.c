/*
 * XREFs of wcscmp_0 @ 0x1C00AE91A
 * Callers:
 *     RIMGetProductString @ 0x1C0117DDC (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C011A0E0 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
