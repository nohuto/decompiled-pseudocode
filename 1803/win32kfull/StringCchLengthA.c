/*
 * XREFs of StringCchLengthA @ 0x1C0225B84
 * Callers:
 *     bBmfdLoadFont @ 0x1C0225D40 (bBmfdLoadFont.c)
 *     vBmfdFill_IFIMETRICS @ 0x1C02268EC (vBmfdFill_IFIMETRICS.c)
 *     cjVTFDIFIMETRICS @ 0x1C0229258 (cjVTFDIFIMETRICS.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0229378 (vVtfdFill_IFIMetrics.c)
 *     vtfdQueryFontFile @ 0x1C022A420 (vtfdQueryFontFile.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchLengthA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  HRESULT result; // eax

  if ( psz )
  {
    v3 = cchMax;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0x80070057 : 0;
    if ( pcchLength )
    {
      if ( v3 )
        *pcchLength = cchMax - v3;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -2147024809;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
