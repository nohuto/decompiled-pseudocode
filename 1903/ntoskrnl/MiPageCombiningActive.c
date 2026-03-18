/*
 * XREFs of MiPageCombiningActive @ 0x1400F233C
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1400F2000 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 7464) == 0;
  else
    v1 = dword_1404660C4 == 0;
  return !v1;
}
