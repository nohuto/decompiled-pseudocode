/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C004E4C0
 * Callers:
 *     cjCopyFontDataW @ 0x1C004DFF0 (cjCopyFontDataW.c)
 * Callees:
 *     bFToL @ 0x1C01014BC (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW2(
        struct XDCOBJ *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8)
{
  __int64 v8; // rdi
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  float v17; // xmm1_4
  float v18; // xmm1_4
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int16 v25; // cx
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // ecx
  char v37; // r9
  unsigned int v38; // edx
  char v39; // r8
  char v40; // al
  __int16 v41; // ax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int16 v48; // cx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v56[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v57; // [rsp+30h] [rbp-10h] BYREF
  int v58; // [rsp+38h] [rbp-8h]
  int v59; // [rsp+3Ch] [rbp-4h]
  int v60; // [rsp+78h] [rbp+38h] BYREF
  int v61; // [rsp+80h] [rbp+40h] BYREF

  v8 = a2;
  v12 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v13 = *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62);
  if ( !v13 || !*(_WORD *)(v12 + 56) )
    return 0LL;
  if ( (*(_DWORD *)(v12 + 48) & 0x3000010) != 0 )
  {
    LODWORD(a2) = 0;
    a5 = (float)v13 * a6;
    v14 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
    if ( v14 <= 40 )
    {
      v15 = LODWORD(a5) & 0x7FFFFF | 0x800000LL;
      v16 = v14 < 0 ? v15 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v15 << v14;
      a2 = (v16 + 0x80000000LL) >> 32;
      if ( a5 < 0.0 )
        LODWORD(a2) = -(int)a2;
    }
    *(_DWORD *)(v8 + 8) = a2;
    v17 = (float)(int)a2;
    LODWORD(a2) = 0;
    v18 = v17 / (float)(*(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62));
    a5 = (float)*(__int16 *)(v12 + 60) * v18;
    v19 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
    if ( v19 <= 40 )
    {
      v20 = LODWORD(a5) & 0x7FFFFF | 0x800000LL;
      v21 = v19 < 0 ? v20 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v20 << v19;
      a2 = (v21 + 0x80000000LL) >> 32;
      if ( a5 < 0.0 )
        LODWORD(a2) = -(int)a2;
    }
    *(_DWORD *)(v8 + 12) = a2;
    LODWORD(a2) = 0;
    a5 = (float)(__int16)(*(_WORD *)(v12 + 60) + *(_WORD *)(v12 + 62) - *(_WORD *)(v12 + 56)) * v18;
    v22 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
    if ( v22 <= 40 )
    {
      v23 = LODWORD(a5) & 0x7FFFFF | 0x800000LL;
      v24 = v22 < 0 ? v23 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v23 << v22;
      a2 = (v24 + 0x80000000LL) >> 32;
      if ( a5 < 0.0 )
        LODWORD(a2) = -(int)a2;
    }
    *(_DWORD *)(v8 + 20) = a2;
    LODWORD(a2) = 0;
    v25 = *(_WORD *)(v12 + 64)
        + *(_WORD *)(v12 + 68)
        - *(_WORD *)(v12 + 66)
        - *(_WORD *)(v12 + 62)
        - *(_WORD *)(v12 + 60);
    if ( v25 <= 0 )
      v25 = 0;
    a5 = (float)v25 * v18;
    v26 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
    if ( v26 <= 40 )
    {
      v27 = LODWORD(a5) & 0x7FFFFF | 0x800000LL;
      v28 = v26 >= 0 ? v27 << v26 : v27 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23));
      a2 = (v28 + 0x80000000LL) >> 32;
      if ( a5 < 0.0 )
        LODWORD(a2) = -(int)a2;
    }
    *(_DWORD *)(v8 + 24) = a2;
    LODWORD(a2) = 0;
    a5 = (float)*(__int16 *)(v12 + 76) * v18;
    v29 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
    if ( v29 <= 40 )
    {
      v30 = LODWORD(a5) & 0x7FFFFF | 0x800000LL;
      v31 = v29 < 0 ? v30 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v30 << v29;
      a2 = (v31 + 0x80000000LL) >> 32;
      if ( a5 < 0.0 )
        LODWORD(a2) = -(int)a2;
    }
    *(_DWORD *)(v8 + 28) = a2;
    LODWORD(a2) = 0;
    a5 = (float)*(__int16 *)(v12 + 78) * v18;
    v32 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
    if ( v32 <= 40 )
    {
      v33 = LODWORD(a5) & 0x7FFFFF | 0x800000LL;
      v34 = v32 < 0 ? v33 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v33 << v32;
      a2 = (v34 + 0x80000000LL) >> 32;
      if ( a5 < 0.0 )
        LODWORD(a2) = -(int)a2;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v13;
    *(_DWORD *)(a2 + 12) = *(__int16 *)(v12 + 60);
    *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v12 + 60) + *(_WORD *)(v12 + 62) - *(_WORD *)(v12 + 56));
    v48 = *(_WORD *)(v12 + 64)
        + *(_WORD *)(v12 + 68)
        - *(_WORD *)(v12 + 66)
        - *(_WORD *)(v12 + 62)
        - *(_WORD *)(v12 + 60);
    if ( v48 <= 0 )
      v48 = 0;
    *(_DWORD *)(a2 + 24) = v48;
    *(_DWORD *)(a2 + 28) = *(__int16 *)(v12 + 76);
    LODWORD(a2) = *(__int16 *)(v12 + 78);
  }
  *(_DWORD *)(v8 + 32) = a2;
  v35 = *(_QWORD *)a1;
  v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL);
  v59 = *(_DWORD *)(*(_QWORD *)(v35 + 976) + 108LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v57, a1, 0x402u, 0);
  if ( !v57 )
    return 0LL;
  if ( (*(_DWORD *)(v57 + 32) & 2) != 0 )
    goto LABEL_38;
  v55 = 1065353216LL;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v57, (struct VECTORFL *)&v55, (struct VECTORFL *)&v55, 1uLL) )
    return 0LL;
  EFLOAT::eqLength(&v61, &a5, &v55);
  v56[0] = 0;
  v56[1] = 1065353216;
  if ( (*(_DWORD *)(v57 + 32) & 2) == 0
    && !EXFORMOBJ::bXform((EXFORMOBJ *)&v57, (struct VECTORFL *)v56, (struct VECTORFL *)v56, 1uLL) )
  {
    return 0LL;
  }
  EFLOAT::eqLength(&v60, &a5, v56);
  a5 = 0.0;
  bFToL(v49, &a5, 0LL);
  *(float *)(v8 + 8) = a5;
  a5 = 0.0;
  bFToL(v50, &a5, 0LL);
  *(float *)(v8 + 12) = a5;
  a5 = 0.0;
  bFToL(v51, &a5, 0LL);
  *(float *)(v8 + 28) = a5;
  a5 = 0.0;
  bFToL(v52, &a5, 0LL);
  *(float *)(v8 + 32) = a5;
  a5 = 0.0;
  bFToL(v53, &a5, 0LL);
  *(float *)(v8 + 20) = a5;
  a5 = 0.0;
  bFToL(v54, &a5, 0LL);
  *(float *)(v8 + 24) = a5;
