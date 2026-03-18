/*
 * XREFs of scl_InitializeScaling @ 0x1C02B4748
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C02BDA78 (fsg_InitInterpreterTrans.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     mth_90degClosestRotationFactor @ 0x1C02B32F4 (mth_90degClosestRotationFactor.c)
 *     mth_90degRotationFactorForEmboldening @ 0x1C02B3480 (mth_90degRotationFactorForEmboldening.c)
 *     mth_FoldPointSizeResolution @ 0x1C02B3638 (mth_FoldPointSizeResolution.c)
 *     mth_IntelMul @ 0x1C02B36E0 (mth_IntelMul.c)
 *     mth_Non90DegreeTransformation @ 0x1C02B395C (mth_Non90DegreeTransformation.c)
 *     mth_PositiveSquare @ 0x1C02B3A88 (mth_PositiveSquare.c)
 *     mth_ReduceMatrix @ 0x1C02B3AAC (mth_ReduceMatrix.c)
 *     adjustTrans @ 0x1C02B3BCC (adjustTrans.c)
 *     scl_ComputeScaling @ 0x1C02B43E0 (scl_ComputeScaling.c)
 *     scl_Scale @ 0x1C02B50E0 (scl_Scale.c)
 */

__int64 __fastcall scl_InitializeScaling(
        __int64 a1,
        int a2,
        int *a3,
        unsigned __int16 a4,
        int a5,
        __int16 a6,
        __int16 a7,
        int a8,
        unsigned __int16 a9,
        __int16 a10,
        int a11,
        _WORD *a12,
        __int16 *a13,
        int a14,
        _DWORD *a15)
{
  __int16 v16; // bx
  __int128 v18; // xmm1
  __int64 v19; // r13
  unsigned __int16 v21; // r12
  int v22; // r15d
  int v23; // ebx
  signed int v24; // r9d
  int v25; // r8d
  signed int v26; // eax
  signed int v27; // r8d
  signed int v28; // eax
  signed int v29; // eax
  __int64 v30; // kr00_8
  int v31; // eax
  int v32; // r8d
  signed int v33; // r8d
  signed int v34; // eax
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // r8d
  __int128 v40; // xmm0
  int v41; // eax
  int v42; // r8d
  __int128 v43; // xmm0
  int v44; // eax
  int v45; // edx
  bool v46; // zf
  char v47; // al
  _WORD *v48; // r14
  __int16 *v49; // rbx
  __int64 v50; // rdx
  __int16 v51; // r13
  int *v52; // rcx
  unsigned __int16 v53; // r10
  __int16 v54; // r11
  int v55; // ecx
  int v56; // ecx
  __int16 v57; // ax
  __int16 v58; // ax
  __int16 v59; // ax
  __int16 v60; // ax
  __int16 v61; // r12
  int v62; // esi
  int v63; // r14d
  int fixed; // eax
  int v65; // r15d
  int v66; // ebx
  int v67; // eax
  int v68; // r10d
  int v69; // r11d
  int v70; // ecx
  int v71; // ebx
  int v72; // edx
  __int128 v74; // [rsp+30h] [rbp-51h] BYREF
  __int128 v75; // [rsp+40h] [rbp-41h]
  int v76; // [rsp+50h] [rbp-31h]
  _OWORD v77[2]; // [rsp+58h] [rbp-29h] BYREF
  int v78; // [rsp+78h] [rbp-9h]
  int v79; // [rsp+D0h] [rbp+4Fh]
  __int64 v81; // [rsp+E0h] [rbp+5Fh]
  int v82; // [rsp+E8h] [rbp+67h] BYREF

  LOWORD(v82) = a4;
  v16 = a7;
  v18 = *((_OWORD *)a3 + 1);
  v19 = a5;
  v21 = a9;
  v79 = a3[8];
  v74 = *(_OWORD *)a3;
  v76 = v79;
  v75 = v18;
  mth_FoldPointSizeResolution(a5, a6, a7, a3);
  if ( ((_WORD)a8 || v21) && ((unsigned int)CompDiv(72, v16 * v19) + 0x8000) >> 16 > 0x32 )
    adjustTrans(a3);
  mth_ReduceMatrix(a3);
  v22 = a14;
  v23 = a4 << 16;
  *(_DWORD *)(a1 + 472) = a14;
  if ( v22 )
  {
    *(_DWORD *)(a1 + 376) = v23;
    v24 = a4 << 16;
    *(_DWORD *)(a1 + 380) = v23;
    v25 = -*a3;
    if ( *a3 >= 0 )
      v25 = *a3;
    v26 = abs32(a3[1]);
    if ( v25 <= v26 )
      v25 = v26;
    *(_DWORD *)(a1 + 384) = v25;
    v27 = abs32(a3[3]);
    v28 = abs32(a3[4]);
    if ( v27 <= v28 )
      v27 = v28;
    *(_DWORD *)(a1 + 388) = v27;
  }
  else
  {
    v24 = abs32(*a3);
    v29 = abs32(a3[1]);
    if ( v24 <= v29 )
      v24 = v29;
    *(_DWORD *)(a1 + 376) = v24;
    v30 = a3[3];
    v31 = a3[4];
    v32 = HIDWORD(v30) ^ a3[3];
    *(_DWORD *)(a1 + 384) = v24;
    v33 = v32 - HIDWORD(v30);
    v34 = abs32(v31);
    if ( v33 <= v34 )
      v33 = v34;
    *(_DWORD *)(a1 + 380) = v33;
    *(_DWORD *)(a1 + 388) = v33;
    if ( a2 )
    {
      v24 = (v24 + 0x8000) & 0xFFFF0000;
      *(_DWORD *)(a1 + 376) = v24;
      *(_DWORD *)(a1 + 380) = (v33 + 0x8000) & 0xFFFF0000;
    }
  }
  v35 = scl_ComputeScaling((_DWORD *)(a1 + 264), v24, v23);
  v36 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 184) = v35;
  v37 = scl_ComputeScaling((_DWORD *)(a1 + 280), v36, v23);
  v38 = *(_DWORD *)(a1 + 376);
  v39 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 188) = v37;
  if ( v38 < v39 )
  {
    v43 = *(_OWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 192) = v37;
    LODWORD(v81) = v38 << 16;
    HIDWORD(v81) = v38 >> 16;
    *(_OWORD *)(a1 + 296) = v43;
    v44 = CompDiv(v39, v81);
    v42 = *(_DWORD *)(a1 + 380);
    *(_DWORD *)(a1 + 312) = v44;
    v41 = 0x10000;
  }
  else
  {
    v40 = *(_OWORD *)(a1 + 264);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 184);
    *(_OWORD *)(a1 + 296) = v40;
    *(_DWORD *)(a1 + 312) = 0x10000;
    v41 = CompDiv(v38, (__int64)v39 << 16);
    v42 = *(_DWORD *)(a1 + 376);
  }
  *(_DWORD *)(a1 + 316) = v41;
  v45 = *(_DWORD *)(a1 + 380);
  *(_DWORD *)(a1 + 28) = v42;
  v46 = *(_DWORD *)(a1 + 376) == v45;
  *a15 = (__int16)((unsigned int)(v45 + 0x8000) >> 16);
  *(_BYTE *)(a1 + 340) = v46;
  *(_WORD *)(a1 + 24) = (unsigned int)(v42 + 0x8000) >> 16;
  *(_WORD *)(a1 + 26) = (unsigned int)(v19 + 0x8000) >> 16;
  *(_BYTE *)(a1 + 320) = mth_PositiveSquare(a3);
  mth_Non90DegreeTransformation((int *)&v74, &a5, &a14);
  v47 = 0;
  *(_BYTE *)(a1 + 321) = 0;
  if ( a5 )
  {
    *(_BYTE *)(a1 + 321) = 1;
    v47 = 1;
  }
  if ( a14 )
    *(_BYTE *)(a1 + 321) = v47 | 2;
  v48 = a12;
  v49 = a13;
  *a12 = 0;
  *v49 = 0;
  if ( !(_WORD)a8 && !v21 )
  {
    *(_QWORD *)(a1 + 444) = 0LL;
    return 0LL;
  }
  v50 = v19;
  v51 = a7;
  CompDiv(72, a7 * v50);
  v54 = mth_90degRotationFactorForEmboldening(a3);
  if ( v54 == 8 )
    v54 = mth_90degClosestRotationFactor(v52);
  if ( v22 )
  {
    v55 = v53;
    v53 = v82;
    *v49 = (v21 * v55 - 10) / 1000;
  }
  v56 = v53 * (unsigned __int16)a8;
  *(_WORD *)(a1 + 444) = (__int16)(v53 * v21 - 10) / 1000;
  *(_WORD *)(a1 + 446) = (v56 - 10) / 1000 + 1;
  if ( !v22 )
    *v49 = (v53 * v21 - 10) / 1000;
  switch ( v54 )
  {
    case 0:
      v58 = *v49 + 1;
      goto LABEL_55;
    case 1:
      v59 = -*v49;
      goto LABEL_53;
    case 2:
      v60 = ~*v49;
      goto LABEL_51;
    case 3:
      v57 = *v49;
      goto LABEL_49;
    case 4:
      v60 = *v49 + 1;
LABEL_51:
      *v48 = v60;
      goto LABEL_56;
    case 5:
      v59 = *v49;
LABEL_53:
      *v48 = v59;
      *v49 = ~*v49;
      goto LABEL_56;
    case 6:
      v58 = ~*v49;
LABEL_55:
      *v48 = v58;
      *v49 = -*v49;
      goto LABEL_56;
    case 7:
      v57 = -*v49;
LABEL_49:
      *v48 = v57;
      ++*v49;
      goto LABEL_56;
  }
  *v48 = 0;
  *v49 = 0;
