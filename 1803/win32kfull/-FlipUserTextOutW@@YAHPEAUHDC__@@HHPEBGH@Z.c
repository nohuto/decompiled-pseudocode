/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C000C8A4
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C000C78C (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0012940 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     GreSetGraphicsMode @ 0x1C028E160 (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, __int64 a2, __int64 a3, const unsigned __int16 *a4)
{
  unsigned int v6; // ebx

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v6 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
      v6 = GreExtTextOutWInternal(a1, 0LL, (__int64)a4, 1, 0LL, 0LL, 0);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutWInternal(a1, 0LL, (__int64)a4, 1, 0LL, 0LL, 0);
  }
  return v6;
}
