/*
 * XREFs of _whiteout @ 0x18009E46C
 * Callers:
 *     _winput_s @ 0x18009E4C4 (_winput_s.c)
 * Callees:
 *     iswctype @ 0x180093870 (iswctype.c)
 *     _fgetwc_nolock @ 0x18009EE9C (_fgetwc_nolock.c)
 */

__int64 __fastcall whiteout(_DWORD *a1, FILE *a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = fgetwc_nolock(a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
