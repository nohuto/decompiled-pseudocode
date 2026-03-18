/*
 * XREFs of MulDivFD6Pairs @ 0x1C011AE9C
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0113328 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C011AB08 (ComputeColorSpaceXForm.c)
 *     ComputeBGRMappingTable @ 0x1C02451CC (ComputeBGRMappingTable.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00154E8 (U64DivU32RoundUp.c)
 */

__int64 __fastcall MulDivFD6Pairs(int *a1)
{
  int v1; // r14d
  int *v2; // rbx
  signed int v3; // r11d
  unsigned int v4; // r10d
  signed int v5; // r9d
  int v6; // esi
  int v7; // ebp
  BOOL v8; // r15d
  int v9; // eax
  int v10; // esi
  unsigned int v11; // r8d
  unsigned int v12; // edx
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  signed int v18; // eax
  BOOL v19; // ebx
  unsigned int v20; // edx
  __int64 result; // rax
  signed int v22; // ecx
  unsigned int v23; // r10d

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
    v6 = v2[1];
    v7 = *v2;
    v8 = *v2 <= 0;
    if ( *v2 > 0 || (v7 = -v7) != 0 )
    {
      if ( v6 <= 0 )
      {
        v6 = -v6;
        if ( !v6 )
          continue;
        v8 = *v2 > 0;
      }
      v9 = (unsigned __int16)v6;
      v10 = v6 >> 16;
      v11 = v9 * (unsigned __int16)v7;
      v12 = (unsigned __int16)v7 * v10;
      v13 = v7 >> 16;
      v14 = (unsigned int)(v9 * v13) >> 16;
      v15 = (unsigned __int16)(v9 * v13) + HIWORD(v11) + (unsigned __int16)v12;
      v16 = (unsigned __int16)v11 | (v15 << 16);
      v17 = HIWORD(v15) + v13 * v10 + HIWORD(v12) + v14;
      if ( v8 )
      {
        v17 = ~v17;
        v16 = -v16;
        if ( !v16 )
          ++v17;
      }
      v18 = v5 + 1;
      v4 += v16;
      if ( v4 >= v16 )
        v18 = v5;
      v5 = v17 + v18;
    }
  }
  while ( v1 );
  v19 = (unsigned int)v5 >> 31;
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
      v19 = !v19;
    }
    v20 = U64DivU32RoundUp(v5, v4, v3);
  }
  else
  {
    v22 = v5 + 1;
    v23 = v4 + 500000;
    if ( v23 >= 0x7A120 )
      v22 = v5;
    v20 = ((((v23 >> 20) | (v22 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v23 >> 4) | ((((v23 >> 20) | (v22 << 12))
                                                                                            + 3036
                                                                                            * (((v23 >> 20) | (v22 << 12))
                                                                                             / 0xF424)) << 16))
                                                          / 0xF424);
  }
  result = -v20;
  if ( !v19 )
    return v20;
  return result;
}
