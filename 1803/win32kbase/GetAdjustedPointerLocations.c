/*
 * XREFs of GetAdjustedPointerLocations @ 0x1C012E1A0
 * Callers:
 *     <none>
 * Callees:
 *     GetAdjustedHimetric @ 0x1C012DF70 (GetAdjustedHimetric.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C012E260 (GetAdjustedPointerPixelLocation.c)
 */

__int64 __fastcall GetAdjustedPointerLocations(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int *a10)
{
  unsigned int v13; // r14d

  v13 = 0;
  if ( !(unsigned int)GetAdjustedHimetric(a1, a2, a5, a7, a10)
    || !(unsigned int)GetAdjustedPointerPixelLocation(a1, a5, a6)
    || !(unsigned int)GetAdjustedHimetric(a3, a4, a5, a9, a10) )
  {
    return 0LL;
  }
  LOBYTE(v13) = (unsigned int)GetAdjustedPointerPixelLocation(a3, a5, a8) != 0;
  return v13;
}
