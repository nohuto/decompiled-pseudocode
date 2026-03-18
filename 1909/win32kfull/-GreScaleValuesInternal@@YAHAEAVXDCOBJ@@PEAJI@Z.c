/*
 * XREFs of ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0148664
 * Callers:
 *     NtGdiFrameRgn @ 0x1C01467C0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0147B70 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0148050 (NtGdiFillRgn.c)
 *     GreScaleValues @ 0x1C0298E64 (GreScaleValues.c)
 * Callees:
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0100D1C (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreScaleValuesInternal(DC **a1, int *a2, unsigned int a3)
{
  __int64 v7; // rbx
  int *i; // rdi

  if ( !(unsigned int)DC::bDpiScaleTransform(*a1) )
    return 1LL;
  v7 = 0LL;
  if ( !a3 )
    return 1LL;
  for ( i = a2; (unsigned int)bFToL((float)*i * *((float *)*a1 + 131), &a2[v7], 6u); ++i )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= a3 )
      return 1LL;
  }
  return 0LL;
}
