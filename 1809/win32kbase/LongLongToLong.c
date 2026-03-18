/*
 * XREFs of LongLongToLong @ 0x1C0068E74
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C0113D34 (rimConvertCoordinatesWithRounding.c)
 *     ConvertCoordinates @ 0x1C0150D18 (ConvertCoordinates.c)
 *     GetAdjustedHimetricLong @ 0x1C0150E80 (GetAdjustedHimetricLong.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C0151060 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C01519F0 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C015606C (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
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
