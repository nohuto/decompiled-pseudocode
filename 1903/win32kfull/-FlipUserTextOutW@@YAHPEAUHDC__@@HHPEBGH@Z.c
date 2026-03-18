/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011C018
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C011BBE4 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BCFC (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02B85E0 (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, LONG a2, LONG a3, unsigned __int16 *a4)
{
  unsigned int v8; // ebx
  int TextAlign; // eax
  int v11; // ebp

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      TextAlign = GreGetTextAlign(a1);
      v11 = TextAlign;
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
      v8 = GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1, v11);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1u, 0LL, 0LL, 0);
  }
  return v8;
}
