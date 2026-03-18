/*
 * XREFs of RIMTransformCoordinates @ 0x1C01443FC
 * Callers:
 *     RIMApplyTransforms @ 0x1C01438A0 (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0144710 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     EngMulDiv @ 0x1C004D390 (EngMulDiv.c)
 *     ApiSetAdjustLinearity @ 0x1C0198B6C (ApiSetAdjustLinearity.c)
 */

unsigned __int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  INT v5; // r10d
  int *v6; // r12
  int v7; // eax
  INT v9; // edi
  INT v10; // edx
  int v11; // r13d
  int v12; // r14d
  INT v13; // esi
  INT v14; // eax
  int v15; // ebx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  INT v18; // r10d
  unsigned int v19; // edx
  INT v20; // r9d
  INT v21; // r15d
  INT v22; // r11d
  unsigned int v23; // eax
  int v24; // r15d
  INT v25; // eax
  INT v26; // eax
  INT v27; // eax
  int v28; // edi
  int v29; // r14d
  __int64 v30; // rcx
  unsigned __int64 result; // rax
  int v32; // eax
  int v33; // [rsp+20h] [rbp-48h] BYREF
  INT v34; // [rsp+24h] [rbp-44h] BYREF
  INT v35; // [rsp+28h] [rbp-40h]
  INT v36; // [rsp+2Ch] [rbp-3Ch]
  INT v37; // [rsp+30h] [rbp-38h]
  INT v38; // [rsp+34h] [rbp-34h]
  INT v39; // [rsp+38h] [rbp-30h]
  int v40; // [rsp+3Ch] [rbp-2Ch]
  INT c; // [rsp+40h] [rbp-28h]
  INT b; // [rsp+44h] [rbp-24h]
  int v43; // [rsp+48h] [rbp-20h]
  int v44; // [rsp+4Ch] [rbp-1Ch]
  int v45; // [rsp+50h] [rbp-18h]
  __int64 v46; // [rsp+B0h] [rbp+48h]

  v46 = a1;
  v5 = *a3;
  v6 = a3 + 1;
  v7 = *(_DWORD *)(a1 + 224);
  v40 = 0;
  v9 = v5;
  v10 = *(_DWORD *)(a1 + 124);
  v11 = *(_DWORD *)(a1 + 128);
  v43 = *(_DWORD *)(a1 + 132);
  v12 = v43 - 1;
  v45 = v7;
  v44 = *(_DWORD *)(a1 + 136);
  v33 = v5;
  v13 = v44 - 1;
  v35 = v10;
  *a5 = 0;
  v14 = a3[1];
  v15 = v14;
  v16 = *(_QWORD **)(a1 + 344);
  v34 = v14;
  if ( v16 )
  {
    if ( *v16 )
    {
      v17 = *v16 + 16LL;
      v40 = 1;
      ApiSetAdjustLinearity(v17, &v33, &v34);
      v9 = v33;
      v5 = v33;
      v15 = v34;
      v14 = v34;
      a1 = v46;
      *a3 = v33;
      *v6 = v15;
    }
    v10 = v35;
  }
  if ( v5 <= v12 )
  {
    if ( v5 < v10 )
    {
      *a3 = v10;
      v9 = v10;
    }
  }
  else
  {
    *a3 = v12;
    v9 = v12;
  }
  if ( v14 <= v13 )
  {
    if ( v14 < v11 )
    {
      *v6 = v11;
      v15 = v11;
    }
  }
  else
  {
    *v6 = v13;
    v15 = v13;
  }
  v18 = *(_DWORD *)(a1 + 212);
  v19 = *(_DWORD *)(a1 + 148);
  v20 = *(_DWORD *)(a1 + 208);
  v21 = *(_DWORD *)(a1 + 220) - v18;
  v22 = *(_DWORD *)(a1 + 136);
  v39 = *(_DWORD *)(a1 + 152);
  v23 = *(_DWORD *)(a1 + 216) - v20;
  v38 = v21;
  v33 = v9;
  v24 = v9;
  v34 = v15;
  v37 = v22;
  b = v19;
  c = v23;
  v36 = v18;
  if ( v19 > v23 )
  {
    v25 = EngMulDiv(v20, *(_DWORD *)(a1 + 132), v19);
    if ( v9 < v25 )
      *a5 = 1;
    if ( v9 <= v25 )
    {
      v9 = -1;
      v33 = -1;
      v24 = -1;
    }
    else
    {
      v9 = EngMulDiv(v9 - v25, b, c);
      v33 = v9;
      v24 = v9;
    }
    v18 = v36;
    v22 = v37;
    if ( v24 > v12 )
    {
      v24 = v43;
      v9 = v43;
      v33 = v43;
      *a5 = 1;
    }
  }
  if ( v39 > (unsigned int)v38 )
  {
    v26 = EngMulDiv(v18, v22, v39);
    if ( v15 < v26 )
      *a5 = 1;
    if ( v15 <= v26 )
      v27 = -1;
    else
      v27 = EngMulDiv(v15 - v26, v39, v38);
    v34 = v27;
    v15 = v27;
    if ( v27 > v13 )
    {
      v15 = v44;
      v34 = v44;
      *a5 = 1;
    }
  }
  switch ( v45 )
  {
    case 2:
      v28 = v13 - v15;
      v15 = v24;
      v9 = v11 + v28;
LABEL_35:
      v29 = v13 ^ v12;
      v13 ^= v29;
      v12 = v13 ^ v29;
      goto LABEL_36;
    case 3:
      v9 = v35 + v12 - v24;
      v15 = v13 - v15 + v11;
LABEL_36:
      v34 = v15;
      v33 = v9;
      break;
    case 4:
      v9 = v15;
      v15 = v35 + v12 - v24;
      goto LABEL_35;
  }
  *v6 = v15;
  *a3 = v9;
  if ( v40 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(v46 + 344) + 80LL);
    if ( v30 )
    {
      ApiSetAdjustLinearity(v30 + 16, &v33, &v34);
      *a3 = v33;
      *v6 = v34;
    }
  }
  result = (unsigned __int64)a5;
  if ( *a5 )
  {
    result = *(_QWORD *)a3;
    *a4 = *(_QWORD *)a3;
  }
  if ( a2 )
  {
    if ( (int)*a4 > v12 || (v32 = 0, (unsigned int)*a4 == -1) )
      v32 = 1;
    if ( v32 )
    {
      v11 = v35;
      v6 = a3;
      v13 = v12;
    }
    result = (unsigned int)(v13 - *v6);
    if ( *v6 - v11 < (int)result )
      v13 = v11;
    *v6 = v13;
  }
  return result;
}
