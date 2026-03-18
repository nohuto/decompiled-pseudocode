/*
 * XREFs of wcsstr_0 @ 0x1C0023385
 * Callers:
 *     DpiGetDriverStorePath @ 0x1C029C8A0 (DpiGetDriverStorePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsstr_0(const wchar_t *Str, const wchar_t *SubStr)
{
  return wcsstr(Str, SubStr);
}
