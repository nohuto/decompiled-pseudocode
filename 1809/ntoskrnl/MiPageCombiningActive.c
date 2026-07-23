/*
 * XREFs of MiPageCombiningActive @ 0x1400EFB60
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1400EF834 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6696) == 0;
  else
    v1 = dword_14043B784 == 0;
  return !v1;
}
