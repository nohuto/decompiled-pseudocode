/*
 * XREFs of FastExpAA_CX @ 0x1C0265840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FastExpAA_CX(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // r15
  unsigned __int16 *v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int16 v11; // r14
  __int64 result; // rax
  unsigned __int8 v13; // r9
  __int16 v14; // r12
  unsigned __int8 v15; // di
  __int64 v16; // r8
  __int64 v17; // r11
  unsigned int v18; // ecx
  unsigned __int8 v19; // r15
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // r9d
  int v27; // r11d
  _BYTE *v28; // r10
  int v29; // ebx
  int v30; // eax
  _BYTE *v31; // rdx
  _BYTE *v32; // rdx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // edx
  int v36; // r12d
  int v37; // r13d
  int v38; // r9d
  _BYTE *v39; // r10
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // ecx
  int v43; // ebx
  int v44; // edi
  int v45; // r9d
  int v46; // r8d
  int v47; // edx
  __int16 v48; // [rsp+0h] [rbp-58h]
  __int16 v49; // [rsp+3h] [rbp-55h]
  __int16 v50; // [rsp+6h] [rbp-52h]
  __int16 v51; // [rsp+10h] [rbp-48h]
  __int16 v52; // [rsp+12h] [rbp-46h]
  __int64 v53; // [rsp+18h] [rbp-40h]
  __int64 v54; // [rsp+28h] [rbp-30h]
  unsigned __int64 v55; // [rsp+48h] [rbp-10h]
  unsigned __int8 v56; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v57; // [rsp+A8h] [rbp+50h]
  _BYTE *v58; // [rsp+B0h] [rbp+58h]
  _BYTE *v59; // [rsp+B0h] [rbp+58h]

  v5 = *(_QWORD *)(a1 + 96);
  v7 = *(unsigned __int16 **)(a1 + 88);
  v9 = a5;
  v55 = v5;
  v10 = a2 + *(unsigned __int8 *)(a1 + 80) + 2LL * *(unsigned __int8 *)(a1 + 80);
  v11 = *(_WORD *)(v10 - 3);
  result = -(__int64)a5;
  v13 = *(_BYTE *)(v10 - 1);
  v14 = *(_WORD *)v10;
  v15 = *(_BYTE *)(v10 + 2);
  v16 = v10 + 3;
  v17 = a4 - a3;
  v53 = v17;
  while ( (unsigned __int64)v7 < v5 )
  {
    v18 = *v7;
    v48 = v11;
    result = v17 / v9;
    ++v7;
    v51 = v14;
    v49 = v14;
    v19 = v13;
    v56 = v15;
    if ( v18 > (unsigned int)(v17 / v9) )
      v18 = v17 / v9;
    v11 = v14;
    v13 = v15;
    v14 = *(_WORD *)v16;
    v15 = *(_BYTE *)(v16 + 2);
    v16 += 3LL;
    v52 = v14;
    v50 = v14;
    v57 = v15;
    v54 = v16;
    v20 = v18 - 1;
    if ( !v20 )
    {
      a3[2] = (v19 + v15 + 2 * (v13 + 2 * (v19 + v13 + v15 + 4 * ((unsigned int)v13 + 1)))) >> 5;
      a3[1] = (HIBYTE(v48)
             + HIBYTE(v14)
             + 2 * (HIBYTE(v49) + 8 + 2 * (HIBYTE(v48) + HIBYTE(v49) + HIBYTE(v14) + 4 * (unsigned int)HIBYTE(v49)))) >> 5;
      result = (unsigned __int8)v49
             + 2
             * ((unsigned __int8)v48
              + (unsigned __int8)v49
              + (unsigned __int8)v14
              + 4 * ((unsigned int)(unsigned __int8)v49 + 1));
      v34 = (unsigned __int8)v48 + (unsigned __int8)v14 + 2 * result;
LABEL_15:
      v42 = v34 >> 5;
      goto LABEL_16;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v17 -= a5;
      v45 = 3 * v13;
      a3[2] = (v45 + (unsigned int)v19 + 2) >> 2;
      v46 = 3 * HIBYTE(v49);
      a3[1] = (v46 + (unsigned int)HIBYTE(v48) + 2) >> 2;
      v47 = 3 * (unsigned __int8)v49;
      result = HIBYTE(v14);
      *a3 = (v47 + (unsigned int)(unsigned __int8)v48 + 2) >> 2;
      a3 += v9;
      a3[2] = (v45 + (unsigned int)v15 + 2) >> 2;
      a3[1] = ((unsigned int)HIBYTE(v14) + v46 + 2) >> 2;
      v42 = (v47 + (unsigned int)(unsigned __int8)v14 + 2) >> 2;
LABEL_16:
      v13 = v56;
      goto LABEL_17;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v43 = 2 * (unsigned __int8)v49;
      v44 = 2 * HIBYTE(v49);
      a3[2] = (v19 + v13 + 2 * (2 * v13 + (unsigned int)v19 + 2)) >> 3;
      a3[1] = (HIBYTE(v48) + HIBYTE(v49) + 2 * (v44 + (unsigned int)HIBYTE(v48) + 2)) >> 3;
      *a3 = ((unsigned __int8)v48 + (unsigned __int8)v49 + 2 * (v43 + (unsigned int)(unsigned __int8)v48 + 2)) >> 3;
      v59 = &a3[a5];
      v59[2] = (v57 + 14 * v13 + v19 + 8) >> 4;
      v59[1] = (HIBYTE(v14) + 14 * HIBYTE(v49) + HIBYTE(v48) + 8) >> 4;
      *v59 = ((unsigned __int8)v14 + 14 * (unsigned __int8)v49 + (unsigned __int8)v48 + 8) >> 4;
      v17 = v53 - 2LL * a5;
      a3 = &v59[a5];
      a3[2] = (v13 + v57 + 2 * (2 * v13 + (unsigned int)v57 + 2)) >> 3;
      result = v43 + (unsigned int)(unsigned __int8)v14;
      a3[1] = (HIBYTE(v49) + HIBYTE(v14) + 2 * (v44 + (unsigned int)HIBYTE(v14) + 2)) >> 3;
      v9 = a5;
      v15 = v57;
      v11 = v51;
      v42 = ((unsigned __int8)v49 + 4 + (unsigned int)(unsigned __int8)v14 + 2 * (_DWORD)result) >> 3;
      goto LABEL_16;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v35 = v13;
      v36 = 2 * (unsigned __int8)v49;
      v37 = 2 * HIBYTE(v49);
      a3[2] = (v19 + v13 + 2 * (v19 + 2 * (unsigned int)v13 + 2)) >> 3;
      v38 = 4 * HIBYTE(v49);
      a3[1] = (HIBYTE(v48) + HIBYTE(v49) + 2 * (v37 + (unsigned int)HIBYTE(v48) + 2)) >> 3;
      *a3 = ((unsigned __int8)v48 + (unsigned __int8)v49 + 2 * (v36 + (unsigned int)(unsigned __int8)v48 + 2)) >> 3;
      v39 = &a3[v9];
      v39[2] = (v19 + 4 * v35 + 8 + v15 + 2 * ((unsigned int)v19 + 4 * v35)) >> 4;
      v39[1] = (v38 + HIBYTE(v48) + 8 + HIBYTE(v50) + 2 * (v38 + (unsigned int)HIBYTE(v48))) >> 4;
      *v39 = ((unsigned __int8)v48
            + 4 * (unsigned __int8)v49
            + 8
            + (unsigned __int8)v50
            + 2 * ((unsigned __int8)v48 + 4 * (unsigned int)(unsigned __int8)v49)) >> 4;
      v58 = &v39[a5];
      v58[2] = (v15 + 4 * v35 + 8 + v19 + 2 * ((unsigned int)v15 + 4 * v35)) >> 4;
      v58[1] = (v38 + HIBYTE(v50) + 8 + HIBYTE(v48) + 2 * (v38 + (unsigned int)HIBYTE(v50))) >> 4;
      *v58 = ((unsigned __int8)v50
            + 4 * (unsigned __int8)v49
            + 8
            + (unsigned __int8)v48
            + 2 * ((unsigned __int8)v50 + 4 * (unsigned int)(unsigned __int8)v49)) >> 4;
      a3 = &v58[a5];
      v13 = v56;
      v11 = v51;
      a3[2] = (v56 + v15 + 2 * (v15 + 2 * (unsigned int)v56 + 2)) >> 3;
      v9 = a5;
      v40 = v36 + (unsigned __int8)v50 + 2;
      a3[1] = (HIBYTE(v49) + HIBYTE(v50) + 2 * (v37 + (unsigned int)HIBYTE(v50) + 2)) >> 3;
      v14 = v52;
      v41 = (unsigned __int8)v50 + 2 * v40;
      result = (unsigned __int8)v49;
      v17 = v53 - 2LL * a5 - a5;
      v42 = ((unsigned int)(unsigned __int8)v49 + v41) >> 3;
LABEL_17:
      v16 = v54;
      *a3 = v42;
      goto LABEL_18;
    }
    if ( v23 == 1 )
    {
      v24 = v13;
      v25 = 19 * v13;
      v26 = (unsigned __int8)v11;
      v27 = 25 * HIBYTE(v49);
      a3[2] = (13 * (unsigned int)v19 + 16 + v25) >> 5;
      a3[1] = (13 * HIBYTE(v48) + 16 + 19 * (unsigned int)HIBYTE(v49)) >> 5;
      *a3 = (13 * (unsigned __int8)v48 + 16 + 19 * (unsigned int)(unsigned __int8)v11) >> 5;
      v28 = &a3[v9];
      v29 = 25 * v24;
      v28[2] = (25 * v24 + v15 + 2 * (v19 + 2 * (unsigned int)v19 + 8)) >> 5;
      v28[1] = (HIBYTE(v14) + 6 * (unsigned int)HIBYTE(v48) + v27 + 16) >> 5;
      *v28 = ((unsigned __int8)v14 + 6 * (unsigned __int8)v48 + 25 * (unsigned int)(unsigned __int8)v11 + 16) >> 5;
      v30 = 13 * v24;
      v31 = &v28[a5];
      v31[2] = (v19 + v15 + 2 * (v19 + (unsigned int)v15 + v30 + 8)) >> 5;
      v31[1] = (HIBYTE(v48) + HIBYTE(v14) + 2 * (HIBYTE(v48) + HIBYTE(v14) + 13 * (unsigned int)HIBYTE(v49) + 8)) >> 5;
      *v31 = ((unsigned __int8)v48
            + (unsigned __int8)v14
            + 2 * ((unsigned __int8)v48 + (unsigned __int8)v14 + 13 * (unsigned int)(unsigned __int8)v11 + 8)) >> 5;
      v32 = &v31[a5];
      v33 = v29 + 2 * (v15 + 2 * (v15 + 4));
      v9 = a5;
      v32[2] = ((unsigned int)v19 + v33) >> 5;
      v32[1] = (v27 + 6 * HIBYTE(v14) + (unsigned int)HIBYTE(v48) + 16) >> 5;
      a3 = &v32[a5];
      *v32 = (25 * (unsigned __int8)v11 + 6 * (unsigned __int8)v14 + (unsigned int)(unsigned __int8)v48 + 16) >> 5;
      v17 = v53 - 4LL * a5;
      v11 = v51;
      a3[2] = (13 * (unsigned int)v15 + v25 + 16) >> 5;
      result = 13 * (unsigned int)(unsigned __int8)v14;
      a3[1] = (13 * HIBYTE(v14) + 19 * (unsigned int)HIBYTE(v49) + 16) >> 5;
      v34 = result + 19 * v26 + 16;
      goto LABEL_15;
    }
LABEL_18:
    v17 -= a5;
    a3 += v9;
    v5 = v55;
    v53 = v17;
    if ( a3 == a4 )
      return result;
  }
  return result;
}
