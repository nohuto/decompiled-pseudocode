/*
 * XREFs of ?GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z @ 0x1C0183D68
 * Callers:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0183C24 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ConvertCoordinates @ 0x1C0184098 (ConvertCoordinates.c)
 */

__int64 __fastcall GetAdjustedHimetricWithoutRoundTripError(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        LONG plResult,
        int a7,
        int *a8)
{
  int v9; // r10d
  LONG v11; // ebx
  int *v14; // r11
  int v15; // ebx
  int v16; // r10d
  _DWORD *v17; // r11
  int v18; // eax

  v9 = a7;
  v11 = plResult;
  *a8 = plResult;
  if ( !v9 )
    return 1LL;
  if ( (unsigned int)ConvertCoordinates(0, a2 - a1, 0, a4 - a3, v9, &plResult) )
  {
    v15 = plResult + v11;
    *v14 = v15;
    if ( (unsigned int)ConvertCoordinates(a3, a4, a1, a2, v15, &plResult) )
    {
      if ( plResult != v16 + a5 )
      {
        v18 = 1;
        if ( v16 <= 0 )
          v18 = -1;
        *v17 = v15 + v18;
      }
      return 1LL;
    }
  }
  return 0LL;
}
