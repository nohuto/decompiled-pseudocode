/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008350C
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00827A0 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C007FC6C (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C0082628 (xInsertMetricsRFONTOBJ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0083968 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C008415C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0084210 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00C4CF4 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     EngUnmapFontFileFD @ 0x1C011F2C0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
  unsigned __int16 *v8; // r10
  unsigned __int16 *v10; // r11
  __int64 v11; // rcx
  unsigned int v12; // r15d
  const unsigned __int16 *v13; // rdi
  unsigned int v14; // r13d
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, __int64, unsigned int *, char *, unsigned int); // rdi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  __int64 i; // r12
  unsigned int v27; // eax
  unsigned __int16 *v28; // rbx
  struct _GLYPHPOS *v29; // r13
  __int64 v30; // rcx
  _DWORD *v31; // rax
  struct GPRUN *v32; // rsi
  _DWORD *v33; // r9
  __int64 v34; // rdi
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  unsigned int v37; // edx
  __int16 v38; // r9
  char *v39; // rsi
  unsigned int *v40; // r8
  signed __int64 v41; // rdi
  unsigned __int16 v42; // ax
  ULONG_PTR *v44; // rdi
  __int64 v45; // rsi
  unsigned __int16 v46; // ax
  __int64 v47; // rcx
  unsigned __int16 *v48; // rdi
  unsigned __int16 v49; // [rsp+40h] [rbp-C0h]
  __int16 v50; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v53; // [rsp+50h] [rbp-B0h]
  unsigned int *v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h] BYREF
  char *v56; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v57; // [rsp+68h] [rbp-98h]
  unsigned int v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+74h] [rbp-8Ch]
  unsigned int v60; // [rsp+78h] [rbp-88h]
  signed __int64 v61; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v62; // [rsp+88h] [rbp-78h]
  struct XDCOBJ *v63; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v64; // [rsp+98h] [rbp-68h]
  struct _GLYPHPOS v65; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR *v66; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v67; // [rsp+C0h] [rbp-40h]
  __int64 v68[3]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v69[72]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = *(_QWORD *)this;
  v7 = 1;
  v8 = a6;
  v63 = a2;
  v10 = a4;
  v64 = a4;
  LODWORD(a2) = 1;
  v11 = *(_QWORD *)(v6 + 96);
  v60 = a3;
  v62 = a6;
  v52 = 1;
  if ( !*(_QWORD *)(v11 + 3112) )
  {
    v12 = a5;
    if ( a5 )
    {
      v47 = a5;
      v48 = a6;
      while ( v47 )
      {
        *v48++ = -1;
        --v47;
      }
    }
    a2 = 0LL;
    v52 = 0;
    goto LABEL_15;
  }
  v12 = a5;
  v13 = a4;
  v56 = (char *)a6;
  v14 = a5;
  v57 = a4;
  if ( a3 < a5 )
    v14 = a3;
  v15 = a5;
  v55 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      v16 = 70;
      if ( v14 )
      {
        if ( v14 < 0x46 )
          v16 = v14;
        v17 = 0;
      }
      else
      {
        v17 = 2;
        if ( v15 < 0x46 )
          v16 = v15;
      }
      v58 = v17;
      RFONTOBJ::vXlatGlyphArray(this, v13, v16, v69, v17, 0);
      v18 = *(_QWORD *)this;
      v19 = *(_QWORD *)(*(_QWORD *)this + 112LL);
      v68[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
      v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, char *, unsigned int))(*(_QWORD *)(v68[0] + 88) + 3112LL);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v66, (struct PFFOBJ *)v68);
      v21 = v20(v19, v18, 1LL, v69, v56, v16);
      v7 = 1;
      v59 = v21;
      if ( v67 )
      {
        v44 = v66;
        v45 = v67;
        do
        {
          EngUnmapFontFileFD(*v44++);
          --v45;
        }
        while ( v45 );
      }
      v22 = *(_QWORD *)this;
      v23 = *(_DWORD *)(*(_QWORD *)this + 712LL);
      if ( v59 == -1 )
        break;
      if ( (v23 & 0x40) != 0 )
      {
        v37 = 0;
        *(_DWORD *)(v22 + 712) = v23 & 0xFFFFFFBF;
        v51 = 0;
        v38 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 116LL);
        v50 = v38;
        if ( v16 )
        {
          v39 = v56;
          v40 = v69;
          v41 = (char *)v57 - v56;
          v54 = v69;
          v61 = (char *)v57 - v56;
          while ( 1 )
          {
            if ( *v40 != *(_DWORD *)(*(_QWORD *)this + 460LL) )
              goto LABEL_39;
            v42 = *(_WORD *)&v39[v41];
            if ( v42 == v38 )
              goto LABEL_39;
            if ( v58 == 2 )
              goto LABEL_43;
            if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v42) )
            {
              if ( !*(_DWORD *)(*(_QWORD *)this + 708LL) )
                break;
              v46 = *(_WORD *)&v39[v41];
              if ( v46 < gqlTTSystem )
                break;
              if ( v46 > (unsigned __int16)word_1C0319AD2 )
                break;
              v41 = v61;
              if ( ((0x80000000 >> ((v46 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0319AD8
                                                                           + 4LL * ((v46 - gqlTTSystem) / 32))) == 0 )
                break;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v65, &v57[v51], v63, 0LL) )
              return 0xFFFFFFFFLL;
            v37 = v51;
            v40 = v54;
            *(_WORD *)v39 = WORD2(v65.pgdf[1].ppo);
LABEL_39:
            v38 = v50;
            ++v37;
            ++v40;
            v51 = v37;
            v39 += 2;
            v54 = v40;
            if ( v37 >= v16 )
              goto LABEL_11;
          }
          v40 = v54;
          v37 = v51;
