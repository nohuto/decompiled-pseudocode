/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0084AD4
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00E0EA0 (NtGdiGetWidthTable.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00855A0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0085928 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00859E4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0085C44 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0086598 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  unsigned __int16 *v8; // r10
  unsigned int v9; // r12d
  unsigned __int16 *v10; // r11
  __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned __int16 *v13; // rdi
  unsigned int v14; // r15d
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // r13
  struct _GLYPHPOS *v19; // rax
  __int64 (__fastcall *v20)(struct _GLYPHPOS *, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 j; // r13
  unsigned int v28; // eax
  unsigned __int16 *v29; // rsi
  __int64 v30; // rcx
  _DWORD *v31; // rax
  struct GPRUN *v32; // r15
  unsigned __int16 *v33; // r10
  unsigned __int16 v34; // r9
  __int64 v35; // rdi
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  struct _GLYPHPOS *v38; // rcx
  unsigned int v40; // edx
  __int16 v41; // r9
  unsigned __int16 *v42; // r13
  unsigned int *v43; // r8
  struct _GLYPHPOS *v44; // rdi
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // ax
  __int64 v47; // rcx
  unsigned __int16 *v48; // rdi
  unsigned __int16 v49; // [rsp+40h] [rbp-C0h]
  __int16 v50; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  unsigned int v53; // [rsp+4Ch] [rbp-B4h]
  int v54; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 *v55; // [rsp+50h] [rbp-B0h]
  unsigned int *v56; // [rsp+50h] [rbp-B0h]
  int i; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int16 *v59; // [rsp+60h] [rbp-A0h]
  struct _GLYPHPOS *v60; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v61; // [rsp+70h] [rbp-90h]
  unsigned int v62; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v63; // [rsp+80h] [rbp-80h]
  struct XDCOBJ *v64; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v65; // [rsp+90h] [rbp-70h]
  struct _GLYPHPOS v66; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  unsigned int v71; // [rsp+100h] [rbp+0h]
  char v72; // [rsp+104h] [rbp+4h]
  unsigned int v73[72]; // [rsp+110h] [rbp+10h] BYREF

  v6 = *(_QWORD *)this;
  v8 = a6;
  v9 = 1;
  v64 = a2;
  v10 = a4;
  LODWORD(a2) = 1;
  v65 = a4;
  v11 = *(_QWORD *)(v6 + 80);
  v62 = a3;
  v63 = a6;
  v52 = 1;
  if ( !*(_QWORD *)(v11 + 3104) )
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
    goto LABEL_18;
  }
  v12 = a5;
  v13 = a4;
  v61 = a6;
  v14 = a5;
  v59 = a4;
  if ( a3 < a5 )
    v14 = a3;
  v15 = a5;
  v53 = a5;
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
      RFONTOBJ::vXlatGlyphArray(this, v13, v16, v73, v17, 0);
      v18 = *(_QWORD *)this;
      i = 0;
      v19 = *(struct _GLYPHPOS **)(*(_QWORD *)this + 96LL);
      v67 = *(_QWORD *)(*(_QWORD *)this + 112LL);
      v60 = v19;
      v20 = *(__int64 (__fastcall **)(struct _GLYPHPOS *, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(*(_QWORD *)(v67 + 88) + 3104LL);
      if ( gpepCSRSS )
      {
        ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)&v67);
        v21 = v20(v60, v18, 1LL, v73, v61, v16);
        v22 = 0LL;
        for ( i = v21; (unsigned int)v22 < v71; v22 = (unsigned int)(v22 + 1) )
          EngUnmapFontFileFD(*(_QWORD *)(v70 + 8 * v22));
        if ( v72 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsDetachSiloFromCurrentThread(v69);
        }
      }
      v23 = *(_QWORD *)this;
      v24 = *(_DWORD *)(*(_QWORD *)this + 696LL);
      if ( i == -1 )
        break;
      if ( (v24 & 0x40) != 0 )
      {
        v40 = 0;
        *(_DWORD *)(v23 + 696) = v24 & 0xFFFFFFBF;
        v51 = 0;
        v41 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 32LL) + 116LL);
        v50 = v41;
        if ( v16 )
        {
          v42 = v61;
          v43 = v73;
          v44 = (struct _GLYPHPOS *)((char *)v59 - (char *)v61);
          v56 = v73;
          v60 = (struct _GLYPHPOS *)((char *)v59 - (char *)v61);
          while ( 1 )
          {
            if ( *v43 != *(_DWORD *)(*(_QWORD *)this + 448LL) )
              goto LABEL_48;
            v45 = *(unsigned __int16 *)((char *)v42 + (_QWORD)v44);
            if ( v45 == v41 )
              goto LABEL_48;
            if ( v58 == 2 )
              goto LABEL_52;
            if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v45) )
            {
              if ( !*(_DWORD *)(*(_QWORD *)this + 692LL) )
                break;
              v46 = *(unsigned __int16 *)((char *)v42 + (_QWORD)v44);
              if ( v46 < gqlTTSystem )
                break;
              if ( v46 > (unsigned __int16)word_1C032AE7A )
                break;
              v44 = v60;
              if ( ((0x80000000 >> ((v46 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C032AE80
                                                                           + 4LL * ((v46 - gqlTTSystem) / 32))) == 0 )
                break;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v66, &v59[v51], v64, 0LL) )
              return 0xFFFFFFFFLL;
            v40 = v51;
            v43 = v56;
            *v42 = WORD2(v66.pgdf[1].ppo);
LABEL_48:
            v41 = v50;
            ++v40;
            ++v43;
            v51 = v40;
            ++v42;
            v56 = v43;
            if ( v40 >= v16 )
              goto LABEL_14;
          }
          v43 = v56;
          v40 = v51;