LABEL_56:
  if ( v22 )
    goto LABEL_65;
  v61 = a6;
  if ( v51 != a6 )
  {
    v62 = HIDWORD(v74);
    v63 = DWORD1(v74);
    a8 = *(unsigned __int16 *)(a1 + 446) << 16;
    v82 = *(unsigned __int16 *)(a1 + 444) << 16;
    fixed = FixMul(SDWORD1(v74), SHIDWORD(v74));
    v65 = v75;
    v66 = fixed;
    v67 = FixMul(v74, v75);
    v70 = v67 - v66;
    v71 = v66 - v67;
    if ( v70 >= 0 )
      v71 = v70;
    if ( v71 )
    {
      a15 = (_DWORD *)((__int64)v68 << 16);
      LODWORD(v74) = CompDiv(v71, (__int64)a15);
      a15 = (_DWORD *)__PAIR64__(v63 >> 16, v63 << 16);
      DWORD1(v74) = CompDiv(v71, __SPAIR64__(v63 >> 16, v63 << 16));
      a15 = (_DWORD *)__PAIR64__(v62 >> 16, v62 << 16);
      HIDWORD(v74) = CompDiv(v71, __SPAIR64__(v62 >> 16, v62 << 16));
      a15 = (_DWORD *)__PAIR64__(v65 >> 16, v65 << 16);
      LODWORD(v75) = CompDiv(v71, __SPAIR64__(v65 >> 16, v65 << 16));
      v78 = v79;
      v77[0] = v74;
      DWORD1(v77[0]) = -DWORD1(v74);
      HIDWORD(v77[0]) = -HIDWORD(v74);
      v77[1] = v75;
      mth_IntelMul(1, (char *)&a8, &v82, (int *)&v74, 0x10000, 0x10000);
      a8 = CompDiv(v51, v61 * (__int64)a8);
      mth_IntelMul(1, (char *)&a8, &v82, (int *)v77, 0x10000, 0x10000);
      *(_WORD *)(a1 + 446) = (abs32(a8) + 0x8000) >> 16;
      *(_WORD *)(a1 + 444) = (abs32(v82) + 0x8000) >> 16;
    }
    else
    {
      *(_DWORD *)(a1 + 444) = v69;
    }
  }
  if ( (*(_BYTE *)(a1 + 321) & 1) != 0 )
  {
LABEL_65:
    v72 = *(_DWORD *)(a1 + 188);
    a8 = a10;
    scl_Scale(a1 + 280, v72, (unsigned int)&a8, a1 + 448, 1);
    *(_DWORD *)(a1 + 448) &= 0xFFFFFFC0;
  }
  else
  {
    *(_DWORD *)(a1 + 448) = -64 * a11;
  }
  return 0LL;
}
