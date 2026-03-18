/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0053010
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00523D0 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C004B5E0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C004D128 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C004D83C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C004F768 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00534CC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00537CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0053880 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0077458 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0080BA0 (EngUnmapFontFileFD.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0151F10 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int16 *v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned __int16 *v12; // r9
  unsigned int v13; // r15d
  const unsigned __int16 *v14; // rdx
  unsigned int v15; // r13d
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  __int64 i; // r12
  unsigned int v28; // eax
  unsigned __int16 *v29; // rbx
  struct _GLYPHPOS *v30; // r13
  __int64 v31; // rcx
  _DWORD *v32; // rax
  struct GPRUN *v33; // rsi
  _DWORD *v34; // r10
  __int64 v35; // rdi
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  struct _GLYPHDATA *pgdf; // rdx
  unsigned int v39; // edx
  __int16 v40; // r9
  _WORD *v41; // rsi
  unsigned int *v42; // r8
  char *v43; // rdi
  unsigned __int16 v44; // ax
  __int16 v45; // ax
  ULONG_PTR *v47; // rdi
  __int64 v48; // rsi
  unsigned __int16 v49; // ax
  __int64 v50; // rcx
  unsigned __int16 *v51; // rdi
  __int16 v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h]
  unsigned int v55; // [rsp+4Ch] [rbp-B4h]
  int v56; // [rsp+4Ch] [rbp-B4h]
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v58; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v59; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v60; // [rsp+68h] [rbp-98h]
  unsigned int v61; // [rsp+70h] [rbp-90h]
  unsigned int v62; // [rsp+74h] [rbp-8Ch]
  char *v63; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v64; // [rsp+80h] [rbp-80h]
  GLYPHDEF *p_gdf; // [rsp+88h] [rbp-78h]
  struct XDCOBJ *v66; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v67; // [rsp+98h] [rbp-68h]
  struct _GLYPHPOS v68; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR *v69; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v70; // [rsp+C0h] [rbp-40h]
  __int64 v71[3]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v72[72]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = *(_QWORD *)this;
  v7 = 1;
  v66 = a2;
  v67 = a4;
  v9 = a4;
  v62 = a3;
  v10 = *(_QWORD *)(v6 + 96);
  v11 = 1;
  v12 = a6;
  v64 = a6;
  v54 = 1;
  p_gdf = 0LL;
  memset(&v68, 0, sizeof(v68));
  if ( !*(_QWORD *)(v10 + 3112) )
  {
    v13 = a5;
    if ( a5 )
    {
      v50 = a5;
      v51 = a6;
      while ( v50 )
      {
        *v51++ = -1;
        --v50;
      }
    }
    v11 = 0;
    v54 = 0;
LABEL_15:
    if ( v11 )
      goto LABEL_48;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v28 = v13;
      if ( a3 < v13 )
        v28 = a3;
      if ( (unsigned int)i >= v28 )
      {
        v11 = v54;
        goto LABEL_48;
      }
      if ( v12[i] == 0xFFFF )
        break;
LABEL_33:
      v9 = v67;
    }
    v29 = &v9[i];
    v30 = &v68;
    if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) )
    {
      if ( !(unsigned int)RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)0xFFFF) )
        return 0xFFFFFFFFLL;
      v12 = v64;
    }
    v31 = *(_QWORD *)this;
    v60 = v29;
    v32 = *(_DWORD **)(v31 + 480);
    if ( *v32 )
    {
      v59 = v29 + 1;
      v33 = (struct GPRUN *)(v32 + 4);
      if ( v29 >= v29 + 1 )
      {
        pgdf = (struct _GLYPHDATA *)p_gdf;
        goto LABEL_32;
      }
      v34 = v32 + 5;
      v63 = (char *)(v32 + 5);
      do
      {
        v35 = (unsigned int)*v29 - *(_DWORD *)v33;
        v56 = *v29;
        if ( (unsigned int)v35 < *v34 )
        {
          _mm_lfence();
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v33 + 1) + 8 * v35);
        }
        else
        {
          Run = RFONTOBJ::gprunFindRun(this, *v29);
          v33 = Run;
          v35 = (unsigned int)(v56 - *(_DWORD *)Run);
          v63 = (char *)Run + 4;
          if ( (unsigned int)v35 >= *((_DWORD *)Run + 1) )
          {
            LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v66, 0LL, v29, v60, 1u, &v57, 0);
            if ( !LinkMetricsPlus )
              return 0xFFFFFFFFLL;
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v35);
          }
        }
        if ( !LinkMetricsPlus )
        {
          if ( !(unsigned int)RFONTOBJ::bInsertMetrics(this, (struct _GLYPHDATA **)(*((_QWORD *)v33 + 1) + 8 * v35)) )
            return 0xFFFFFFFFLL;
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v33 + 1) + 8 * v35);
        }
        ++v29;
        v34 = v63;
        v30->hg = LinkMetricsPlus->hg;
        v30->pgdf = &LinkMetricsPlus->gdf;
        ++v30;
      }
      while ( v29 < v59 );
      pgdf = (struct _GLYPHDATA *)v68.pgdf;
      p_gdf = v68.pgdf;
    }
    else
    {
      pgdf = RFONTOBJ::pgdDefault(this);
      p_gdf = &pgdf->gdf;
      v68.pgdf = &pgdf->gdf;
    }
    v12 = v64;
