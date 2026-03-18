/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C00811F0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C007FC6C (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0080FC8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0082A64 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0083968 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C01118DC (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H3(
        __int64 a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int16 *a10)
{
  __int64 v10; // rax
  RFONTOBJ *v11; // rsi
  int v12; // r8d
  __int64 v14; // rcx
  struct _GLYPHPOS *v16; // r10
  int v17; // ebp
  unsigned __int16 *v18; // rdx
  int v19; // r14d
  int v20; // r13d
  int v21; // edi
  __int64 v22; // rax
  unsigned __int16 *v23; // r9
  unsigned int v24; // r15d
  struct _GLYPHPOS *v25; // r12
  __int64 v26; // r8
  _DWORD *v27; // rcx
  int v28; // ebp
  struct GPRUN *v29; // r15
  _DWORD *v30; // r8
  int v31; // r14d
  __int64 v32; // rbp
  struct _GLYPHDATA *v33; // r14
  __int64 result; // rax
  __int64 v35; // rax
  unsigned int v36; // r8d
  int *i; // r9
  _DWORD *v38; // rdx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // edx
  int v46; // edx
  int *v47; // rsi
  struct GPRUN *Run; // rax
  __m128i v49; // xmm1
  int v50; // edi
  int v51; // r8d
  _DWORD *v52; // rdi
  __int64 v53; // rdx
  int v54; // r9d
  int v55; // r8d
  int v56; // eax
  int v57; // [rsp+40h] [rbp-88h]
  unsigned __int16 *v58; // [rsp+48h] [rbp-80h]
  _DWORD *v59; // [rsp+50h] [rbp-78h]
  struct _GLYPHPOS *v60; // [rsp+58h] [rbp-70h]
  unsigned __int16 *v61; // [rsp+60h] [rbp-68h]
  LONG *p_y; // [rsp+68h] [rbp-60h]
  POINTL *p_ptl; // [rsp+70h] [rbp-58h]
  int v64; // [rsp+D0h] [rbp+8h]
  int v67; // [rsp+E8h] [rbp+20h]
  unsigned int v68; // [rsp+F0h] [rbp+28h]

  v10 = *(_QWORD *)a3;
  v11 = a3;
  v12 = *(_DWORD *)(a1 + 4);
  v14 = a6;
  v57 = 0;
  if ( a7 | a6 )
  {
    v49 = (__m128i)a9;
    v50 = v12 | *(_DWORD *)(v10 + 276) & 0x40 | 2;
    *(_DWORD *)(a1 + 4) = v50;
    if ( (_DWORD)v14 )
    {
      a6 = 0;
      bFToL(v14, &a6, 0LL);
      v51 = a6;
      *(_DWORD *)(a1 + 116) = a6;
      if ( v51 > 0 )
        *(_DWORD *)(a1 + 4) = v50 | 0x800;
    }
    v52 = (_DWORD *)(a1 + 120);
    if ( (unsigned __int8)bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v49), (unsigned int)a7, a8, a1 + 120) )
    {
      v53 = *(_QWORD *)v11;
      v54 = *(_DWORD *)(a1 + 116);
      v55 = *(_DWORD *)(*(_QWORD *)v11 + 468LL);
      if ( v55 + v54 + *v52 < 0 )
      {
        *v52 = -(v54 + v55);
        v53 = *(_QWORD *)v11;
      }
      v56 = *(_DWORD *)(v53 + 464);
      *(_DWORD *)(a1 + 4) |= 0x1000u;
      v57 = v56;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v12 | *(_DWORD *)(v10 + 276) & 0x71 | 2;
  }
  v16 = *(struct _GLYPHPOS **)(a1 + 64);
  v17 = a4 + 8;
  v18 = *(unsigned __int16 **)(a1 + 40);
  v19 = 0;
  v16->ptl.x = v17 >> 4;
  v20 = 0;
  v60 = v16;
  p_y = &v16->ptl.y;
  v21 = 0;
  v16->ptl.y = (int)(a5 + 8) >> 4;
  v58 = v18;
  v67 = v17;
  v64 = (int)(a5 + 8) >> 4;
  p_ptl = &v16->ptl;
  if ( a10 )
  {
    v28 = *(_DWORD *)a10;
  }
  else
  {
    v22 = *(_QWORD *)v11;
    v23 = v18;
    v24 = *(_DWORD *)a1;
    v25 = v16;
    a10 = v18;
    v68 = v24;
    if ( !*(_QWORD *)(v22 + 480) )
    {
      result = RFONTOBJ::bAllocateCache(v11, (struct RFONTOBJ *)v18);
      if ( !(_DWORD)result )
        return result;
      v23 = a10;
      v16 = v25;
      v18 = a10;
    }
    v26 = *(_QWORD *)v11;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 104LL) + 1824LL) & 0x40000000) != 0 && *(_DWORD *)(v26 + 88) == 1 )
    {
      v28 = 0;
      result = RFONTOBJ::bGetGlyphMetrics(v11, v24, v16, v18, a2, (struct ESTROBJ *)a1);
    }
    else
    {
      v27 = *(_DWORD **)(v26 + 480);
      v28 = 1;
      a7 = 1;
      if ( !*v27 )
      {
        for ( ; v24; --v24 )
        {
          v25->hg = *(_DWORD *)(*(_QWORD *)v11 + 460LL);
          v25->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v11);
          ++v25;
        }
        goto LABEL_19;
      }
      v29 = (struct GPRUN *)(v27 + 4);
      v61 = &v18[v68];
      if ( v18 < v61 )
      {
        v30 = v27 + 5;
        v59 = v27 + 5;
        do
        {
          v31 = *v23;
          v32 = (unsigned int)(v31 - *(_DWORD *)v29);
          if ( (unsigned int)v32 >= *v30 )
          {
            Run = RFONTOBJ::gprunFindRun(v11, v31);
            v23 = a10;
            v29 = Run;
            v32 = (unsigned int)(v31 - *(_DWORD *)Run);
            v59 = (_DWORD *)((char *)Run + 4);
            if ( (unsigned int)v32 >= *((_DWORD *)Run + 1) )
            {
              result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(v11, a2, (struct ESTROBJ *)a1, a10, v58, v68, &a7, 1);
              v33 = (struct _GLYPHDATA *)result;
              if ( !result )
                return result;
              v23 = a10;
            }
            else
            {
              _mm_lfence();
              v33 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v32);
            }
          }
          else
          {
            _mm_lfence();
            v33 = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v32);
          }
          if ( !v33 )
          {
            result = RFONTOBJ::bInsertMetricsPlus(v11, (struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v32), *v23);
            if ( !(_DWORD)result )
              return result;
            v33 = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v32);
          }
          v28 = a7;
          if ( !v33->gdf.pgb && a7 && *(_DWORD *)(*(_QWORD *)v11 + 88LL) )
          {
            v28 &= -((unsigned int)RFONTOBJ::bInsertGlyphbits(v11, v33) != 0);
            a7 = v28;
          }
          v30 = v59;
          v23 = a10 + 1;
          v25->hg = v33->hg;
          v25->pgdf = &v33->gdf;
          ++v25;
          a10 = v23;
        }
        while ( v23 < v61 );
        v19 = 0;
      }
      result = 1LL;
    }
    if ( !(_DWORD)result )
      return result;
  }
  if ( v28 )
  {
LABEL_19:
    v35 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 232) |= 2u;
    *(_QWORD *)(a1 + 32) = v35;
  }
  if ( (*(_BYTE *)(a1 + 4) & 0x30) != 0x30 || (v45 = *(_DWORD *)(a1 + 116), v45 < 0) || *(_DWORD *)(a1 + 120) )
  {
    v36 = *(_DWORD *)a1;
    for ( i = (int *)p_ptl; ; *i = (v21 + v67) >> 4 )
    {
      v38 = (_DWORD *)*((_QWORD *)i - 1);
      v39 = v38[3];
      v40 = v21 + v38[4];
      if ( v40 >= v19 )
        v40 = v19;
      v19 = v40;
      v41 = v21 + v38[5];
      if ( v41 <= v20 )
        v41 = v20;
      v21 += v39;
      v20 = v41;
      v42 = *(_DWORD *)(a1 + 116);
      if ( v42 && v42 + v39 > 0 )
        v21 += v42;
      if ( *(i - 4) == v57 )
        v21 += *(_DWORD *)(a1 + 120);
      if ( !--v36 )
        break;
      i += 6;
      i[1] = v64;
    }
    if ( v21 <= v20 )
      goto LABEL_33;
  }
  else
  {
    v21 = v45 + HIDWORD(v60->pgdf[1].ppo);
    v46 = *(_DWORD *)a1 - 1;
    if ( *(_DWORD *)a1 != 1 )
    {
      v47 = p_y;
      do
      {
        v47 += 6;
        *(v47 - 1) = (v21 + v67) >> 4;
        *v47 = v64;
        v21 += *(_DWORD *)(a1 + 116) + *(_DWORD *)(*(_QWORD *)(v47 - 3) + 12LL);
        --v46;
      }
      while ( v46 );
      v11 = a3;
    }
    v19 = 0;
  }
  v20 = v21;
LABEL_33:
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 112) = v21;
  *(_DWORD *)(a1 + 80) = v21;
  *(_DWORD *)(a1 + 96) = v19;
  *(_DWORD *)(a1 + 104) = v20;
  v43 = *(_QWORD *)v11;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 100) = -*(_DWORD *)(v43 + 320);
    result = *(_QWORD *)v11;
    v44 = -*(_DWORD *)(*(_QWORD *)v11 + 316LL);
  }
  else
  {
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(v43 + 316);
    result = *(_QWORD *)v11;
    v44 = *(_DWORD *)(*(_QWORD *)v11 + 320LL);
  }
  *(_DWORD *)(a1 + 108) = v44;
  *(_DWORD *)(a1 + 232) |= 4u;
  return result;
}
