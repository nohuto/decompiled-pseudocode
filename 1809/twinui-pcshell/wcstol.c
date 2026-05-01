/*
 * XREFs of wcstol @ 0x1800850D8
 * Callers:
 *     ?LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z @ 0x1802F73C8 (-LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return __imp_wcstol(String, EndPtr, Radix);
}