LABEL_43:
          v52 = 0;
          *(_WORD *)v39 = -1;
          goto LABEL_39;
        }
      }
LABEL_11:
      a2 = (struct XDCOBJ *)(v59 & (unsigned int)v52);
      v15 = v55 - v16;
      v24 = 2LL * v16;
      v52 &= v59;
      v56 += v24;
      v13 = &v57[v24 / 2];
      v57 = (unsigned __int16 *)((char *)v57 + v24);
      v25 = v14 - v16;
      v55 -= v16;
      if ( !v14 )
        v25 = 0;
      v14 = v25;
      if ( !v15 )
      {
        a3 = v60;
        v8 = v62;
        v10 = v64;
LABEL_15:
        if ( !(_DWORD)a2 )
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v27 = v12;
            if ( a3 < v12 )
              v27 = a3;
            if ( (unsigned int)i >= v27 )
              break;
            if ( v8[i] == 0xFFFF )
            {
              v28 = &v10[i];
              v29 = &v65;
              if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) )
              {
                if ( !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
                  return 0xFFFFFFFFLL;
                v8 = v62;
              }
              v30 = *(_QWORD *)this;
              v57 = v28;
              v31 = *(_DWORD **)(v30 + 480);
              if ( *v31 )
              {
                v53 = v28 + 1;
                v32 = (struct GPRUN *)(v31 + 4);
                if ( v28 < v28 + 1 )
                {
                  v33 = v31 + 5;
                  v61 = (signed __int64)(v31 + 5);
                  while ( 1 )
                  {
                    v49 = *v28;
                    v34 = (unsigned int)*v28 - *(_DWORD *)v32;
                    if ( (unsigned int)v34 < *v33 )
                    {
                      _mm_lfence();
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34);
                    }
                    else
                    {
                      Run = RFONTOBJ::gprunFindRun(this, *v28);
                      v32 = Run;
                      v34 = (unsigned int)v49 - *(_DWORD *)Run;
                      v61 = (signed __int64)Run + 4;
                      if ( (unsigned int)v34 >= *((_DWORD *)Run + 1) )
                      {
                        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v63, 0LL, v28, v57, 1u, &v55, 0);
                        if ( !LinkMetricsPlus )
                          return 0xFFFFFFFFLL;
                      }
                      else
                      {
                        _mm_lfence();
                        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v34);
                      }
                    }
                    if ( !LinkMetricsPlus )
                    {
                      v56 = (char *)(*((_QWORD *)v32 + 1) + 8 * v34);
                      if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2)
                        || !(unsigned int)xInsertMetricsRFONTOBJ(this, v56, v49) )
                      {
                        return 0xFFFFFFFFLL;
                      }
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34);
                    }
                    ++v28;
                    v33 = (_DWORD *)v61;
                    v29->hg = LinkMetricsPlus->hg;
                    v29->pgdf = &LinkMetricsPlus->gdf;
                    ++v29;
                    if ( v28 >= v53 )
                      goto LABEL_30;
                  }
                }
              }
              else
              {
                v65.pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
LABEL_30:
                v8 = v62;
              }
              v7 = 1;
              a3 = v60;
              v8[i] = WORD2(v65.pgdf[1].ppo);
            }
            v10 = v64;
          }
          LODWORD(a2) = v52;
        }
        goto LABEL_48;
      }
    }
    *(_DWORD *)(v22 + 712) = v23 & 0xFFFFFFBF;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_48:
    if ( v12 == a3 )
    {
      if ( (_DWORD)a2 == -1 )
        return (unsigned int)-1;
      return v7;
    }
    else
    {
      return (unsigned int)a2;
    }
  }
}