LABEL_32:
    v7 = 1;
    a3 = v62;
    v12[i] = pgdf->fxD;
    goto LABEL_33;
  }
  v13 = a5;
  v14 = v9;
  v59 = a6;
  v15 = a5;
  v60 = v9;
  if ( a3 < a5 )
    v15 = a3;
  v16 = a5;
  v55 = a5;
  if ( !a5 )
  {
LABEL_48:
    if ( v13 != a3 )
      return v11;
    if ( v11 == -1 )
      return (unsigned int)-1;
    return v7;
  }
  while ( 1 )
  {
    v17 = 70;
    if ( v15 )
    {
      if ( v15 < 0x46 )
        v17 = v15;
      v18 = 0;
    }
    else
    {
      v18 = 2;
      if ( v16 < 0x46 )
        v17 = v16;
    }
    v61 = v18;
    RFONTOBJ::vXlatGlyphArray(this, v14, v17, v72, v18, 0);
    v19 = *(_QWORD *)this;
    v20 = *(_QWORD *)(*(_QWORD *)this + 112LL);
    v71[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
    v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(*(_QWORD *)(v71[0] + 88) + 3112LL);
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v69, (struct PFFOBJ *)v71);
    v22 = v21(v20, v19, 1LL, v72, v59, v17);
    v7 = 1;
    v57 = v22;
    if ( v70 )
    {
      v47 = v69;
      v48 = v70;
      do
      {
        EngUnmapFontFileFD(*v47++);
        --v48;
      }
      while ( v48 );
    }
    v23 = *(_QWORD *)this;
    v24 = *(_DWORD *)(*(_QWORD *)this + 712LL);
    if ( v57 == -1 )
      break;
    if ( (v24 & 0x40) != 0 )
    {
      v39 = 0;
      *(_DWORD *)(v23 + 712) = v24 & 0xFFFFFFBF;
      v53 = 0;
      v40 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 116LL);
      v52 = v40;
      if ( v17 )
      {
        v41 = v59;
        v42 = v72;
        v43 = (char *)((char *)v60 - (char *)v59);
        v58 = v72;
        v63 = (char *)((char *)v60 - (char *)v59);
        while ( 2 )
        {
          if ( *v42 != *(_DWORD *)(*(_QWORD *)this + 460LL) )
            goto LABEL_37;
          v44 = *(_WORD *)((char *)v41 + (_QWORD)v43);
          if ( v44 == v40 )
            goto LABEL_37;
          if ( v61 == 2 )
          {
LABEL_41:
            v54 = 0;
            v45 = -1;
          }
          else
          {
            if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v44) )
            {
              if ( !*(_DWORD *)(*(_QWORD *)this + 708LL)
                || (v49 = *(_WORD *)((char *)v41 + (_QWORD)v43), v49 < gqlTTSystem)
                || v49 > (unsigned __int16)word_1C032E042
                || (v43 = v63,
                    ((0x80000000 >> ((v49 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C032E048
                                                                            + 4LL * ((v49 - gqlTTSystem) / 32))) == 0) )
              {
                v42 = v58;
                v39 = v53;
                goto LABEL_41;
              }
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v68, &v60[v53], v66, 0LL) )
              return 0xFFFFFFFFLL;
            v39 = v53;
            v42 = v58;
            p_gdf = v68.pgdf;
            v45 = WORD2(v68.pgdf[1].ppo);
          }
          *v41 = v45;
LABEL_37:
          v40 = v52;
          ++v39;
          ++v42;
          v53 = v39;
          ++v41;
          v58 = v42;
          if ( v39 >= v17 )
            break;
          continue;
        }
      }
    }
    v11 = v57 & v54;
    v16 = v55 - v17;
    v25 = 2LL * v17;
    v54 &= v57;
    v59 = (unsigned __int16 *)((char *)v59 + v25);
    v14 = &v60[v25 / 2];
    v60 = (unsigned __int16 *)((char *)v60 + v25);
    v26 = v15 - v17;
    v55 -= v17;
    if ( !v15 )
      v26 = 0;
    v15 = v26;
    if ( !v16 )
    {
      a3 = v62;
      v12 = v64;
      v9 = v67;
      goto LABEL_15;
    }
  }
  *(_DWORD *)(v23 + 712) = v24 & 0xFFFFFFBF;
  return 0xFFFFFFFFLL;
}
