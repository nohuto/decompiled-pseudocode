/*
 * XREFs of DivFD6 @ 0x1C00D331C
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C00D12C0 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C00D2880 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00D3114 (AdjustSrcDevGamma.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00D3970 (ComputeInverseMatrix3x3.c)
 *     ComputeColorSpaceXForm @ 0x1C00D3BC8 (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 *     BuildExpandAAInfo @ 0x1C0116CF0 (BuildExpandAAInfo.c)
 *     CreateStandardMonoPattern @ 0x1C012A568 (CreateStandardMonoPattern.c)
 *     HT_Get8BPPMaskPalette @ 0x1C012FC00 (HT_Get8BPPMaskPalette.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     HT_ComputeRGBGammaTable @ 0x1C022EA30 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C022ED70 (HT_Get8BPPFormatPalette.c)
 *     CacheRGBToXYZ @ 0x1C022F0C4 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C022F1B4 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1C022FF8C (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00D33D0 (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  BOOL v2; // ebx
  int v3; // r8d
  bool v4; // cc
  __int64 result; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // eax
  bool v9; // cf
  unsigned int v10; // ecx

  v2 = a2 <= 0;
  v3 = -a2;
  v4 = a2 <= 0;
  if ( a2 <= 0 )
  {
    if ( !a2 )
      return (a1 >> 31) + 0x80000000;
    v4 = a2 <= 0;
  }
  if ( !v4 )
    v3 = a2;
  if ( v3 == 1000000 )
  {
    result = (unsigned int)-a1;
    if ( a2 > 0 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 <= 0 )
    {
      a1 = -a1;
      if ( !a1 )
        return 0LL;
      v2 = a2 > 0;
    }
    if ( a1 == v3 )
    {
      return v2 ? -1000000 : 1000000;
    }
    else
    {
      v6 = 62500 * (unsigned __int16)a1;
      v7 = v6 - 198967296 * HIWORD(a1);
      v8 = (unsigned int)(62500 * HIWORD(a1)) >> 16;
      v9 = v6 >= 198967296 * HIWORD(a1);
      v10 = v8 + 1;
      if ( !v9 )
        v10 = v8;
      result = U64DivU32RoundUp((v7 >> 28) | (16 * v10), 16 * v7);
      if ( v2 )
        return (unsigned int)-(int)result;
    }
  }
  return result;
}
