/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C00B3C40
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00B3110 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008FFE0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C0090FA8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0094F68 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0098C94 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C009CD2C (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00E44F8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0152CD0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct RFONTOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  RFONTOBJ *v7; // rbp
  struct _GLYPHPOS *v8; // rbx
  struct ESTROBJ *v9; // r13
  unsigned __int16 *v10; // r14
  int v11; // xmm6_4
  int v12; // r10d
  __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  __int64 v15; // r15
  struct _GLYPHPOS *v16; // rsi
  __int64 v17; // r8
  _DWORD *v18; // r12
  unsigned __int16 *v19; // r15
  struct GPRUN *v20; // rbp
  _DWORD *v21; // r12
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  struct _GLYPHDATA **v26; // rdx
  struct _GLYPHDATA *v27; // rbx
  __int64 v28; // rax
  int v29; // r14d
  int v30; // r11d
  int v31; // edi
  LONG *p_y; // rbx
  int v33; // r12d
  int v34; // esi
  __int64 v35; // r8
  int v36; // r15d
  _DWORD *v37; // rbp
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 result; // rax
  int v41; // ecx
  int v42; // r9d
  _BOOL8 v43; // r13
  _DWORD *v44; // r10
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // edx
  __int64 v49; // r8
  __int64 v50; // r8
  struct GPRUN *Run; // rax
  __int64 v52; // rbx
  int v53; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+44h] [rbp-74h]
  _BOOL8 v55; // [rsp+48h] [rbp-70h]
  unsigned __int16 *v56; // [rsp+50h] [rbp-68h]
  struct _GLYPHPOS *v57; // [rsp+58h] [rbp-60h]
  struct XDCOBJ *v59; // [rsp+C8h] [rbp+10h]
  int v62; // [rsp+D8h] [rbp+20h]

  v59 = a2;
  v7 = a3;
  v9 = (struct ESTROBJ *)a1;
  v10 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v11 = a7;
  v12 = *(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x40 | 2;
  v57 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v8 = v57;
  a1[1] |= v12;
  v56 = v10;
  v55 = *(float *)&v11 == 16.0;
  v13 = *(_QWORD *)a3;
  v14 = v10;
  v15 = *a1;
  v16 = v8;
  v54 = *a1;
  if ( !*(_QWORD *)(v13 + 480) )
  {
    result = RFONTOBJ::bAllocateCache(a3, a2);
    if ( !(_DWORD)result )
      return result;
    a2 = v59;
  }
  v17 = *(_QWORD *)v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 104LL) + 1824LL) & 0x40000000) != 0 && *(_DWORD *)(v17 + 88) == 1 )
  {
    result = RFONTOBJ::bGetGlyphMetrics(v7, (struct RFONTOBJ *)(unsigned int)v15, v8, v10, a2, v9);
    if ( (_DWORD)result )
      goto LABEL_14;
    return result;
  }
  v18 = *(_DWORD **)(v17 + 480);
  a7 = 1;
  if ( !*v18 )
  {
    for ( ; (_DWORD)v15; LODWORD(v15) = v15 - 1 )
    {
      v16->hg = *(_DWORD *)(*(_QWORD *)v7 + 460LL);
      v16->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v7);
      ++v16;
    }
    goto LABEL_13;
  }
  v19 = &v10[v15];
  v20 = (struct GPRUN *)(v18 + 4);
  if ( v10 >= v19 )
  {
    v7 = a3;
LABEL_13:
    v28 = *((_QWORD *)v9 + 8);
    *((_DWORD *)v9 + 58) |= 2u;
    *((_QWORD *)v9 + 4) = v28;
    goto LABEL_14;
  }
  v21 = v18 + 5;
  do
  {
    v22 = *v14;
    v23 = (unsigned int)(v22 - *(_DWORD *)v20);
    if ( (unsigned int)v23 < *v21 )
    {
      _mm_lfence();
      v24 = *((_QWORD *)v20 + 1);
      v25 = 8 * v23;
LABEL_8:
      v26 = (struct _GLYPHDATA **)(v25 + v24);
      v27 = *v26;
      if ( !*v26 )
      {
        result = RFONTOBJ::bInsertMetricsPlus(a3, v26);
        if ( !(_DWORD)result )
          return result;
        v27 = *(struct _GLYPHDATA **)(v25 + *((_QWORD *)v20 + 1));
      }
      v10 = v56;
      goto LABEL_10;
    }
    Run = RFONTOBJ::gprunFindRun(a3, v22);
    v20 = Run;
    v52 = (unsigned int)(v22 - *(_DWORD *)Run);
    v21 = (_DWORD *)((char *)Run + 4);
    if ( (unsigned int)v52 < *((_DWORD *)Run + 1) )
    {
      _mm_lfence();
      v24 = *((_QWORD *)Run + 1);
      v25 = 8 * v52;
      goto LABEL_8;
    }
    result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(a3, v59, v9, v14, v10, v54, &a7, 1);
    v27 = (struct _GLYPHDATA *)result;
    if ( !result )
      return result;
LABEL_10:
    if ( !v27->gdf.pgb
      && *(float *)&a7 != 0.0
      && *(_DWORD *)(*(_QWORD *)a3 + 88LL)
      && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v27, v14 == v10) )
    {
      *(float *)&a7 = 0.0;
    }
    ++v14;
    v16->hg = v27->hg;
    v16->pgdf = &v27->gdf;
    ++v16;
  }
  while ( v14 < v19 );
  v8 = v57;
  v7 = a3;
  if ( *(float *)&a7 != 0.0 )
    goto LABEL_13;
