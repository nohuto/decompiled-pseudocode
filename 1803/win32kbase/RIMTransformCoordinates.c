/*
 * XREFs of RIMTransformCoordinates @ 0x1C00E95A4
 * Callers:
 *     RIMApplyTransforms @ 0x1C00E8AC8 (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C00E98D0 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     ApiSetAdjustLinearity @ 0x1C013D34C (ApiSetAdjustLinearity.c)
 */

unsigned __int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  int v5; // eax
  signed int *v6; // rsi
  __int64 *v7; // rdx
  signed int v9; // r10d
  _DWORD *v10; // r9
  signed int v11; // r13d
  signed int v12; // r8d
  int v13; // r15d
  int v14; // edi
  signed int v15; // r14d
  signed int v16; // ebx
  signed int v17; // eax
  signed int v18; // ecx
  __int64 v19; // rdx
  signed int v20; // r10d
  int v21; // r11d
  int v22; // edx
  unsigned int v23; // r13d
  unsigned int v24; // eax
  int v25; // eax
  signed int v26; // r9d
  signed int v27; // edx
  int v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // r11
  int v31; // eax
  unsigned int v32; // r11d
  unsigned int v33; // r13d
  signed int v34; // eax
  int v35; // edi
  signed int v36; // r13d
  bool v37; // zf
  __int64 v38; // rcx
  unsigned __int64 result; // rax
  _QWORD *v40; // rcx
  int v41; // ecx
  int v42; // edi
  signed int v43; // [rsp+20h] [rbp-38h] BYREF
  signed int v44; // [rsp+24h] [rbp-34h]
  unsigned int v45; // [rsp+28h] [rbp-30h]
  int v46; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v47; // [rsp+30h] [rbp-28h]
  unsigned int v48; // [rsp+34h] [rbp-24h]
  int v49; // [rsp+38h] [rbp-20h]
  int v50; // [rsp+3Ch] [rbp-1Ch]
  int v51; // [rsp+40h] [rbp-18h]
  int v54; // [rsp+B0h] [rbp+58h] BYREF
  _QWORD *v55; // [rsp+B8h] [rbp+60h]

  v55 = a4;
  v5 = *(_DWORD *)(a1 + 224);
  v6 = a3 + 1;
  v7 = *(__int64 **)(a1 + 304);
  v9 = *a3;
  v10 = (_DWORD *)a1;
  v11 = *(_DWORD *)(a1 + 124);
  v12 = v9;
  v46 = 0;
  v13 = 1;
  v14 = *(_DWORD *)(a1 + 132);
  v15 = *(_DWORD *)(a1 + 128);
  v16 = *(_DWORD *)(a1 + 136);
  v51 = v5;
  v54 = v9;
  v44 = v11;
  *a5 = 0;
  v17 = *v6;
  v18 = *v6;
  v43 = *v6;
  if ( v7 )
  {
    v19 = *v7;
    if ( v19 )
    {
      v46 = 1;
      ApiSetAdjustLinearity(v19 + 16, &v54, &v43, v10 + 31);
      v12 = v54;
      v9 = v54;
      v18 = v43;
      v17 = v43;
      v10 = (_DWORD *)a1;
      *a3 = v54;
      *v6 = v18;
    }
  }
  if ( v9 <= v14 )
  {
    if ( v9 < v11 )
    {
      *a3 = v11;
      v12 = v11;
    }
  }
  else
  {
    *a3 = v14;
    v12 = v14;
  }
  if ( v17 <= v16 )
  {
    if ( v17 < v15 )
    {
      *v6 = v15;
      v18 = v15;
    }
  }
  else
  {
    *v6 = v16;
    v18 = v16;
  }
  v20 = v12;
  v21 = v10[52];
  v22 = v10[55];
  v23 = v10[37];
  v50 = v10[34];
  v47 = v10[38];
  v24 = v10[54] - v21;
  v54 = v12;
  v45 = v24;
  v25 = v10[53];
  v26 = v12;
  v48 = v22 - v25;
  v27 = v12;
  v49 = v25;
  v28 = v12;
  v43 = v18;
  if ( v23 > v45 )
  {
    v29 = *(_DWORD *)(a1 + 132) * v21;
    v30 = a5;
    v31 = v29 / v23;
    if ( v12 < v31 )
      *a5 = 1;
    if ( v12 <= v31 )
      v12 = -1;
    else
      v12 = v23 * (v12 - v31) / v45;
    v54 = v12;
    v20 = v12;
    v28 = v12;
    v27 = v12;
    v26 = v12;
    if ( v12 > v14 )
    {
      v12 = v14 + 1;
      *v30 = 1;
      v20 = v14 + 1;
      v54 = v14 + 1;
      v28 = v14 + 1;
      v27 = v14 + 1;
      v26 = v14 + 1;
    }
  }
  v32 = v47;
  v33 = v48;
  if ( v47 > v48 )
  {
    v26 = v20;
    v34 = v50 * v49 / v47;
    if ( v18 < v34 )
      *a5 = 1;
    if ( v18 <= v34 )
    {
      v18 = -1;
      v26 = v20;
    }
    else
    {
      v18 = v32 * (v18 - v34) / v33;
    }
    v43 = v18;
    v28 = v26;
    v27 = v26;
    if ( v18 > v16 )
    {
      v18 = v16 + 1;
      v43 = v16 + 1;
      *a5 = 1;
      v28 = v26;
    }
  }
  switch ( v51 )
  {
    case 2:
      v43 = v28;
      v35 = v16 ^ v14;
      v12 = v15 + v16 - v18;
      v16 ^= v35;
      v54 = v12;
      v14 = v16 ^ v35;
      v18 = v28;
      break;
    case 3:
      v36 = v44;
      v12 = v44 + v14 - v27;
      v54 = v12;
      v18 = v15 + v16 - v18;
      v43 = v18;
      goto LABEL_31;
    case 4:
      v36 = v44;
      v12 = v18;
      v54 = v18;
      v41 = v14 - v26;
      v42 = v16 ^ v14;
      v18 = v44 + v41;
      v16 ^= v42;
      v43 = v18;
      v14 = v16 ^ v42;
      goto LABEL_31;
  }
  v36 = v44;
LABEL_31:
  v37 = v46 == 0;
  *a3 = v12;
  *v6 = v18;
  if ( !v37 )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 80LL);
    if ( v38 )
    {
      ApiSetAdjustLinearity(v38 + 16, &v54, &v43, a1 + 192);
      *a3 = v54;
      *v6 = v43;
    }
  }
  result = (unsigned __int64)a5;
  v40 = v55;
  if ( *a5 )
  {
    result = *(_QWORD *)a3;
    *v55 = *(_QWORD *)a3;
  }
  if ( a2 )
  {
    if ( (int)*v40 <= v14 && (unsigned int)*v40 != -1 )
      v13 = 0;
    if ( v13 )
    {
      v6 = a3;
      v16 = v14;
      v15 = v36;
    }
    result = (unsigned int)(v16 - *v6);
    if ( *v6 - v15 < (int)result )
      v16 = v15;
    *v6 = v16;
  }
  return result;
}
