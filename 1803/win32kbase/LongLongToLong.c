/*
 * XREFs of LongLongToLong @ 0x1C00C066C
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C00E9D84 (rimConvertCoordinatesWithRounding.c)
 *     ConvertCoordinates @ 0x1C012DDA8 (ConvertCoordinates.c)
 *     GetAdjustedHimetricLong @ 0x1C012E060 (GetAdjustedHimetricLong.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C012E260 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C012EEA0 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C0131F6C (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
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
