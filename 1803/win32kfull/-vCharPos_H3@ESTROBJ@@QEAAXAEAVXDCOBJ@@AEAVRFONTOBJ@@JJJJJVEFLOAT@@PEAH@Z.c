/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0094400
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0084368 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00855A0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0085928 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0085994 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00859E4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010A9F0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H3(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        int *a10)
{
  int v10; // r10d
  unsigned int v12; // esi
  __int64 v14; // rcx
  struct XDCOBJ *v16; // r11
  struct _GLYPHPOS *v17; // r10
  int v18; // r14d
  unsigned __int16 *v19; // r9
  signed int v20; // edi
  int v21; // ecx
  LONG *p_y; // r12
  int *v23; // rax
  int v24; // esi
  __int64 v25; // rax
  unsigned __int16 *v26; // r14
  unsigned __int64 v27; // rdx
  struct _GLYPHPOS *v28; // r15
  __int64 v29; // r8
  _DWORD *v30; // rcx
  struct GPRUN *Run; // r13
  int *v32; // r8
  int v33; // edi
  __int64 v34; // rax
  __int64 v35; // rbp
  struct _GLYPHDATA **v36; // rdx
  struct _GLYPHDATA *v37; // rdi
  int v38; // ebp
  __int64 v39; // rax
  unsigned int v40; // r8d
  signed int v41; // ebp
  int v42; // r9d
  int *i; // r11
  _DWORD *v44; // rdx
  int v45; // eax
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // ecx
  struct XDCOBJ *v49; // rax
  RFONTOBJ *v50; // r8
  __int64 v51; // rdx
  __int64 result; // rax
  int v53; // ecx
  int v54; // edx
  int v55; // edx
  int v56; // r9d
  RFONTOBJ *v57; // rbp
  __int64 v58; // rdi
  __m128i v59; // xmm1
  unsigned int v60; // edi
  int v61; // r8d
  __int64 v62; // rcx
  unsigned int v63; // r8d
  int v64; // edx
  int v65; // eax
  unsigned int v66; // edi
  int v67; // [rsp+40h] [rbp-78h]
  int v68; // [rsp+44h] [rbp-74h]
  unsigned __int16 *v69; // [rsp+50h] [rbp-68h]
  struct _GLYPHPOS *v70; // [rsp+58h] [rbp-60h]
  unsigned __int16 *v71; // [rsp+60h] [rbp-58h]
  POINTL *p_ptl; // [rsp+68h] [rbp-50h]
  int v73; // [rsp+C0h] [rbp+8h] BYREF
  struct XDCOBJ *v74; // [rsp+C8h] [rbp+10h]
  RFONTOBJ *v75; // [rsp+D0h] [rbp+18h]
  int v76; // [rsp+D8h] [rbp+20h]

  v75 = a3;
  v74 = a2;
  v10 = a6;
  v12 = a7;
  v14 = a1[1];
  v16 = a2;
  v68 = 0;
  if ( a7 | a6 )
  {
    v59 = (__m128i)a9;
    v60 = v14 | *(_DWORD *)(*(_QWORD *)a3 + 260LL) & 0x40 | 2;
    a1[1] = v60;
    if ( v10 )
    {
      v73 = 0;
      bFToL(v14, &v73, 0LL);
      v61 = v73;
      a1[29] = v73;
      if ( v61 > 0 )
        a1[1] = v60 | 0x800;
    }
    if ( (unsigned __int8)bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v59), v12, a8, a1 + 30) )
    {
      v62 = *(_QWORD *)a3;
      v63 = a1[29];
      v64 = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
      if ( (int)(a1[30] + v63 + v64) < 0 )
      {
        a1[30] = -(v63 + v64);
        v62 = *(_QWORD *)a3;
      }
      v65 = *(_DWORD *)(v62 + 452);
      a1[1] |= 0x1000u;
      v68 = v65;
    }
    v16 = v74;
  }
  else
  {
    a1[1] = v14 | *(_DWORD *)(*(_QWORD *)a3 + 260LL) & 0x71 | 2;
  }
  v17 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v18 = a4 + 8;
  v19 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v20 = 0;
  v21 = (a5 + 8) >> 4;
  v17->ptl.x = v18 >> 4;
  p_y = &v17->ptl.y;
  v23 = a10;
  v24 = 0;
  v70 = v17;
  v69 = v19;
  v76 = v18;
  v67 = v21;
  p_ptl = &v17->ptl;
  v17->ptl.y = v21;
  if ( v23 )
  {
    v38 = *v23;
LABEL_16:
    if ( v38 )
    {
LABEL_17:
      v39 = *((_QWORD *)a1 + 8);
      a1[58] |= 2u;
      *((_QWORD *)a1 + 4) = v39;
    }
  }
  else
  {
    v25 = *(_QWORD *)a3;
    v26 = v19;
    v27 = *a1;
    v28 = v17;
    a7 = *a1;
    if ( !*(_QWORD *)(v25 + 472) )
    {
      result = RFONTOBJ::bAllocateCache(a3, (struct RFONTOBJ *)v27);
      if ( !(_DWORD)result )
        return result;
      v27 = a7;
      v19 = v26;
      v16 = v74;
      v17 = v28;
    }
    v29 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 88LL) + 1816LL) & 0x40000000) == 0 || *(_DWORD *)(v29 + 72) != 1 )
    {
      v30 = *(_DWORD **)(v29 + 472);
      a6 = 1;
      if ( *v30 )
      {
        Run = (struct GPRUN *)(v30 + 4);
        v71 = &v19[(unsigned int)v27];
        if ( v19 < v71 )
        {
          v32 = v30 + 5;
          a10 = v30 + 5;
          while ( 1 )
          {
            v33 = *v26;
            v34 = (unsigned int)(v33 - *(_DWORD *)Run);
            if ( (unsigned int)v34 >= *v32 )
            {
              v57 = v75;
              Run = RFONTOBJ::gprunFindRun(v75, v33);
              v58 = (unsigned int)(v33 - *(_DWORD *)Run);
              a10 = (int *)((char *)Run + 4);
              if ( (unsigned int)v58 >= *((_DWORD *)Run + 1) )
              {
                result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(v57, v74, (struct ESTROBJ *)a1, v26, v69, a7, &a6, 1);
                v37 = (struct _GLYPHDATA *)result;
                if ( !result )
                  return result;
                goto LABEL_13;
              }
              v35 = 8 * v58;
            }
            else
            {
              v35 = 8 * v34;
            }
            _mm_lfence();
            v36 = (struct _GLYPHDATA **)(v35 + *((_QWORD *)Run + 1));
            v37 = *v36;
            if ( !*v36 )
            {
              result = RFONTOBJ::bInsertMetricsPlus(v75, v36, *v26);
              if ( !(_DWORD)result )
                return result;
              v37 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + v35);
            }
LABEL_13:
            v38 = a6;
            if ( !v37->gdf.pgb
              && a6
              && *(_DWORD *)(*(_QWORD *)v75 + 72LL)
              && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v75, v37, v26 == v69) )
            {
              v38 = 0;
              a6 = 0;
            }
            ++v26;
            v32 = a10;
            v28->hg = v37->hg;
            v28->pgdf = &v37->gdf;
            ++v28;
            if ( v26 >= v71 )
            {
              v20 = 0;
              goto LABEL_16;
            }
          }
        }
      }
      else if ( (_DWORD)v27 )
      {
        v66 = a7;
        do
        {
          v28->hg = *(_DWORD *)(*(_QWORD *)a3 + 448LL);
          v28->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3, (struct RFONTOBJ *)v27);
          ++v28;
          --v66;
        }
        while ( v66 );
        v20 = 0;
      }
      goto LABEL_17;
    }
    result = RFONTOBJ::bGetGlyphMetrics(a3, (struct _FONTFILEVIEW *)v27, v17, v19, v16, (struct ESTROBJ *)a1);
    if ( !(_DWORD)result )
      return result;
  }
  if ( (a1[1] & 0x30) != 0x30 || (v54 = a1[29], v54 < 0) || a1[30] )
  {
    v40 = *a1;
    v41 = 0;
    v42 = v76;
    for ( i = (int *)p_ptl; ; *i = (v24 + v42) >> 4 )
    {
      v44 = (_DWORD *)*((_QWORD *)i - 1);
      v45 = v44[3];
      v46 = v24 + v44[4];
      if ( v46 >= v41 )
        v46 = v41;
      v41 = v46;
      v47 = v24 + v44[5];
      if ( v47 <= v20 )
        v47 = v20;
      v24 += v45;
      v20 = v47;
      v48 = a1[29];
      if ( v48 && (int)(v48 + v45) > 0 )
        v24 += v48;
      if ( *(i - 4) == v68 )
        v24 += a1[30];
      if ( !--v40 )
        break;
      i += 6;
      i[1] = v67;
    }
    if ( v24 <= v20 )
      goto LABEL_30;
  }
  else
  {
    v24 = v54 + HIDWORD(v70->pgdf[1].ppo);
    v55 = *a1 - 1;
    if ( *a1 != 1 )
    {
      v56 = v76;
      do
      {
        p_y[6] = v67;
        p_y += 6;
        *(p_y - 1) = (v24 + v56) >> 4;
        v24 += a1[29] + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
        --v55;
      }
      while ( v55 );
    }
    v41 = 0;
  }
  v20 = v24;
LABEL_30:
  v49 = v74;
  v50 = v75;
  a1[28] = v24;
  a1[20] = v24;
  a1[21] = 0;
  a1[24] = v41;
  a1[26] = v20;
  v51 = *(_QWORD *)v50;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49 + 80LL) + 352LL) & 0x40) != 0 )
  {
    a1[25] = -*(_DWORD *)(v51 + 304);
    result = *(_QWORD *)v50;
    v53 = -*(_DWORD *)(*(_QWORD *)v50 + 300LL);
  }
  else
  {
    a1[25] = *(_DWORD *)(v51 + 300);
    result = *(_QWORD *)v50;
    v53 = *(_DWORD *)(*(_QWORD *)v50 + 304LL);
  }
  a1[27] = v53;
  a1[58] |= 4u;
  return result;
}
