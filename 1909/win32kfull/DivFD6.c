/*
 * XREFs of DivFD6 @ 0x1C00C43C4
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C00C2210 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C00C37D8 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00C4178 (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x1C00C4610 (RaisePower.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00C51B4 (ComputeInverseMatrix3x3.c)
 *     ComputeColorSpaceXForm @ 0x1C00C5410 (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00C5780 (HT_CreateDeviceHalftoneInfo.c)
 *     BuildExpandAAInfo @ 0x1C00D1E40 (BuildExpandAAInfo.c)
 *     CreateStandardMonoPattern @ 0x1C0150C40 (CreateStandardMonoPattern.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0154F50 (HT_Get8BPPMaskPalette.c)
 *     HT_ComputeRGBGammaTable @ 0x1C025D1B0 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C025D4E0 (HT_Get8BPPFormatPalette.c)
 *     CacheRGBToXYZ @ 0x1C025D840 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C025D930 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1C025E6D4 (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00C4464 (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // eax
  bool v8; // cf
  unsigned int v9; // ecx

  v2 = a2;
  if ( a2 <= 0 )
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (a1 >> 31) + 0x80000000;
  }
  else
  {
    v3 = 0;
  }
  if ( v2 == 1000000 )
  {
    result = (unsigned int)-a1;
    if ( !v3 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 <= 0 )
    {
      a1 = -a1;
      if ( !a1 )
        return 0LL;
      v3 ^= 1u;
    }
    if ( a1 == v2 )
    {
      return v3 != 0 ? -1000000 : 1000000;
    }
    else
    {
      v5 = 62500 * (unsigned __int16)a1;
      v6 = v5 - 198967296 * HIWORD(a1);
      v7 = (unsigned int)(62500 * HIWORD(a1)) >> 16;
      v8 = v5 >= 198967296 * HIWORD(a1);
      v9 = v7 + 1;
      if ( !v8 )
        v9 = v7;
      result = U64DivU32RoundUp((v6 >> 28) | (16 * v9), 16 * v6, v2);
      if ( v3 )
        return (unsigned int)-(int)result;
    }
  }
  return result;
}