LABEL_38:
  v36 = *(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v8 + 44) = a7;
  *(_DWORD *)(v8 + 48) = a8;
  *(_DWORD *)(v8 + 16) = v36;
  *(_DWORD *)(v8 + 36) = *(unsigned __int16 *)(v12 + 46);
  *(_BYTE *)(v8 + 60) = -((*(_BYTE *)(v12 + 52) & 1) != 0);
  *(_BYTE *)(v8 + 61) = *(_BYTE *)(v12 + 52) & 2;
  *(_BYTE *)(v8 + 62) = *(_BYTE *)(v12 + 52) & 0x10;
  *(_WORD *)(v8 + 52) = *(_WORD *)(v12 + 112);
  *(_WORD *)(v8 + 54) = *(_WORD *)(v12 + 114);
  *(_WORD *)(v8 + 56) = *(_WORD *)(v12 + 116);
  *(_WORD *)(v8 + 58) = *(_WORD *)(v12 + 118);
  *(_BYTE *)(v8 + 64) = *(_BYTE *)(v12 + 44);
  if ( a4 )
    v37 = 8;
  else
    v37 = 0;
  v38 = *(_DWORD *)(v12 + 48);
  if ( (v38 & 8) != 0 )
    v39 = 10;
  else
    v39 = 0;
  v40 = *(_BYTE *)(v12 + 45) & 0xF0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_DWORD *)(v8 + 68) = 0;
  *(_BYTE *)(v8 + 63) = v37 | v39 | v40 | ((v38 & 0x401000) == 0) | (v38 >> 1) & 2 | ((v38 & 1) != 0 ? 6 : 0);
  v41 = *(_WORD *)(v12 + 52);
  if ( (v41 & 0x21) != 0 )
  {
    v42 = 0;
    if ( (v41 & 1) != 0 )
    {
      *(_DWORD *)(v8 + 68) = 1;
      v42 = 1;
      v41 = *(_WORD *)(v12 + 52);
    }
    if ( (v41 & 0x20) == 0 )
      goto LABEL_45;
    v42 |= 0x20u;
  }
  else
  {
    v42 = 64;
  }
  *(_DWORD *)(v8 + 68) = v42;
