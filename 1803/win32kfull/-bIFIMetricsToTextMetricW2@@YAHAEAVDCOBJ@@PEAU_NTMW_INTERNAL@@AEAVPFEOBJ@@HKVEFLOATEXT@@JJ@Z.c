/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C00CF740
 * Callers:
 *     cjCopyFontDataW @ 0x1C00CD24C (cjCopyFontDataW.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
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
  __int64 v13; // rdi
  int v14; // r9d
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  float v19; // xmm1_4
  float v20; // xmm1_4
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int16 v27; // cx
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  unsigned int v39; // edx
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
  _DWORD v55[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v56[2]; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v57[2]; // [rsp+30h] [rbp-10h] BYREF
  int v58; // [rsp+78h] [rbp+38h] BYREF
  int v59; // [rsp+80h] [rbp+40h] BYREF

  v8 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v14 = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
  if ( v14 != 0 && *(_WORD *)(v13 + 56) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
    {
      LODWORD(v15) = 0;
      a5 = (float)v14 * a6;
      v16 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v16 <= 40 )
      {
        v17 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v18 = v16 < 0 ? v17 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v17 << v16;
        v15 = (v18 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 8) = v15;
      v19 = (float)(int)v15;
      LODWORD(v15) = 0;
      v20 = v19 / (float)(*(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62));
      a5 = (float)*(__int16 *)(v13 + 60) * v20;
      v21 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v21 <= 40 )
      {
        v22 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v23 = v21 < 0 ? v22 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v22 << v21;
        v15 = (v23 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 12) = v15;
      LODWORD(v15) = 0;
      a5 = (float)(__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56)) * v20;
      v24 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v24 <= 40 )
      {
        v25 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v26 = v24 < 0 ? v25 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v25 << v24;
        v15 = (v26 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 20) = v15;
      LODWORD(v15) = 0;
      v27 = *(_WORD *)(v13 + 64)
          + *(_WORD *)(v13 + 68)
          - *(_WORD *)(v13 + 66)
          - *(_WORD *)(v13 + 62)
          - *(_WORD *)(v13 + 60);
      if ( v27 <= 0 )
        v27 = 0;
      a5 = (float)v27 * v20;
      v28 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v28 <= 40 )
      {
        v29 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v30 = v28 >= 0 ? v29 << v28 : v29 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23));
        v15 = (v30 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 24) = v15;
      LODWORD(v31) = 0;
      a5 = (float)*(__int16 *)(v13 + 76) * v20;
      v32 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v32 <= 40 )
      {
        v33 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v34 = v32 < 0 ? v33 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v33 << v32;
        v31 = (v34 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v31) = -(int)v31;
      }
      *(_DWORD *)(a2 + 28) = v31;
      LODWORD(v31) = 0;
      a5 = (float)*(__int16 *)(v13 + 78) * v20;
      v35 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v35 <= 40 )
      {
        v36 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v37 = v35 < 0 ? v36 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v36 << v35;
        v31 = (v37 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v31) = -(int)v31;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 8) = v14;
      *(_DWORD *)(a2 + 12) = *(__int16 *)(v13 + 60);
      *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56));
      v48 = *(_WORD *)(v13 + 64)
          + *(_WORD *)(v13 + 68)
          - *(_WORD *)(v13 + 66)
          - *(_WORD *)(v13 + 62)
          - *(_WORD *)(v13 + 60);
      if ( v48 <= 0 )
        v48 = 0;
      *(_DWORD *)(a2 + 24) = v48;
      *(_DWORD *)(a2 + 28) = *(__int16 *)(v13 + 76);
      LODWORD(v31) = *(__int16 *)(v13 + 78);
    }
    *(_DWORD *)(a2 + 32) = v31;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v57, a1, 1026);
    if ( v57[0] )
    {
      if ( (*(_DWORD *)(v57[0] + 32LL) & 2) == 0 )
      {
        v55[1] = 0;
        v55[0] = 1065353216;
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v57, (struct VECTORFL *)v55, (struct VECTORFL *)v55, 1uLL) )
          return v8;
        EFLOAT::eqLength(&v58, &a5, v55);
        v56[0] = 0;
        v56[1] = 1065353216;
        if ( (*(_DWORD *)(v57[0] + 32LL) & 2) == 0
          && !EXFORMOBJ::bXform((EXFORMOBJ *)v57, (struct VECTORFL *)v56, (struct VECTORFL *)v56, 1uLL) )
        {
          return v8;
        }
        EFLOAT::eqLength(&v59, &a5, v56);
        a5 = 0.0;
        bFToL(v49, &a5, 0LL);
        *(float *)(a2 + 8) = a5;
        a5 = 0.0;
        bFToL(v50, &a5, 0LL);
        *(float *)(a2 + 12) = a5;
        a5 = 0.0;
        bFToL(v51, &a5, 0LL);
        *(float *)(a2 + 28) = a5;
        a5 = 0.0;
        bFToL(v52, &a5, 0LL);
        *(float *)(a2 + 32) = a5;
        a5 = 0.0;
        bFToL(v53, &a5, 0LL);
        *(float *)(a2 + 20) = a5;
        a5 = 0.0;
        bFToL(v54, &a5, 0LL);
        *(float *)(a2 + 24) = a5;
      }
      v38 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 44) = a7;
      *(_DWORD *)(a2 + 48) = a8;
      *(_DWORD *)(a2 + 16) = v38;
      *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v13 + 46);
      *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v13 + 52) & 1) != 0);
      *(_BYTE *)(a2 + 61) = *(_BYTE *)(v13 + 52) & 2;
      *(_BYTE *)(a2 + 62) = *(_BYTE *)(v13 + 52) & 0x10;
      *(_WORD *)(a2 + 52) = *(_WORD *)(v13 + 112);
      *(_WORD *)(a2 + 54) = *(_WORD *)(v13 + 114);
      *(_WORD *)(a2 + 56) = *(_WORD *)(v13 + 116);
      *(_WORD *)(a2 + 58) = *(_WORD *)(v13 + 118);
      *(_BYTE *)(a2 + 64) = *(_BYTE *)(v13 + 44);
      v39 = *(_DWORD *)(v13 + 48);
      v40 = *(_BYTE *)(v13 + 45);
      *(_DWORD *)(a2 + 40) = 0;
      *(_DWORD *)(a2 + 68) = 0;
      *(_BYTE *)(a2 + 63) = (a4 != 0 ? 8 : 0) | v40 & 0xF0 | (v39 >> 1) & 2 | ((v39 & 1) != 0 ? 6 : 0) | ((v39 & 8) != 0 ? 0xA : 0) | ((v39 & 0x401000) == 0);
      v41 = *(_WORD *)(v13 + 52);
      if ( (v41 & 0x21) != 0 )
      {
        v42 = 0;
        if ( (v41 & 1) != 0 )
        {
          *(_DWORD *)(a2 + 68) = 1;
          v42 = 1;
          v41 = *(_WORD *)(v13 + 52);
        }
        if ( (v41 & 0x20) == 0 )
          goto LABEL_40;
        v42 |= 0x20u;
      }
      else
      {
        v42 = 64;
      }
      *(_DWORD *)(a2 + 68) = v42;
