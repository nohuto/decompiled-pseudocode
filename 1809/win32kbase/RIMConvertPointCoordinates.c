/*
 * XREFs of RIMConvertPointCoordinates @ 0x1C0112C10
 * Callers:
 *     RIMTransformDimensionFromDigitizer @ 0x1C0113970 (RIMTransformDimensionFromDigitizer.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0113AB0 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C0113B24 (RIMTransformPointerDevicePointToPhysical.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C0113D34 (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  unsigned int v7; // ecx
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 plResult; // [rsp+48h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  v7 = rimConvertCoordinatesWithRounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  if ( v7 )
  {
    v7 = rimConvertCoordinatesWithRounding(a2[1], a2[3], a3[1], a3[3], v9, (LONG *)&plResult + 1);
    if ( v7 )
      *a4 = plResult;
  }
  return v7;
}
