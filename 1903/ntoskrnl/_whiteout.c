/*
 * XREFs of _whiteout @ 0x1401A9058
 * Callers:
 *     _winput_s @ 0x1401A90B0 (_winput_s.c)
 * Callees:
 *     iswctype @ 0x1401A2C38 (iswctype.c)
 *     _fgetwc_nolock @ 0x1401A9B2C (_fgetwc_nolock.c)
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
