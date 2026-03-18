/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C0051F40
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C004B5E0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C004D128 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C004F484 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00534CC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0077458 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0109F58 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011DF8C (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0151F10 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H3(
        __int64 a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct GPRUN *a10)
{
  int v10; // r10d
  unsigned int v12; // esi
  __int64 v14; // rcx
  struct XDCOBJ *v15; // r9
  struct _GLYPHPOS *v16; // r10
  int v17; // esi
  struct RFONTOBJ *v18; // rdx
  int v19; // ecx
  int v20; // edi
  POINTL *p_ptl; // r13
  int *v22; // rax
  LONG *p_y; // r12
  __int64 v24; // rax
  unsigned __int16 *v25; // r14
  unsigned int v26; // r11d
  struct _GLYPHPOS *v27; // r15
  __int64 v28; // r8
  _DWORD *v29; // rcx
  struct GPRUN *Run; // r8
  _DWORD *v31; // r9
  int v32; // edi
  __int64 v33; // rax
  __int64 v34; // rbp
  struct _GLYPHDATA **v35; // rdx
  struct _GLYPHDATA *v36; // rdi
  int v37; // ebp
  __int64 v38; // rax
  unsigned int v39; // r8d
  int v40; // r10d
  int v41; // r9d
  int v42; // r11d
  _DWORD *v43; // rdx
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  struct XDCOBJ *v48; // rax
  RFONTOBJ *v49; // r8
  __int64 v50; // rdx
  __int64 result; // rax
  int v52; // ecx
  int v53; // edx
  int v54; // edx
  int v55; // r9d
  RFONTOBJ *v56; // rbp
  __int64 v57; // rdi
  __m128i v58; // xmm1
  int v59; // edi
  int v60; // r8d
  __int64 v61; // rdx
  int v62; // r9d
  int v63; // r8d
  int v64; // eax
  unsigned int v65; // edi
  int v66; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v67; // [rsp+50h] [rbp-68h]
  _DWORD *v68; // [rsp+58h] [rbp-60h]
  struct _GLYPHPOS *v69; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v70; // [rsp+68h] [rbp-50h]
  int v71; // [rsp+C0h] [rbp+8h] BYREF
  struct XDCOBJ *v72; // [rsp+C8h] [rbp+10h]
  RFONTOBJ *v73; // [rsp+D0h] [rbp+18h]
  int v74; // [rsp+D8h] [rbp+20h]

  v74 = a4;
  v73 = a3;
  v72 = a2;
  v10 = a6;
  v12 = a7;
  v14 = *(unsigned int *)(a1 + 4);
  v15 = a2;
  v66 = 0;
  if ( a7 | a6 )
  {
    v58 = (__m128i)a9;
    v59 = v14 | *(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x40 | 2;
    *(_DWORD *)(a1 + 4) = v59;
    if ( v10 )
    {
      v71 = 0;
      bFToL(v14, &v71, 0LL);
      v60 = v71;
      *(_DWORD *)(a1 + 116) = v71;
      if ( v60 > 0 )
        *(_DWORD *)(a1 + 4) = v59 | 0x800;
    }
    if ( (unsigned __int8)bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v58), v12, a8, a1 + 120) )
    {
      v61 = *(_QWORD *)a3;
      v62 = *(_DWORD *)(a1 + 116);
      v63 = *(_DWORD *)(*(_QWORD *)a3 + 468LL);
      if ( v63 + v62 + *(_DWORD *)(a1 + 120) < 0 )
      {
        *(_DWORD *)(a1 + 120) = -(v62 + v63);
        v61 = *(_QWORD *)a3;
      }
      v64 = *(_DWORD *)(v61 + 464);
      *(_DWORD *)(a1 + 4) |= 0x1000u;
      v66 = v64;
    }
    v15 = v72;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v14 | *(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x71 | 2;
  }
  v16 = *(struct _GLYPHPOS **)(a1 + 64);
  v17 = 0;
  v18 = *(struct RFONTOBJ **)(a1 + 40);
  v19 = a5;
  v20 = v74 + 8;
  p_ptl = &v16->ptl;
  v16->ptl.x = (v74 + 8) >> 4;
  v22 = (int *)a10;
  p_y = &v16->ptl.y;
  v69 = v16;
  v67 = (unsigned __int16 *)v18;
  v74 = v20;
  a5 = (v19 + 8) >> 4;
  v16->ptl.y = a5;
  if ( v22 )
  {
    v37 = *v22;
LABEL_16:
    if ( v37 )
    {
LABEL_17:
      v38 = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 232) |= 2u;
      *(_QWORD *)(a1 + 32) = v38;
    }
  }
  else
  {
    v24 = *(_QWORD *)a3;
    v25 = (unsigned __int16 *)v18;
    v26 = *(_DWORD *)a1;
    v27 = v16;
    a7 = *(_DWORD *)a1;
    if ( !*(_QWORD *)(v24 + 480) )
    {
      result = RFONTOBJ::bAllocateCache(a3, v18);
      if ( !(_DWORD)result )
        return result;
      v26 = a7;
      v18 = (struct RFONTOBJ *)v25;
      v15 = v72;
      v16 = v27;
    }
    v28 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 104LL) + 1824LL) & 0x40000000) == 0 || *(_DWORD *)(v28 + 88) != 1 )
    {
      v29 = *(_DWORD **)(v28 + 480);
      a6 = 1;
      if ( *v29 )
      {
        Run = (struct GPRUN *)(v29 + 4);
        a10 = (struct GPRUN *)(v29 + 4);
        v70 = (unsigned __int16 *)((char *)v18 + 2 * v26);
        if ( v18 < (struct RFONTOBJ *)v70 )
        {
          v31 = v29 + 5;
          v68 = v29 + 5;
          while ( 1 )
          {
            v32 = *v25;
            v33 = (unsigned int)(v32 - *(_DWORD *)Run);
            if ( (unsigned int)v33 >= *v31 )
            {
              v56 = v73;
              Run = RFONTOBJ::gprunFindRun(v73, v32);
              a10 = Run;
              v57 = (unsigned int)(v32 - *(_DWORD *)Run);
              v68 = (_DWORD *)((char *)Run + 4);
              if ( (unsigned int)v57 >= *((_DWORD *)Run + 1) )
              {
                result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(v56, v72, (struct ESTROBJ *)a1, v25, v67, a7, &a6, 1);
                v36 = (struct _GLYPHDATA *)result;
                if ( !result )
                  return result;
                goto LABEL_13;
              }
              v34 = 8 * v57;
            }
            else
            {
              v34 = 8 * v33;
            }
            _mm_lfence();
            v35 = (struct _GLYPHDATA **)(v34 + *((_QWORD *)Run + 1));
            v36 = *v35;
            if ( !*v35 )
            {
              result = RFONTOBJ::bInsertMetricsPlus(v73, v35);
              if ( !(_DWORD)result )
                return result;
              v36 = *(struct _GLYPHDATA **)(*((_QWORD *)a10 + 1) + v34);
            }
LABEL_13:
            v37 = a6;
            if ( !v36->gdf.pgb
              && a6
              && *(_DWORD *)(*(_QWORD *)v73 + 88LL)
              && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v73, v36, v25 == v67) )
            {
              v37 = 0;
              a6 = 0;
            }
            ++v25;
            Run = a10;
            v31 = v68;
            v27->hg = v36->hg;
            v27->pgdf = &v36->gdf;
            ++v27;
            if ( v25 >= v70 )
            {
              v20 = v74;
              goto LABEL_16;
            }
          }
        }
      }
      else if ( v26 )
      {
        v65 = a7;
        do
        {
          v27->hg = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
          v27->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
          ++v27;
          --v65;
        }
        while ( v65 );
        v20 = v74;
      }
      goto LABEL_17;
    }
    result = RFONTOBJ::bGetGlyphMetrics(
               a3,
               (struct RFONTOBJ *)v26,
               v16,
               (unsigned __int16 *)v18,
               v15,
               (struct ESTROBJ *)a1);
    if ( !(_DWORD)result )
      return result;
  }
  if ( (*(_BYTE *)(a1 + 4) & 0x30) != 0x30 || (v53 = *(_DWORD *)(a1 + 116), v53 < 0) || *(_DWORD *)(a1 + 120) )
  {
    v39 = *(_DWORD *)a1;
    v40 = 0;
    v41 = a5;
    v42 = 0;
    while ( 1 )
    {
      v43 = (_DWORD *)p_ptl[-1];
      v44 = v43[3];
      v45 = v17 + v43[4];
      if ( v45 >= v42 )
        v45 = v42;
      v42 = v45;
      v46 = v17 + v43[5];
      if ( v46 <= v40 )
        v46 = v40;
      v17 += v44;
      v40 = v46;
      v47 = *(_DWORD *)(a1 + 116);
      if ( v47 && v47 + v44 > 0 )
        v17 += v47;
      if ( p_ptl[-2].x == v66 )
        v17 += *(_DWORD *)(a1 + 120);
      if ( !--v39 )
        break;
      p_ptl += 3;
      p_ptl->y = v41;
      p_ptl->x = (v17 + v20) >> 4;
    }
    if ( v17 <= v40 )
      goto LABEL_31;
  }
  else
  {
    v17 = v53 + HIDWORD(v69->pgdf[1].ppo);
    v54 = *(_DWORD *)a1 - 1;
    if ( *(_DWORD *)a1 != 1 )
    {
      v55 = a5;
      do
      {
        p_y[6] = v55;
        p_y += 6;
        *(p_y - 1) = (v17 + v20) >> 4;
        v17 += *(_DWORD *)(a1 + 116) + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
        --v54;
      }
      while ( v54 );
    }
    v42 = 0;
  }
  v40 = v17;
LABEL_31:
  v48 = v72;
  v49 = v73;
  *(_DWORD *)(a1 + 112) = v17;
  *(_DWORD *)(a1 + 80) = v17;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 96) = v42;
  *(_DWORD *)(a1 + 104) = v40;
  v50 = *(_QWORD *)v49;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 100) = -*(_DWORD *)(v50 + 320);
    result = *(_QWORD *)v49;
    v52 = -*(_DWORD *)(*(_QWORD *)v49 + 316LL);
  }
  else
  {
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(v50 + 316);
    result = *(_QWORD *)v49;
    v52 = *(_DWORD *)(*(_QWORD *)v49 + 320LL);
  }
  *(_DWORD *)(a1 + 108) = v52;
  *(_DWORD *)(a1 + 232) |= 4u;
  return result;
}