LABEL_52:
          v52 = 0;
          *v42 = -1;
          goto LABEL_48;
        }
      }
LABEL_14:
      a2 = (struct XDCOBJ *)(i & (unsigned int)v52);
      v15 = v53 - v16;
      v25 = 2LL * v16;
      v52 &= i;
      v61 = (unsigned __int16 *)((char *)v61 + v25);
      v13 = &v59[(unsigned __int64)v25 / 2];
      v59 = (unsigned __int16 *)((char *)v59 + v25);
      v26 = v14 - v16;
      v53 -= v16;
      if ( !v14 )
        v26 = 0;
      v14 = v26;
      if ( !v15 )
      {
        a3 = v62;
        v8 = v63;
        v10 = v65;
LABEL_18:
        if ( !(_DWORD)a2 )
        {
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            v28 = v12;
            if ( a3 < v12 )
              v28 = a3;
            if ( (unsigned int)j >= v28 )
              break;
            if ( v8[j] == 0xFFFF )
            {
              v60 = &v66;
              v29 = &v10[j];
              if ( !*(_QWORD *)(*(_QWORD *)this + 472LL) )
              {
                if ( !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
                  return 0xFFFFFFFFLL;
                v8 = v63;
              }
              v30 = *(_QWORD *)this;
              v61 = v29;
              v31 = *(_DWORD **)(v30 + 472);
              if ( *v31 )
              {
                v55 = v29 + 1;
                v32 = (struct GPRUN *)(v31 + 4);
                if ( v29 < v29 + 1 )
                {
                  v33 = (unsigned __int16 *)(v31 + 5);
                  v59 = (unsigned __int16 *)(v31 + 5);
                  while ( 1 )
                  {
                    v49 = *v29;
                    v34 = *v29;
                    v35 = (unsigned int)*v29 - *(_DWORD *)v32;
                    v54 = *v29;
                    if ( (unsigned int)v35 < *(_DWORD *)v33 )
                    {
                      _mm_lfence();
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v35);
                    }
                    else
                    {
                      Run = RFONTOBJ::gprunFindRun(this, v49);
                      v32 = Run;
                      v35 = (unsigned int)(v54 - *(_DWORD *)Run);
                      v59 = (unsigned __int16 *)((char *)Run + 4);
                      if ( (unsigned int)v35 >= *((_DWORD *)Run + 1) )
                      {
                        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v64, 0LL, v29, v61, 1u, &v58, 0);
                        if ( !LinkMetricsPlus )
                          return 0xFFFFFFFFLL;
                      }
                      else
                      {
                        _mm_lfence();
                        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v35);
                      }
                      v34 = v49;
                    }
                    if ( !LinkMetricsPlus )
                    {
                      if ( !(unsigned int)RFONTOBJ::bInsertMetrics(
                                            this,
                                            (struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v35),
                                            v34) )
                        return 0xFFFFFFFFLL;
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v35);
                    }
                    v38 = v60;
                    ++v29;
                    v33 = v59;
                    v60->hg = LinkMetricsPlus->hg;
                    v38->pgdf = &LinkMetricsPlus->gdf;
                    v60 = v38 + 1;
                    if ( v29 >= v55 )
                      goto LABEL_34;
                  }
                }
              }
              else
              {
                v66.pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
LABEL_34:
                v8 = v63;
              }
              a3 = v62;
              v8[j] = WORD2(v66.pgdf[1].ppo);
            }
            v10 = v65;
          }
          LODWORD(a2) = v52;
        }
        goto LABEL_41;
      }
    }
    *(_DWORD *)(v23 + 696) = v24 & 0xFFFFFFBF;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_41:
    if ( v12 == a3 )
    {
      if ( (_DWORD)a2 == -1 )
        return (unsigned int)-1;
      return v9;
    }
    else
    {
      return (unsigned int)a2;
    }
  }
}
