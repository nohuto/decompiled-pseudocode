/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C0100F20
 * Callers:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0022044 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0100E08 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 * Callees:
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreExtTextOutWInternal @ 0x1C0125908 (GreExtTextOutWInternal.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1C02B8130 (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, int a2, int a3, unsigned __int16 *a4)
{
  unsigned int v8; // ebx

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
      v8 = GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1, 0LL, 0LL, 0);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, a4, 1, 0LL, 0LL, 0);
  }
  return v8;
}