LABEL_14:
  v29 = 0;
  v62 = a4 + 8;
  v30 = v62;
  v8->ptl.x = v62 >> 4;
  v31 = 0;
  p_y = &v8->ptl.y;
  v33 = (a5 + 8) >> 4;
  v34 = 0;
  LODWORD(v35) = 0;
  *p_y = v33;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 276LL) & 0x10) == 0 || (*((_DWORD *)v9 + 58) & 0x1400) != 0 )
  {
    v42 = *(_DWORD *)v9;
    v43 = v55;
    v44 = a6;
    while ( 1 )
    {
      v45 = *(_QWORD *)(p_y - 3);
      ++v44;
      v46 = v35 + *(_DWORD *)(v45 + 16);
      if ( v46 >= v29 )
        v46 = v29;
      v29 = v46;
      v47 = v35 + *(_DWORD *)(v45 + 20);
      if ( v47 <= v31 )
        v47 = v31;
      v34 += *(v44 - 1);
      v31 = v47;
      if ( v43 )
      {
        LODWORD(v35) = 16 * v34;
      }
      else
      {
        LODWORD(v35) = 0;
        *(float *)&a7 = (float)v34 * *(float *)&v11;
        v48 = (unsigned __int8)(a7 >> 23);
        if ( v48 <= 0x9E )
        {
          v49 = a7 & 0x7FFFFF | 0x800000LL;
          v50 = v48 < 0x76 ? v49 >> (118 - (unsigned __int8)v48) : v49 << ((unsigned __int8)v48 - 118);
          v35 = (v50 + 0x80000000LL) >> 32;
          if ( a7 < 0 )
            LODWORD(v35) = -(int)v35;
        }
        v30 = v62;
      }
      if ( !--v42 )
        break;
      p_y += 6;
      *p_y = v33;
      *(p_y - 1) = ((int)v35 + v30) >> 4;
    }
    v9 = (struct ESTROBJ *)a1;
  }
  else
  {
    v36 = *(_DWORD *)v9;
    v37 = a6;
    while ( 1 )
    {
      if ( (int)v35 < v29 )
        v29 = v35;
      v38 = (unsigned int)(v35 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL));
      if ( (int)v38 > v31 )
        v31 = v35 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      v34 += *v37++;
      if ( v55 )
      {
        LODWORD(v35) = 16 * v34;
      }
      else
      {
        v53 = 0;
        bFToL(v38, &v53, 0LL);
        v30 = v62;
        LODWORD(v35) = v53;
      }
      if ( !--v36 )
        break;
      p_y += 6;
      *p_y = v33;
      *(p_y - 1) = ((int)v35 + v30) >> 4;
    }
    v7 = a3;
  }
  *((_DWORD *)v9 + 20) = v35;
  *((_DWORD *)v9 + 21) = 0;
  if ( (int)v35 <= v31 )
    LODWORD(v35) = v31;
  *((_DWORD *)v9 + 26) = v35;
  *((_DWORD *)v9 + 24) = v29;
  v39 = *(_QWORD *)v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *((_DWORD *)v9 + 25) = -*(_DWORD *)(v39 + 320);
    result = *(_QWORD *)v7;
    v41 = -*(_DWORD *)(*(_QWORD *)v7 + 316LL);
  }
  else
  {
    *((_DWORD *)v9 + 25) = *(_DWORD *)(v39 + 316);
    result = *(_QWORD *)v7;
    v41 = *(_DWORD *)(*(_QWORD *)v7 + 320LL);
  }
  *((_DWORD *)v9 + 27) = v41;
  *((_DWORD *)v9 + 58) |= 4u;
  return result;
}
