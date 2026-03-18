/*
 * XREFs of RIMTransformCoordinates @ 0x1C0113588
 * Callers:
 *     RIMApplyTransforms @ 0x1C0112708 (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C01138A0 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     ApiSetAdjustLinearity @ 0x1C0160D34 (ApiSetAdjustLinearity.c)
 */

unsigned __int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  int v5; // eax
  signed int *v6; // r9
  signed int v7; // edi
  signed int *v8; // rsi
  signed int v9; // r14d
  signed int v11; // ecx
  int v13; // r15d
  signed int v14; // r10d
  signed int v15; // r8d
  __int64 *v16; // rdx
  signed int v17; // r11d
  signed int v18; // ebx
  signed int v19; // eax
  int v20; // edi
  signed int v21; // ecx
  __int64 v22; // rdx
  signed int v23; // r10d
  unsigned int v24; // edx
  signed int v25; // r9d
  int v26; // r11d
  unsigned int v27; // eax
  int v28; // edx
  int v29; // eax
  signed int *v30; // r12
  signed int v31; // edx
  signed int v32; // eax
  unsigned int v33; // r9d
  unsigned int v34; // eax
  _DWORD *v35; // r11
  int v36; // eax
  unsigned int v37; // r11d
  signed int v38; // eax
  int v39; // r8d
  int v40; // edi
  bool v41; // zf
  __int64 v42; // rcx
  unsigned __int64 result; // rax
  _QWORD *v44; // rcx
  signed int v45; // [rsp+20h] [rbp-38h] BYREF
  signed int v46; // [rsp+24h] [rbp-34h]
  unsigned int v47; // [rsp+28h] [rbp-30h]
  unsigned int v48; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v49; // [rsp+30h] [rbp-28h]
  int v50; // [rsp+34h] [rbp-24h]
  signed int v51; // [rsp+38h] [rbp-20h]
  unsigned int v52; // [rsp+3Ch] [rbp-1Ch]
  int v53; // [rsp+40h] [rbp-18h]
  int v54; // [rsp+44h] [rbp-14h]
  signed int v55; // [rsp+48h] [rbp-10h]
  int v56; // [rsp+4Ch] [rbp-Ch]
  signed int v57; // [rsp+A0h] [rbp+48h] BYREF
  int v58; // [rsp+A8h] [rbp+50h]
  int *v59; // [rsp+B0h] [rbp+58h]
  _QWORD *v60; // [rsp+B8h] [rbp+60h]

  v60 = a4;
  v59 = a3;
  v58 = a2;
  v5 = *(_DWORD *)(a1 + 224);
  v6 = (signed int *)(a1 + 124);
  v7 = *(_DWORD *)(a1 + 132);
  v8 = a3 + 1;
  v9 = *(_DWORD *)(a1 + 128);
  v11 = *(_DWORD *)(a1 + 136);
  v50 = 0;
  v13 = 1;
  v14 = *a3;
  v15 = v14;
  v16 = *(__int64 **)(a1 + 336);
  v17 = *v6;
  v18 = v11 - 1;
  v56 = v5;
  v51 = v7;
  v55 = v11;
  v57 = v14;
  *a5 = 0;
  v19 = *v8;
  v20 = v7 - 1;
  v45 = v19;
  v21 = v19;
  v46 = v17;
  if ( v16 )
  {
    v22 = *v16;
    if ( v22 )
    {
      v50 = 1;
      ApiSetAdjustLinearity(v22 + 16, &v57, &v45);
      v15 = v57;
      v14 = v57;
      v21 = v45;
      v19 = v45;
      v17 = v46;
      *a3 = v57;
      *v8 = v21;
    }
  }
  if ( v14 <= v20 )
  {
    if ( v14 < v17 )
    {
      *a3 = v17;
      v15 = v17;
    }
  }
  else
  {
    *a3 = v20;
    v15 = v20;
  }
  if ( v19 <= v18 )
  {
    if ( v19 < v9 )
    {
      *v8 = v9;
      v21 = v9;
    }
  }
  else
  {
    *v8 = v18;
    v21 = v18;
  }
  v23 = v15;
  v24 = *(_DWORD *)(a1 + 152);
  v25 = v15;
  v26 = *(_DWORD *)(a1 + 208);
  v54 = *(_DWORD *)(a1 + 136);
  v47 = *(_DWORD *)(a1 + 148);
  v27 = *(_DWORD *)(a1 + 216) - v26;
  v52 = v24;
  v28 = *(_DWORD *)(a1 + 220);
  v48 = v27;
  v29 = *(_DWORD *)(a1 + 212);
  v30 = v59;
  v49 = v28 - v29;
  v31 = v15;
  v53 = v29;
  v32 = v15;
  v57 = v15;
  v45 = v21;
  if ( v47 > v48 )
  {
    v33 = v47;
    v34 = *(_DWORD *)(a1 + 132) * v26;
    v35 = a5;
    v36 = v34 / v47;
    if ( v15 < v36 )
      *a5 = 1;
    if ( v15 <= v36 )
      v15 = -1;
    else
      v15 = v33 * (v15 - v36) / v48;
    v57 = v15;
    v23 = v15;
    v32 = v15;
    v31 = v15;
    v25 = v15;
    if ( v15 > v20 )
    {
      v25 = v51;
      v15 = v51;
      v57 = v51;
      v23 = v51;
      v32 = v51;
      *v35 = 1;
      v31 = v25;
    }
  }
  v37 = v52;
  if ( v52 > v49 )
  {
    v25 = v23;
    v38 = v54 * v53 / v52;
    if ( v21 < v38 )
      *a5 = 1;
    if ( v21 <= v38 )
    {
      v21 = -1;
      v25 = v23;
    }
    else
    {
      v21 = v37 * (v21 - v38) / v49;
    }
    v45 = v21;
    v32 = v25;
    v31 = v25;
    if ( v21 > v18 )
    {
      v21 = v55;
      v45 = v55;
      *a5 = 1;
      v32 = v25;
    }
  }
  switch ( v56 )
  {
    case 2:
      v45 = v32;
      v39 = v18 - v21;
      v21 = v32;
      v15 = v9 + v39;
LABEL_34:
      v40 = v18 ^ v20;
      v18 ^= v40;
      v20 = v18 ^ v40;
      goto LABEL_35;
    case 3:
      v15 = v46 + v20 - v31;
      v21 = v9 + v18 - v21;
      v45 = v21;
LABEL_35:
      v57 = v15;
      break;
    case 4:
      v15 = v21;
      v21 = v46 + v20 - v25;
      v45 = v21;
      goto LABEL_34;
  }
  v41 = v50 == 0;
  *v30 = v15;
  *v8 = v21;
  if ( !v41 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 80LL);
    if ( v42 )
    {
      ApiSetAdjustLinearity(v42 + 16, &v57, &v45);
      *v30 = v57;
      *v8 = v45;
    }
  }
  result = (unsigned __int64)a5;
  v44 = v60;
  if ( *a5 )
  {
    result = *(_QWORD *)v30;
    *v60 = *(_QWORD *)v30;
  }
  if ( v58 )
  {
    if ( (int)*v44 <= v20 && (unsigned int)*v44 != -1 )
      v13 = 0;
    if ( v13 )
    {
      v9 = v46;
      v8 = v30;
      v18 = v20;
    }
    result = (unsigned int)(v18 - *v8);
    if ( *v8 - v9 < (int)result )
      v18 = v9;
    *v8 = v18;
  }
  return result;
}
