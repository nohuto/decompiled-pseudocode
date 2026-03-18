/*
 * XREFs of MulDivFD6Pairs @ 0x1C00D4A84
 * Callers:
 *     ComputeColorSpaceXForm @ 0x1C00D3BC8 (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeBGRMappingTable @ 0x1C022F1B4 (ComputeBGRMappingTable.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00D33D0 (U64DivU32RoundUp.c)
 */

__int64 __fastcall MulDivFD6Pairs(int *a1)
{
  int v1; // ebp
  int *v2; // rsi
  signed int v3; // r11d
  unsigned int v4; // r10d
  signed int v5; // r9d
  int v6; // eax
  int v7; // r14d
  BOOL v8; // r15d
  int v9; // edi
  bool v10; // cc
  int v11; // eax
  int v12; // r14d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  int v15; // edi
  unsigned int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // ebx
  signed int v20; // eax
  BOOL v21; // ebx
  unsigned int v22; // edx
  __int64 result; // rax
  signed int v24; // ecx
  unsigned int v25; // r10d

  v1 = *(unsigned __int16 *)a1;
  v2 = a1;
  if ( !*(_WORD *)a1 )
    return 0LL;
  v3 = 0;
  if ( (*((_BYTE *)a1 + 2) & 1) != 0 )
  {
    v3 = a1[1];
    if ( v3 == 1000000 )
      v3 = 0;
  }
  v4 = 0;
  v5 = 0;
  do
  {
    v2 += 2;
    --v1;
    v6 = *v2;
    v7 = v2[1];
    v8 = *v2 <= 0;
    v9 = -*v2;
    v10 = *v2 <= 0;
    if ( *v2 <= 0 )
    {
      if ( !*v2 )
        continue;
      v10 = v6 <= 0;
    }
    if ( !v10 )
      v9 = *v2;
    if ( v7 <= 0 )
    {
      v7 = -v7;
      if ( !v7 )
        continue;
      v8 = v6 > 0;
    }
    v11 = (unsigned __int16)v7;
    v12 = v7 >> 16;
    v13 = v11 * (unsigned __int16)v9;
    v14 = (unsigned __int16)v9 * v12;
    v15 = v9 >> 16;
    v16 = (unsigned int)(v11 * v15) >> 16;
    v17 = (unsigned __int16)(v11 * v15) + HIWORD(v13) + (unsigned __int16)v14;
    v18 = (unsigned __int16)v13 | (v17 << 16);
    v19 = HIWORD(v17) + v15 * v12 + HIWORD(v14) + v16;
    if ( v8 )
    {
      v19 = ~v19;
      v18 = -v18;
      if ( !v18 )
        ++v19;
    }
    v20 = v5 + 1;
    v4 += v18;
    if ( v4 >= v18 )
      v20 = v5;
    v5 = v19 + v20;
  }
  while ( v1 );
  v21 = (unsigned int)v5 >> 31;
  if ( v5 < 0 )
  {
    v5 = ~v5;
    v4 = -v4;
    if ( !v4 )
      ++v5;
  }
  if ( v3 )
  {
    if ( v3 < 0 )
    {
      v3 = -v3;
      v21 = !v21;
    }
    v22 = U64DivU32RoundUp(v5, v4, v3);
  }
  else
  {
    v24 = v5 + 1;
    v25 = v4 + 500000;
    if ( v25 >= 0x7A120 )
      v24 = v5;
    v22 = ((((v25 >> 20) | (v24 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v25 >> 4) | ((((v25 >> 20) | (v24 << 12))
                                                                                            + 3036
                                                                                            * (((v25 >> 20) | (v24 << 12))
                                                                                             / 0xF424)) << 16))
                                                          / 0xF424);
  }
  result = -v22;
  if ( !v21 )
    return v22;
  return result;
}