LABEL_45:
  v43 = *(_DWORD *)(v12 + 48);
  if ( (v43 & 0x20000000) != 0 )
  {
    v42 |= 0x10000u;
    *(_DWORD *)(v8 + 68) = v42;
    v43 = *(_DWORD *)(v12 + 48);
  }
  if ( v43 < 0 )
  {
    if ( (v43 & 0x4000) != 0 )
    {
      v42 |= 0x80000u;
      *(_DWORD *)(v8 + 68) = v42;
      v43 = *(_DWORD *)(v12 + 48);
    }
    if ( (v43 & 0x4000000) != 0 )
      v42 |= 0x20000u;
    else
      v42 |= 0x100000u;
    *(_DWORD *)(v8 + 68) = v42;
  }
  if ( (*(_DWORD *)(v12 + 48) & 0x40000) != 0 )
  {
    v44 = v42 | 0x200000;
    *(_DWORD *)(v8 + 68) = v44;
    if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
      *(_DWORD *)(v8 + 68) = v44 | 0x40000;
  }
  *(_DWORD *)(v8 + 72) = *(__int16 *)(v12 + 56);
  *(_DWORD *)(v8 + 76) = *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62);
  *(_DWORD *)(v8 + 80) = *(__int16 *)(v12 + 76);
  *(_BYTE *)(v8 + 4) = *(_BYTE *)(v12 + 108);
  *(_BYTE *)(v8 + 5) = *(_BYTE *)(v12 + 109);
  *(_BYTE *)(v8 + 6) = *(_BYTE *)(v12 + 110);
  *(_BYTE *)(v8 + 7) = *(_BYTE *)(v12 + 111);
  v45 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  if ( *(_DWORD *)(v45 + 4) > 4u && (v46 = *(int *)(v45 + 196), (_DWORD)v46) )
  {
    *(_OWORD *)(v8 + 84) = *(_OWORD *)(v46 + v12);
    *(_QWORD *)(v8 + 100) = *(_QWORD *)(v46 + v12 + 16);
  }
  else
  {
    *(_QWORD *)(v8 + 84) = 0LL;
    *(_QWORD *)(v8 + 92) = 0LL;
    *(_QWORD *)(v8 + 100) = 0LL;
  }
  return 1LL;
}
