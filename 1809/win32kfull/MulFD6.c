/*
 * XREFs of MulFD6 @ 0x1C00150C4
 * Callers:
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     ComputeRGBLUTAA @ 0x1C0014B24 (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C00151F8 (AdjustSrcDevGamma.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0113328 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C011AB08 (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C011B05C (ComputeInverseMatrix3x3.c)
 *     CacheRGBToXYZ @ 0x1C02450DC (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C02451CC (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFD6(int a1, int a2)
{
  signed int v2; // ebx
  int v3; // r10d
  BOOL v4; // edi
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // r9d
  int v8; // ebx
  int v9; // r10d
  unsigned int v10; // r11d
  unsigned int v11; // ecx
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  __int64 result; // rax

  v2 = a2;
  v3 = a1;
  v4 = a1 <= 0;
  if ( a1 <= 0 )
  {
    v3 = -a1;
    if ( !a1 )
      return 0LL;
  }
  if ( a2 <= 0 )
  {
    v2 = -a2;
    if ( !a2 )
      return 0LL;
    v4 = a1 > 0;
  }
  if ( v3 != 1000000 )
  {
    if ( v2 == 1000000 )
    {
      v2 = v3;
    }
    else
    {
      v5 = (unsigned __int16)v2;
      v6 = (unsigned __int16)v3;
      v7 = (unsigned __int16)v3 * (unsigned __int16)v2;
      v8 = v2 >> 16;
      v9 = v3 >> 16;
      v10 = (unsigned __int16)(v5 * v9) + HIWORD(v7) + (unsigned __int16)(v6 * v8);
      v11 = ((unsigned int)(v5 * v9) >> 16) + ((unsigned int)(v6 * v8) >> 16) + v9 * v8 + HIWORD(v10);
      v12 = ((unsigned __int16)v7 | (v10 << 16)) + 500000;
      v13 = v11 + 1;
      if ( v12 >= 0x7A120 )
        v13 = v11;
      v2 = ((((v12 >> 20) | (v13 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v12 >> 4) | ((((v12 >> 20) | (v13 << 12))
                                                                                             + 3036
                                                                                             * (((v12 >> 20) | (v13 << 12))
                                                                                              / 0xF424)) << 16))
                                                           / 0xF424);
    }
  }
  result = (unsigned int)-v2;
  if ( !v4 )
    return (unsigned int)v2;
  return result;
}
