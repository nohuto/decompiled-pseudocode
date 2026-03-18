/*
 * XREFs of FastExpAA_CX @ 0x1C01387C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FastExpAA_CX(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int16 *v7; // r9
  __int64 v8; // rcx
  __int16 v9; // di
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int8 v12; // r14
  __int16 v13; // si
  unsigned __int8 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r11
  unsigned int v18; // r10d
  __int64 v19; // rax
  unsigned __int8 v20; // r13
  int v21; // r10d
  int v22; // r9d
  int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // r10d
  unsigned int v26; // r10d
  unsigned int v27; // r10d
  int v28; // edi
  _BYTE *v29; // r8
  int v30; // ebx
  _BYTE *v31; // r8
  _BYTE *v32; // r8
  int v33; // esi
  int v34; // r15d
  int v35; // edi
  _BYTE *v36; // r8
  int v37; // r12d
  int v38; // r13d
  int v39; // r10d
  int v40; // r9d
  _BYTE *v41; // r8
  _BYTE *v42; // r8
  __int16 v43; // [rsp+0h] [rbp-60h]
  __int16 v44; // [rsp+3h] [rbp-5Dh]
  __int16 v45; // [rsp+6h] [rbp-5Ah]
  __int16 v46; // [rsp+10h] [rbp-50h]
  __int16 v47; // [rsp+12h] [rbp-4Eh]
  __int64 v48; // [rsp+20h] [rbp-40h]
  unsigned __int16 *v49; // [rsp+28h] [rbp-38h]
  __int64 v50; // [rsp+30h] [rbp-30h]
  unsigned __int64 v51; // [rsp+48h] [rbp-18h]
  unsigned __int8 v52; // [rsp+A0h] [rbp+40h]
  unsigned __int8 v53; // [rsp+A8h] [rbp+48h]
  unsigned __int8 v54; // [rsp+B0h] [rbp+50h]

  v5 = *(_QWORD *)(a1 + 96);
  v7 = *(unsigned __int16 **)(a1 + 88);
  v8 = *(unsigned __int8 *)(a1 + 80);
  v51 = v5;
  v9 = *(_WORD *)(a2 + v8 + 2 * v8 - 3);
  v10 = a2 + v8 + 2 * v8;
  result = a5;
  v12 = *(_BYTE *)(v10 - 1);
  v13 = *(_WORD *)v10;
  v14 = *(_BYTE *)(v10 + 2);
  v15 = v10 + 3;
  v16 = -(__int64)a5;
  v17 = a4 - a3;
  v48 = a4 - a3;
  while ( (unsigned __int64)v7 < v5 )
  {
    v18 = *v7++;
    v49 = v7;
    if ( result == 4 )
      v19 = v17 / 4;
    else
      v19 = v17 / a5;
    if ( v18 > (unsigned int)v19 )
      v18 = v19;
    v43 = v9;
    v20 = v12;
    v54 = v12;
    v9 = v13;
    v12 = v14;
    v46 = v13;
    v44 = v13;
    v13 = *(_WORD *)v15;
    v53 = v14;
    v14 = *(_BYTE *)(v15 + 2);
    v15 += 3LL;
    v47 = v13;
    v45 = v13;
    v52 = v14;
    v50 = v15;
    if ( v18 == 2 )
    {
      v17 -= a5;
      v21 = 3 * v12;
      a3[2] = (v21 + (unsigned int)v20 + 2) >> 2;
      v22 = 3 * HIBYTE(v44);
      a3[1] = (v22 + (unsigned int)HIBYTE(v43) + 2) >> 2;
      v23 = 3 * (unsigned __int8)v9;
      *a3 = (v23 + (unsigned int)(unsigned __int8)v43 + 2) >> 2;
      a3 += a5;
      a3[2] = (v21 + (unsigned int)v14 + 2) >> 2;
      a3[1] = ((unsigned int)HIBYTE(v13) + v22 + 2) >> 2;
      v24 = (v23 + (unsigned int)(unsigned __int8)v13 + 2) >> 2;
    }
    else
    {
      v25 = v18 - 1;
      if ( !v25 )
      {
        a3[2] = (v20 + v14 + 2 * (v12 + 2 * (v20 + v12 + v14 + 4 * ((unsigned int)v12 + 1)))) >> 5;
        a3[1] = (HIBYTE(v43)
               + HIBYTE(v13)
               + 2 * (HIBYTE(v44) + 8 + 2 * (HIBYTE(v43) + HIBYTE(v44) + HIBYTE(v13) + 4 * (unsigned int)HIBYTE(v44)))) >> 5;
        v24 = ((unsigned __int8)v43
             + (unsigned __int8)v13
             + 2
             * ((unsigned __int8)v44
              + 2
              * ((unsigned __int8)v43
               + (unsigned __int8)v44
               + (unsigned __int8)v13
               + 4 * ((unsigned int)(unsigned __int8)v44 + 1)))) >> 5;
        goto LABEL_10;
      }
      v26 = v25 - 2;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
          v37 = v20;
          v38 = 2 * (unsigned __int8)v44;
          a3[2] = (v37 + v12 + 2 * (v37 + 2 * (unsigned int)v12 + 2)) >> 3;
          v39 = 4 * HIBYTE(v44);
          a3[1] = (HIBYTE(v43) + HIBYTE(v44) + 2 * (HIBYTE(v43) + 2 * (unsigned int)HIBYTE(v44) + 2)) >> 3;
          v40 = 4 * (unsigned __int8)v44;
          *a3 = ((unsigned __int8)v43 + (unsigned __int8)v44 + 2 * (v38 + (unsigned int)(unsigned __int8)v43 + 2)) >> 3;
          v41 = &a3[a5];
          v41[2] = (4 * v12 + v37 + 8 + v14 + 2 * (4 * (unsigned int)v12 + v37)) >> 4;
          v41[1] = (v39 + HIBYTE(v43) + 8 + HIBYTE(v13) + 2 * (v39 + (unsigned int)HIBYTE(v43))) >> 4;
          *v41 = (v40 + (unsigned __int8)v43 + 8 + (unsigned __int8)v13 + 2 * (v40 + (unsigned int)(unsigned __int8)v43)) >> 4;
          v42 = &v41[a5];
          v17 = v48 - 2LL * a5 - a5;
          v42[2] = (4 * v12 + v14 + 8 + v37 + 2 * (4 * v12 + (unsigned int)v14)) >> 4;
          v42[1] = (v39 + HIBYTE(v13) + 8 + HIBYTE(v43) + 2 * (v39 + (unsigned int)HIBYTE(v13))) >> 4;
          v12 = v53;
          *v42 = (v40 + (unsigned __int8)v13 + 8 + (unsigned __int8)v43 + 2 * (v40 + (unsigned int)(unsigned __int8)v13)) >> 4;
          a3 = &v42[a5];
          a3[2] = (v53 + 4 + v14 + 2 * (v14 + 2 * (unsigned int)v53)) >> 3;
          v9 = v46;
          a3[1] = (HIBYTE(v44) + HIBYTE(v13) + 2 * (HIBYTE(v13) + 2 * (unsigned int)HIBYTE(v44) + 2)) >> 3;
          v24 = ((unsigned __int8)v44 + (unsigned __int8)v13 + 2 * (v38 + (unsigned int)(unsigned __int8)v13 + 2)) >> 3;
          goto LABEL_9;
        }
        if ( v27 != 1 )
          goto LABEL_11;
        v28 = 25 * v12;
        a3[2] = (13 * v20 + 16 + 19 * (unsigned int)v12) >> 5;
        a3[1] = (13 * HIBYTE(v43) + 16 + 19 * (unsigned int)HIBYTE(v44)) >> 5;
        *a3 = (13 * (unsigned __int8)v43 + 16 + 19 * (unsigned int)(unsigned __int8)v44) >> 5;
        v29 = &a3[a5];
        v30 = 25 * HIBYTE(v44);
        v29[2] = (v28 + v14 + 2 * (v20 + 2 * ((unsigned int)v20 + 4))) >> 5;
        v29[1] = (HIBYTE(v13) + 6 * (unsigned int)HIBYTE(v43) + v30 + 16) >> 5;
        *v29 = ((unsigned __int8)v13 + 6 * (unsigned __int8)v43 + 25 * (unsigned int)(unsigned __int8)v44 + 16) >> 5;
        v31 = &v29[a5];
        v31[2] = (v54 + v14 + 2 * (v54 + v14 + 13 * (unsigned int)v12 + 8)) >> 5;
        v31[1] = (HIBYTE(v43) + HIBYTE(v13) + 2 * (HIBYTE(v43) + HIBYTE(v13) + 13 * (unsigned int)HIBYTE(v44) + 8)) >> 5;
        *v31 = ((unsigned __int8)v43
              + (unsigned __int8)v13
              + 2 * ((unsigned __int8)v43 + (unsigned __int8)v13 + 13 * (unsigned int)(unsigned __int8)v44 + 8)) >> 5;
        v32 = &v31[a5];
        v32[2] = (v28 + 6 * v14 + (unsigned int)v54 + 16) >> 5;
        v32[1] = (v30 + 6 * HIBYTE(v13) + (unsigned int)HIBYTE(v43) + 16) >> 5;
        *v32 = (25 * (unsigned __int8)v44 + 6 * (unsigned __int8)v13 + (unsigned int)(unsigned __int8)v43 + 16) >> 5;
        a3 = &v32[a5];
        v17 = v48 - 4LL * a5;
        a3[2] = (13 * v14 + 19 * (unsigned int)v12 + 16) >> 5;
        a3[1] = (13 * HIBYTE(v13) + 19 * (unsigned int)HIBYTE(v44) + 16) >> 5;
        v24 = (13 * (unsigned __int8)v13 + 19 * (unsigned int)(unsigned __int8)v44 + 16) >> 5;
      }
      else
      {
        v33 = 2 * HIBYTE(v44);
        v34 = 2 * v12;
        v35 = 2 * (unsigned __int8)v44;
        a3[2] = (v54 + v12 + 2 * (v34 + (unsigned int)v54 + 2)) >> 3;
        a3[1] = (HIBYTE(v43) + HIBYTE(v44) + 2 * (v33 + (unsigned int)HIBYTE(v43) + 2)) >> 3;
        *a3 = ((unsigned __int8)v43 + (unsigned __int8)v44 + 2 * (v35 + (unsigned int)(unsigned __int8)v43 + 2)) >> 3;
        v36 = &a3[a5];
        v36[2] = (v52 + 14 * v12 + v54 + 8) >> 4;
        v36[1] = (HIBYTE(v45) + 14 * HIBYTE(v44) + HIBYTE(v43) + 8) >> 4;
        *v36 = ((unsigned __int8)v45 + 14 * (unsigned __int8)v44 + (unsigned __int8)v43 + 8) >> 4;
        a3 = &v36[a5];
        a3[2] = (v12 + v52 + 2 * (v34 + (unsigned int)v52 + 2)) >> 3;
        a3[1] = (HIBYTE(v44) + 4 + HIBYTE(v45) + 2 * (v33 + (unsigned int)HIBYTE(v45))) >> 3;
        v17 = v48 - 2LL * a5;
        v24 = ((unsigned __int8)v44 + (unsigned __int8)v45 + 2 * (v35 + (unsigned int)(unsigned __int8)v45 + 2)) >> 3;
      }
      v9 = v46;
      v13 = v47;
      v12 = v53;
      v14 = v52;
    }
LABEL_9:
    v16 = -(__int64)a5;
LABEL_10:
    v7 = v49;
    *a3 = v24;
    v15 = v50;
LABEL_11:
    result = a5;
    v17 += v16;
    v5 = v51;
    a3 += a5;
    v48 = v17;
    if ( a3 == a4 )
      return result;
  }
  return result;
}
