/*
 * XREFs of _Getwctypes @ 0x1800AEF18
 * Callers:
 *     ?do_is@?$ctype@_W@std@@MEBAPEB_WPEB_W0PEAF@Z @ 0x180024410 (-do_is@-$ctype@_W@std@@MEBAPEB_WPEB_W0PEAF@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__cdecl Getwctypes(const wchar_t *a1, const wchar_t *a2, __int16 *a3, const _Ctypevec *a4)
{
  GetStringTypeW(1u, a1, a2 - a1, (LPWORD)a3);
  return a2;
}