LABEL_40:
      v43 = *(_DWORD *)(v13 + 48);
      if ( (v43 & 0x20000000) != 0 )
      {
        v42 |= 0x10000u;
        *(_DWORD *)(a2 + 68) = v42;
        v43 = *(_DWORD *)(v13 + 48);
      }
      if ( v43 < 0 )
      {
        if ( (v43 & 0x4000) != 0 )
        {
          v42 |= 0x80000u;
          *(_DWORD *)(a2 + 68) = v42;
          v43 = *(_DWORD *)(v13 + 48);
        }
        if ( (v43 & 0x4000000) != 0 )
          v42 |= 0x20000u;
        else
          v42 |= 0x100000u;
        *(_DWORD *)(a2 + 68) = v42;
      }
      if ( (*(_DWORD *)(v13 + 48) & 0x40000) != 0 )
      {
        v44 = v42 | 0x200000;
        *(_DWORD *)(a2 + 68) = v44;
        if ( (*(_DWORD *)(v13 + 48) & 1) != 0 )
          *(_DWORD *)(a2 + 68) = v44 | 0x40000;
      }
      *(_DWORD *)(a2 + 72) = *(__int16 *)(v13 + 56);
      *(_DWORD *)(a2 + 76) = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
      *(_DWORD *)(a2 + 80) = *(__int16 *)(v13 + 76);
      *(_BYTE *)(a2 + 4) = *(_BYTE *)(v13 + 108);
      *(_BYTE *)(a2 + 5) = *(_BYTE *)(v13 + 109);
      *(_BYTE *)(a2 + 6) = *(_BYTE *)(v13 + 110);
      *(_BYTE *)(a2 + 7) = *(_BYTE *)(v13 + 111);
      v45 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
      if ( *(_DWORD *)(v45 + 4) > 4u && (v46 = *(int *)(v45 + 196), (_DWORD)v46) )
      {
        *(_OWORD *)(a2 + 84) = *(_OWORD *)(v46 + v13);
        *(_QWORD *)(a2 + 100) = *(_QWORD *)(v46 + v13 + 16);
      }
      else
      {
        *(_QWORD *)(a2 + 84) = 0LL;
        *(_QWORD *)(a2 + 92) = 0LL;
        *(_QWORD *)(a2 + 100) = 0LL;
      }
      return 1;
    }
  }
  return v8;
}
