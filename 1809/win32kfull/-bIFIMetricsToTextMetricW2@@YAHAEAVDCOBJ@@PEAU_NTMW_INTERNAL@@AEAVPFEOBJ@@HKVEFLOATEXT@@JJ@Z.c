/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C0024DEC
 * Callers:
 *     cjCopyFontDataW @ 0x1C0026910 (cjCopyFontDataW.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
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
  unsigned int v8; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  float v18; // xmm1_4
  float v19; // xmm1_4
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  __int16 v26; // cx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  unsigned int v38; // edx
  char v39; // al
  __int16 v40; // ax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int16 v47; // cx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _DWORD v54[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v55[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v56; // [rsp+30h] [rbp-10h] BYREF
  int v57; // [rsp+38h] [rbp-8h]
  int v58; // [rsp+3Ch] [rbp-4h]
  int v59; // [rsp+78h] [rbp+38h] BYREF
  int v60; // [rsp+80h] [rbp+40h] BYREF

  v8 = 0;
  v12 = a2;
  v13 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v14 = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
  if ( v14 != 0 && *(_WORD *)(v13 + 56) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
    {
      LODWORD(a2) = 0;
      a5 = (float)v14 * a6;
      v15 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v15 <= 40 )
      {
        v16 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v17 = v15 < 0 ? v16 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v16 << v15;
        a2 = (v17 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(a2) = -(int)a2;
      }
      *(_DWORD *)(v12 + 8) = a2;
      v18 = (float)(int)a2;
      LODWORD(a2) = 0;
      v19 = v18 / (float)(*(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62));
      a5 = (float)*(__int16 *)(v13 + 60) * v19;
      v20 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v20 <= 40 )
      {
        v21 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v22 = v20 < 0 ? v21 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v21 << v20;
        a2 = (v22 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(a2) = -(int)a2;
      }
      *(_DWORD *)(v12 + 12) = a2;
      LODWORD(a2) = 0;
      a5 = (float)(__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56)) * v19;
      v23 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v23 <= 40 )
      {
        v24 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v25 = v23 < 0 ? v24 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v24 << v23;
        a2 = (v25 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(a2) = -(int)a2;
      }
      *(_DWORD *)(v12 + 20) = a2;
      LODWORD(a2) = 0;
      v26 = *(_WORD *)(v13 + 64)
          + *(_WORD *)(v13 + 68)
          - *(_WORD *)(v13 + 66)
          - *(_WORD *)(v13 + 62)
          - *(_WORD *)(v13 + 60);
      if ( v26 <= 0 )
        v26 = 0;
      a5 = (float)v26 * v19;
      v27 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v27 <= 40 )
      {
        v28 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v29 = v27 >= 0 ? v28 << v27 : v28 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23));
        a2 = (v29 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(a2) = -(int)a2;
      }
      *(_DWORD *)(v12 + 24) = a2;
      LODWORD(a2) = 0;
      a5 = (float)*(__int16 *)(v13 + 76) * v19;
      v30 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v30 <= 40 )
      {
        v31 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v32 = v30 < 0 ? v31 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v31 << v30;
        a2 = (v32 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(a2) = -(int)a2;
      }
      *(_DWORD *)(v12 + 28) = a2;
      LODWORD(a2) = 0;
      a5 = (float)*(__int16 *)(v13 + 78) * v19;
      v33 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v33 <= 40 )
      {
        v34 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v35 = v33 < 0 ? v34 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v34 << v33;
        a2 = (v35 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(a2) = -(int)a2;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 8) = v14;
      *(_DWORD *)(a2 + 12) = *(__int16 *)(v13 + 60);
      *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56));
      v47 = *(_WORD *)(v13 + 64)
          + *(_WORD *)(v13 + 68)
          - *(_WORD *)(v13 + 66)
          - *(_WORD *)(v13 + 62)
          - *(_WORD *)(v13 + 60);
      if ( v47 <= 0 )
        v47 = 0;
      *(_DWORD *)(a2 + 24) = v47;
      *(_DWORD *)(a2 + 28) = *(__int16 *)(v13 + 76);
      LODWORD(a2) = *(__int16 *)(v13 + 78);
    }
    *(_DWORD *)(v12 + 32) = a2;
    v36 = *(_QWORD *)a1;
    v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL);
    v58 = *(_DWORD *)(*(_QWORD *)(v36 + 976) + 108LL) & 1;
    EXFORMOBJ::vInit((EXFORMOBJ *)&v56, a1, 0x402u, 0);
    if ( v56 )
    {
      if ( (*(_DWORD *)(v56 + 32) & 2) == 0 )
      {
        v54[1] = 0;
        v54[0] = 1065353216;
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v56, (struct VECTORFL *)v54, (struct VECTORFL *)v54, 1uLL) )
          return v8;
        EFLOAT::eqLength(&v59, &a5, v54);
        v55[0] = 0;
        v55[1] = 1065353216;
        if ( (*(_DWORD *)(v56 + 32) & 2) == 0
          && !EXFORMOBJ::bXform((EXFORMOBJ *)&v56, (struct VECTORFL *)v55, (struct VECTORFL *)v55, 1uLL) )
        {
          return v8;
        }
        EFLOAT::eqLength(&v60, &a5, v55);
        a5 = 0.0;
        bFToL(v48, &a5, 0LL);
        *(float *)(v12 + 8) = a5;
        a5 = 0.0;
        bFToL(v49, &a5, 0LL);
        *(float *)(v12 + 12) = a5;
        a5 = 0.0;
        bFToL(v50, &a5, 0LL);
        *(float *)(v12 + 28) = a5;
        a5 = 0.0;
        bFToL(v51, &a5, 0LL);
        *(float *)(v12 + 32) = a5;
        a5 = 0.0;
        bFToL(v52, &a5, 0LL);
        *(float *)(v12 + 20) = a5;
        a5 = 0.0;
        bFToL(v53, &a5, 0LL);
        *(float *)(v12 + 24) = a5;
      }
      v37 = *(_DWORD *)(v12 + 8) - *(_DWORD *)(v12 + 12);
      *(_DWORD *)(v12 + 44) = a7;
      *(_DWORD *)(v12 + 48) = a8;
      *(_DWORD *)(v12 + 16) = v37;
      *(_DWORD *)(v12 + 36) = *(unsigned __int16 *)(v13 + 46);
      *(_BYTE *)(v12 + 60) = -((*(_BYTE *)(v13 + 52) & 1) != 0);
      *(_BYTE *)(v12 + 61) = *(_BYTE *)(v13 + 52) & 2;
      *(_BYTE *)(v12 + 62) = *(_BYTE *)(v13 + 52) & 0x10;
      *(_WORD *)(v12 + 52) = *(_WORD *)(v13 + 112);
      *(_WORD *)(v12 + 54) = *(_WORD *)(v13 + 114);
      *(_WORD *)(v12 + 56) = *(_WORD *)(v13 + 116);
      *(_WORD *)(v12 + 58) = *(_WORD *)(v13 + 118);
      *(_BYTE *)(v12 + 64) = *(_BYTE *)(v13 + 44);
      v38 = *(_DWORD *)(v13 + 48);
      v39 = *(_BYTE *)(v13 + 45);
      *(_DWORD *)(v12 + 40) = 0;
      *(_DWORD *)(v12 + 68) = 0;
      *(_BYTE *)(v12 + 63) = (a4 != 0 ? 8 : 0) | v39 & 0xF0 | (v38 >> 1) & 2 | ((v38 & 1) != 0 ? 6 : 0) | ((v38 & 8) != 0 ? 0xA : 0) | ((v38 & 0x401000) == 0);
      v40 = *(_WORD *)(v13 + 52);
      if ( (v40 & 0x21) != 0 )
      {
        v41 = 0;
        if ( (v40 & 1) != 0 )
        {
          *(_DWORD *)(v12 + 68) = 1;
          v41 = 1;
          v40 = *(_WORD *)(v13 + 52);
        }
        if ( (v40 & 0x20) == 0 )
          goto LABEL_40;
        v41 |= 0x20u;
      }
      else
      {
        v41 = 64;
      }
      *(_DWORD *)(v12 + 68) = v41;
