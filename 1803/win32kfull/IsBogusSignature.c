/*
 * XREFs of IsBogusSignature @ 0x1C0217D08
 * Callers:
 *     vFillIFICharsets @ 0x1C021BC34 (vFillIFICharsets.c)
 *     vFill_IFIMETRICS @ 0x1C021C0F0 (vFill_IFIMETRICS.c)
 * Callees:
 *     bContainGlyphSet @ 0x1C0218AD0 (bContainGlyphSet.c)
 */

_BOOL8 __fastcall IsBogusSignature(int a1, __int64 a2)
{
  __int64 v4; // rbx
  _BOOL8 result; // rax
  const wchar_t *v6; // rbx

  result = 1;
  if ( (a1 & 0x20000) != 0
    || *(_WORD *)(a2 + 312) != 2
    || (v4 = *(_QWORD *)(a2 + 88), !(unsigned int)bContainGlyphSet(65393LL, v4))
    || !(unsigned int)bContainGlyphSet(65394LL, v4)
    || !(unsigned int)bContainGlyphSet(65395LL, v4)
    || !(unsigned int)bContainGlyphSet(65396LL, v4)
    || !(unsigned int)bContainGlyphSet(65397LL, v4) )
  {
    if ( (a1 & 0x40000) == 0 )
      return 0;
    v6 = (const wchar_t *)(*(int *)(a2 + 372) + a2 + 352);
    if ( _wcsicmp(v6, L"Microsoft:MS Mincho:1995") )
    {
      if ( _wcsicmp(v6, L"Microsoft:MS PMincho:1995")
        && _wcsicmp(v6, L"Microsoft:MS Gothic:1995")
        && _wcsicmp(v6, L"Microsoft:MS PGothic:1995") )
      {
        return 0;
      }
    }
  }
  return result;
}
