/*
 * XREFs of MulFD6 @ 0x1C00D17C8
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C00D12C0 (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C00D3114 (AdjustSrcDevGamma.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00D3970 (ComputeInverseMatrix3x3.c)
 *     ComputeColorSpaceXForm @ 0x1C00D3BC8 (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     CacheRGBToXYZ @ 0x1C022F0C4 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C022F1B4 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFD6(int a1, int a2)
{
  signed int v2; // r11d
  BOOL v3; // edi
  int v4; // ebx
  bool v5; // cc
  int v6; // eax
  int v7; // r9d
  int v8; // r11d
  unsigned int v9; // r9d
  unsigned int v10; // edx
  int v11; // ebx
  unsigned int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // r11d
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  __int64 result; // rax

  v2 = a2;
  v3 = a1 <= 0;
  v4 = -a1;
  v5 = a1 <= 0;
  if ( a1 <= 0 )
  {
    if ( !a1 )
      return 0LL;
    v5 = a1 <= 0;
  }
  if ( !v5 )
    v4 = a1;
  if ( a2 > 0 )
    goto LABEL_5;
  v2 = -a2;
  if ( !a2 )
    return 0LL;
  v3 = a1 > 0;
LABEL_5:
  if ( v4 != 1000000 )
  {
    if ( v2 == 1000000 )
    {
      v2 = v4;
    }
    else
    {
      v6 = (unsigned __int16)v2;
      v7 = (unsigned __int16)v2;
      v8 = v2 >> 16;
      v9 = (unsigned __int16)v4 * v7;
      v10 = (unsigned __int16)v4 * v8;
      v11 = v4 >> 16;
      v12 = (unsigned int)(v6 * v11) >> 16;
      v13 = (unsigned __int16)(v6 * v11) + HIWORD(v9) + (unsigned __int16)v10;
      v14 = v12 + HIWORD(v10) + HIWORD(v13) + v11 * v8;
      v15 = ((unsigned __int16)v9 | (v13 << 16)) + 500000;
      v16 = v14 + 1;
      if ( v15 >= 0x7A120 )
        v16 = v14;
      v2 = ((((v15 >> 20) | (v16 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v15 >> 4) | ((((v15 >> 20) | (v16 << 12))
                                                                                             + 3036
                                                                                             * (((v15 >> 20) | (v16 << 12))
                                                                                              / 0xF424)) << 16))
                                                           / 0xF424);
    }
  }
  result = (unsigned int)-v2;
  if ( !v3 )
    return (unsigned int)v2;
  return result;
}
