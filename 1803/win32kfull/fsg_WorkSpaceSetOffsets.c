/*
 * XREFs of fsg_WorkSpaceSetOffsets @ 0x1C02BE8AC
 * Callers:
 *     fs_NewSfnt @ 0x1C02B1E24 (fs_NewSfnt.c)
 * Callees:
 *     fsg_GetOutlineSizeAndOffsets @ 0x1C02BD85C (fsg_GetOutlineSizeAndOffsets.c)
 */

__int64 __fastcall fsg_WorkSpaceSetOffsets(_WORD *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // ebp
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  unsigned int v13; // eax
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // cx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned __int16 v28; // ax
  __int64 result; // rax
  unsigned int v30; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 8) = 0;
  v5 = (unsigned __int16)a1[15];
  v7 = 20;
  v8 = 1;
  if ( (unsigned __int16)v5 > 1u )
    v8 = v5;
  if ( v8 >= 0x14 )
  {
    v9 = 20;
  }
  else
  {
    v9 = 1;
    if ( (unsigned __int16)v5 > 1u )
      v9 = v5;
  }
  v10 = (112 * v9 + 113) & 0xFFFFFFFE;
  *(_DWORD *)(a2 + 4) = v10;
  v11 = a1[4];
  v12 = a1[6];
  v13 = v11;
  if ( v11 <= v12 )
    v13 = (unsigned __int16)a1[6];
  if ( v13 <= 1 )
  {
    v11 = 1;
  }
  else if ( v11 <= v12 )
  {
    v11 = a1[6];
  }
  v14 = a1[3];
  v15 = a1[5];
  v16 = v14;
  if ( v14 <= v15 )
    v16 = (unsigned __int16)a1[5];
  if ( v16 <= 1 )
  {
    v14 = 1;
  }
  else if ( v14 <= v15 )
  {
    v14 = a1[5];
  }
  fsg_GetOutlineSizeAndOffsets(v14 + 8, v11, (unsigned int *)(a2 + 20), &v30, (unsigned int *)(a2 + 68));
  v17 = v30;
  v18 = 32 * (unsigned __int16)a1[3];
  if ( v30 - *(_DWORD *)(a2 + 68) < v18 )
    v17 = v18 + *(_DWORD *)(a2 + 68);
  v19 = *(_DWORD *)(a2 + 68) + *(_DWORD *)(a2 + 4);
  v20 = 1;
  *(_DWORD *)(a2 + 68) = v19;
  v21 = (v10 + v17 + 3) & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 12) = v21;
  v22 = a1[15];
  if ( v22 > 1u )
    v20 = (unsigned __int16)a1[15];
  if ( v20 < 0x14 )
  {
    v7 = 1;
    if ( v22 > 1u )
      v7 = (unsigned __int16)a1[15];
  }
  v23 = a1[14];
  v24 = 3;
  if ( v23 > 3u )
    v24 = v23;
  v25 = v7 + v24 + 1;
  v26 = (v21 + 7 + 4 * v25) & 0xFFFFFFF8;
  *(_DWORD *)(a2 + 16) = v26;
  v27 = (224 * v25 + v26 + 3) & 0xFFFFFFFC;
  *(_DWORD *)a2 = v27;
  v28 = a1[12];
  if ( !v28 )
    v28 = 1;
  result = v27 + 4 * v28;
  *a3 = result - v19;
  *(_QWORD *)(a2 + 72) = 0LL;
  return result;
}
