/*
 * XREFs of LongLongToLong @ 0x1C0123580
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C0147054 (rimConvertCoordinatesWithRounding.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C0183D0C (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ConvertCoordinates @ 0x1C0184098 (ConvertCoordinates.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01841E0 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C0184E10 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C018E73C (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  HRESULT result; // eax

  if ( (unsigned __int64)(llOperand + 0x80000000LL) > 0xFFFFFFFF )
  {
    result = -2147024362;
    LODWORD(llOperand) = -1;
  }
  else
  {
    result = 0;
  }
  *plResult = llOperand;
  return result;
}
