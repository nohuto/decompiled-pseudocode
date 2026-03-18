/*
 * XREFs of fsg_PrivateFontSpaceSize @ 0x1C02BE038
 * Callers:
 *     fs_NewSfnt @ 0x1C02B1E24 (fs_NewSfnt.c)
 * Callees:
 *     fsg_GetOutlineSizeAndOffsets @ 0x1C02BD85C (fsg_GetOutlineSizeAndOffsets.c)
 */

__int64 __fastcall fsg_PrivateFontSpaceSize(_DWORD *a1, unsigned __int16 *a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // r10d
  int v9; // r11d
  int v10; // eax
  unsigned int v11; // edx
  int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // r9d
  int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  int v33; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0;
  v6 = 4 * a2[9];
  a3[1] = v6;
  v9 = v6 + 8 * a2[10];
  a3[2] = v9;
  v10 = a2[11];
  v11 = -1;
  v12 = v9 + 8 * v10;
  v13 = 256;
  a3[3] = v12;
  v14 = a1[15] >> 1;
  if ( v14 > 0x100 )
    v13 = v14;
  v15 = 4LL * v13;
  if ( v15 > 0xFFFFFFFF )
    return 5120LL;
  v16 = 4 * v13;
  if ( v12 + (int)v15 >= (unsigned int)v15 )
    v11 = v12 + v15;
  a3[4] = v11;
  if ( v12 + (int)v15 < (unsigned int)v15 )
    return 5120LL;
  v17 = (v11 + 7) & 0xFFFFFFF8;
  a3[4] = v17;
  if ( v17 < v11 )
    return 5120LL;
  v18 = v17 + 480;
  a3[21] = v17 + 480;
  if ( v17 + 480 < v17 )
    return 5120LL;
  v19 = v18 + 4 * a2[9];
  a3[22] = v19;
  if ( v19 < v18 )
    return 5120LL;
  v20 = v19 + 8 * a2[10];
  a3[23] = v20;
  if ( v20 < v19 )
    return 5120LL;
  v21 = v20 + 8 * a2[11];
  a3[24] = v21;
  if ( v21 < v20 )
    return 5120LL;
  v22 = v21 + v16;
  a3[25] = v21 + v16;
  if ( v21 + v16 < v21 )
    return 5120LL;
  v23 = (v22 + 7) & 0xFFFFFFF8;
  a3[25] = v23;
  if ( v23 < v22 )
    return 5120LL;
  v24 = v23 + 480;
  a3[5] = v23 + 480;
  if ( v23 + 480 < v23 )
    return 5120LL;
  v25 = v24 + a1[25];
  a3[6] = v25;
  if ( v25 < v24 )
    return 5120LL;
  v26 = v25 + a1[17];
  a3[7] = v26;
  if ( v26 < v25 )
    return 5120LL;
  v27 = (v26 + 7) & 0xFFFFFFF8;
  a3[7] = v27;
  if ( v27 < v26 )
    return 5120LL;
  a3[26] = v27 + 112;
  if ( v27 + 112 < v27 )
    return 5120LL;
  a3[8] = v27 + 224;
  if ( v27 + 224 < v27 + 112 )
    return 5120LL;
  fsg_GetOutlineSizeAndOffsets(a2[8], 1u, a3 + 9, &v33, &v34);
  v28 = a3[8];
  v29 = v33;
  v30 = v28 + v33;
  a3[27] = v28 + v33;
  if ( v30 < v28 )
    return 5120LL;
  v31 = (v30 + 3) & 0xFFFFFFFC;
  a3[27] = v31;
  if ( v31 < v30 )
    return 5120LL;
  *a4 = v29 + v31 - *a3;
  return 0LL;
}