LABEL_40:
      v42 = *(_DWORD *)(v13 + 48);
      if ( (v42 & 0x20000000) != 0 )
      {
        v41 |= 0x10000u;
        *(_DWORD *)(v12 + 68) = v41;
        v42 = *(_DWORD *)(v13 + 48);
      }
      if ( v42 < 0 )
      {
        if ( (v42 & 0x4000) != 0 )
        {
          v41 |= 0x80000u;
          *(_DWORD *)(v12 + 68) = v41;
          v42 = *(_DWORD *)(v13 + 48);
        }
        if ( (v42 & 0x4000000) != 0 )
          v41 |= 0x20000u;
        else
          v41 |= 0x100000u;
        *(_DWORD *)(v12 + 68) = v41;
      }
      if ( (*(_DWORD *)(v13 + 48) & 0x40000) != 0 )
      {
        v43 = v41 | 0x200000;
        *(_DWORD *)(v12 + 68) = v43;
        if ( (*(_DWORD *)(v13 + 48) & 1) != 0 )
          *(_DWORD *)(v12 + 68) = v43 | 0x40000;
      }
      *(_DWORD *)(v12 + 72) = *(__int16 *)(v13 + 56);
      *(_DWORD *)(v12 + 76) = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
      *(_DWORD *)(v12 + 80) = *(__int16 *)(v13 + 76);
      *(_BYTE *)(v12 + 4) = *(_BYTE *)(v13 + 108);
      *(_BYTE *)(v12 + 5) = *(_BYTE *)(v13 + 109);
      *(_BYTE *)(v12 + 6) = *(_BYTE *)(v13 + 110);
      *(_BYTE *)(v12 + 7) = *(_BYTE *)(v13 + 111);
      v44 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
      if ( *(_DWORD *)(v44 + 4) > 4u && (v45 = *(int *)(v44 + 196), (_DWORD)v45) )
      {
        *(_OWORD *)(v12 + 84) = *(_OWORD *)(v45 + v13);
        *(_QWORD *)(v12 + 100) = *(_QWORD *)(v45 + v13 + 16);
      }
      else
      {
        *(_QWORD *)(v12 + 84) = 0LL;
        *(_QWORD *)(v12 + 92) = 0LL;
        *(_QWORD *)(v12 + 100) = 0LL;
      }
      return 1;
    }
  }
  return v8;
}
