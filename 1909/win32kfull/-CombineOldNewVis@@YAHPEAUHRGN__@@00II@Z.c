/*
 * XREFs of ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00F71B0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CombineOldNewVis(HRGN a1, HRGN a2, HRGN a3, __int64 a4, char a5)
{
  if ( (a5 & 3) != 0 )
  {
    if ( (a5 & 3) != 1 )
    {
      if ( (a5 & 3) != 2 )
        return (a5 & 3) != 3;
      if ( (_DWORD)a4 == 4 )
        return 0LL;
      a2 = a3;
    }
    GreCombineRgn(a1, a2, 0LL, 5LL);
    return 1LL;
  }
  return (unsigned int)GreCombineRgn(a1, a2, a3, a4) > 1;
}
