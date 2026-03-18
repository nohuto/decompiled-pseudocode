/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1C0147004
 * Callers:
 *     RIMApplyTransforms @ 0x1C0145F10 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C0146630 (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0146D80 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0146E50 (RIMTransformDimensionFromDigitizer.c)
 *     rimComputeHimetricGeometry @ 0x1C0155A38 (rimComputeHimetricGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C01460B0 (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // xmm1
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(_OWORD *)(a1 + 192);
  v6 = *(_OWORD *)(a1 + 176);
  *(_OWORD *)v7 = v4;
  result = RIMConvertPointCoordinates(a2, v7, (int *)&v6, (_QWORD *)a3);
  if ( !(_DWORD)result )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  return result;
}
