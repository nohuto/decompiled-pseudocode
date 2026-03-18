/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4
 * Callers:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00031C0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0084544 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00849D8 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0084AD4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0094400 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0094860 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00DFB54 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00F87A4 (GreGetCharWidthW.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00855A0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0085928 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00859E4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00BF4A4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct _FONTFILEVIEW *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  unsigned __int16 *v6; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // rcx
  struct GPRUN *v13; // r9
  _DWORD *v14; // r10
  unsigned int v15; // edi
  __int64 v16; // rbx
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  __int64 v18; // rsi
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // r13
  bool v22; // zf
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD); // rdi
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  struct _FONTFILEVIEW **v27; // r10
  struct _FONTFILEVIEW **v28; // r8
  int v29; // eax
  __int64 v30; // rbx
  int j; // edi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  struct GPRUN *Run; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 ProcessServerSilo; // rax
  unsigned int v41; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v42[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h]
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+5Ch] [rbp-A4h]
  struct GPRUN *v46; // [rsp+60h] [rbp-A0h]
  _OWORD *v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v49; // [rsp+78h] [rbp-88h]
  _DWORD *i; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 *v52; // [rsp+90h] [rbp-70h]
  struct ESTROBJ *v53; // [rsp+98h] [rbp-68h]
  struct XDCOBJ *v54; // [rsp+A0h] [rbp-60h]
  struct _FONTFILEVIEW *v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v57; // [rsp+B8h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  unsigned int v61; // [rsp+100h] [rbp+0h]
  char v62; // [rsp+104h] [rbp+4h]
  _OWORD v63[4]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v64[2]; // [rsp+150h] [rbp+50h] BYREF
  int v65; // [rsp+158h] [rbp+58h]
  void *v66[3]; // [rsp+160h] [rbp+60h] BYREF

  v6 = a4;
  v54 = a5;
  v53 = a6;
  v9 = *(_QWORD *)this;
  v10 = (unsigned int)a2;
  v49 = a4;
  v45 = (int)a2;
  if ( *(_QWORD *)(v9 + 472) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v11 = *(_QWORD *)this;
    v52 = v6;
    v12 = *(_DWORD **)(v11 + 472);
    if ( *v12 )
    {
      v57 = &v6[v10];
      v13 = (struct GPRUN *)(v12 + 4);
      v46 = (struct GPRUN *)(v12 + 4);
      if ( v6 < v57 )
      {
        v14 = v12 + 5;
        for ( i = v12 + 5; ; v14 = i )
        {
          v15 = *v6;
          v41 = v15;
          v16 = v15 - *(_DWORD *)v13;
          if ( (unsigned int)v16 >= *v14 )
          {
            Run = RFONTOBJ::gprunFindRun(this, v15);
            v13 = Run;
            v46 = Run;
            v16 = v15 - *(_DWORD *)Run;
            i = (_DWORD *)((char *)Run + 4);
            if ( (unsigned int)v16 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v54, v53, v6, v52, v10, &v51, 0);
              if ( !LinkMetricsPlus )
                return 0LL;
              v13 = v46;
            }
            else
            {
              _mm_lfence();
              LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v16);
            }
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v13 + 1) + 8 * v16);
          }
          if ( !LinkMetricsPlus )
            break;
LABEL_8:
          ++v6;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
          v49 = v6;
          if ( v6 >= v57 )
            return 1LL;
        }
        v43 = (unsigned int)v16;
        v48 = *((_QWORD *)v13 + 1);
        if ( !*(_QWORD *)(*(_QWORD *)this + 472LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
          return 0LL;
        v18 = *(_QWORD *)this;
        v19 = *(_QWORD *)(*(_QWORD *)this + 472LL);
        if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
        {
          v42[0] = v15;
          RFONTOBJ::vXlatGlyphArray(this, v42, 1u, &v44, 0, 0);
          v20 = v44;
          v18 = *(_QWORD *)this;
          v41 = v44;
        }
        else
        {
          v20 = v15;
        }
        v21 = v18;
        if ( v20 == *(_DWORD *)(v18 + 448) )
        {
          v39 = *(_QWORD *)(v19 + 8);
          if ( v39 )
          {
            v34 = v43;
            *(_QWORD *)(v48 + 8 * v43) = v39;
LABEL_35:
            v35 = 1;
LABEL_36:
            if ( !v35 )
              return 0LL;
            v13 = v46;
            v6 = v49;
            LODWORD(v10) = v45;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v46 + 1) + 8 * v34);
            goto LABEL_8;
          }
        }
        if ( *(_QWORD *)(v18 + 504) + (-(__int64)(*(_DWORD *)(v18 + 628) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64 > *(_QWORD *)(v18 + 512) )
        {
          v38 = (_QWORD *)PALLOCMEM2(0x720uLL);
          if ( !v38 )
            goto LABEL_62;
          *v38 = *(_QWORD *)(v18 + 528);
          *(_QWORD *)(v18 + 528) = v38;
          *(_QWORD *)(v18 + 504) = v38 + 2;
          *(_QWORD *)(v18 + 512) = v38 + 228;
          v21 = *(_QWORD *)this;
        }
        *(_DWORD *)v42 = (*(_DWORD *)(v21 + 72) == 2) + 1;
        memset(v63, 0, sizeof(v63));
        v22 = *(_DWORD *)(v21 + 628) == 0;
        a2 = *(struct _FONTFILEVIEW **)(v21 + 112);
        v55 = a2;
        if ( v22 )
          v47 = *(_OWORD **)(v18 + 504);
        else
          v47 = v63;
        v23 = *((_QWORD *)a2 + 11);
        v56 = *(_QWORD *)(v21 + 96);
        v24 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD))(v23 + 2904);
        if ( gpepCSRSS )
        {
          v60 = 0LL;
          v61 = 0;
          v62 = 0;
          if ( (*(_DWORD *)(v23 + 40) & 0x2000) != 0 )
          {
            if ( (struct PDEV *)v23 == qword_1C032FD38 )
            {
              v25 = *((_DWORD *)a2 + 9);
              if ( v25 <= 3 )
              {
                v26 = 0;
                if ( v25 )
                {
                  v27 = (struct _FONTFILEVIEW **)*((_QWORD *)a2 + 25);
                  v28 = v27;
                  while ( 1 )
                  {
                    a2 = *v28;
                    v29 = *((_DWORD *)*v28 + 10);
                    if ( (v29 & 0x10) == 0 && (v29 & 8) != 0 && !*((_QWORD *)a2 + 6) )
                      break;
                    ++v26;
                    ++v28;
                    if ( v26 >= v25 )
                      goto LABEL_25;
                  }
                  memset(v66, 0, sizeof(v66));
                  *(_QWORD *)v64 = 0LL;
                  v65 = 0;
                  if ( MapFontFiles(v25, v27, v66, v64) )
                  {
                    v60 = *((_QWORD *)v55 + 25);
                    v61 = *((_DWORD *)v55 + 9);
                  }
                }
              }
            }
LABEL_25:
            if ( (*(_DWORD *)(v23 + 40) & 0x2000) != 0 && (struct PDEV *)v23 != qword_1C032FD38 )
            {
              v62 = 1;
              ProcessServerSilo = PsGetProcessServerSilo(gpepCSRSS, a2);
              v59 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              KeStackAttachProcess(gpepCSRSS, &ApcState);
            }
          }
          v30 = 0LL;
          for ( j = v24(v56, v21, *(unsigned int *)v42, v41, v47, 0LL, 0);
                (unsigned int)v30 < v61;
                v30 = (unsigned int)(v30 + 1) )
          {
            EngUnmapFontFileFD(*(_QWORD *)(v60 + 8 * v30));
          }
          if ( v62 )
          {
            KeUnstackDetachProcess(&ApcState);
            PsDetachSiloFromCurrentThread(v59);
          }
          if ( j != -1 )
          {
            if ( *(_DWORD *)(*(_QWORD *)this + 628LL) )
            {
              v32 = *(_QWORD *)(v18 + 504);
              *(_OWORD *)v32 = v63[0];
              *(_QWORD *)(v32 + 16) = *(_QWORD *)&v63[1];
            }
            v33 = v48;
            v34 = v43;
            **(_QWORD **)(v18 + 504) = 0LL;
            *(_QWORD *)(v33 + 8 * v34) = *(_QWORD *)(v18 + 504);
            *(_QWORD *)(v18 + 504) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 628LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL)
                                    + 64;
            goto LABEL_35;
          }
        }
LABEL_62:
        v34 = v43;
        v35 = 0;
        goto LABEL_36;
      }
    }
    else
    {
      for ( ; (_DWORD)v10; LODWORD(v10) = v10 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 448LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this, a2);
        ++a3;
      }
    }
    return 1LL;
  }
  return 0LL;
}
