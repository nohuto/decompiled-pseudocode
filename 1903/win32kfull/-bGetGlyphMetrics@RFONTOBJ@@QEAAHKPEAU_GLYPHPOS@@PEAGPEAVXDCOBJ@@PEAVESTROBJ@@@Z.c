/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C004B5E0
 * Callers:
 *     GreGetCharWidthW @ 0x1C004AE5C (GreGetCharWidthW.c)
 *     GreGetCharABCWidthsW @ 0x1C004B290 (GreGetCharABCWidthsW.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C0051F40 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0053010 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0053DB0 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0069880 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0109D98 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C011DD7C (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C004D128 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00534CC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0053880 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0077458 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C007F900 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0080BA0 (EngUnmapFontFileFD.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0151F10 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  RFONTOBJ *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // r9
  unsigned __int16 *v13; // r12
  struct GPRUN *Run; // r15
  _DWORD *v15; // r9
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  __int64 v18; // rbx
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  __int64 v20; // rax
  struct RFONTOBJ *v21; // rdx
  __int64 v22; // r13
  ULONG_PTR *v23; // rcx
  int v24; // eax
  RFONTOBJ *v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbp
  _OWORD *v31; // rax
  __int64 v32; // rax
  __int64 (__fastcall *v33)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD); // rbx
  int v34; // eax
  unsigned int v35; // r10d
  unsigned int v36; // ecx
  struct _FONTFILEVIEW **v37; // r11
  struct _FONTFILEVIEW **v38; // rax
  int v39; // edx
  __int64 v40; // rbp
  int v41; // ebx
  RFONTOBJ *v42; // r8
  __int64 v43; // rax
  struct RFONTOBJ *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  _QWORD *v48; // rax
  ULONG_PTR v49; // rax
  ULONG_PTR *v50; // rax
  ULONG_PTR *v51; // r14
  unsigned __int16 v52[2]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v53; // [rsp+48h] [rbp-130h]
  RFONTOBJ *v54; // [rsp+50h] [rbp-128h]
  ULONG_PTR *v55; // [rsp+58h] [rbp-120h]
  unsigned int v56; // [rsp+60h] [rbp-118h]
  unsigned int v57; // [rsp+64h] [rbp-114h] BYREF
  unsigned int v58; // [rsp+68h] [rbp-110h]
  struct RFONTOBJ *v59; // [rsp+70h] [rbp-108h]
  _OWORD *v60; // [rsp+78h] [rbp-100h]
  _DWORD *i; // [rsp+80h] [rbp-F8h]
  int v62; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int16 *v63; // [rsp+90h] [rbp-E8h]
  struct ESTROBJ *v64; // [rsp+98h] [rbp-E0h]
  struct XDCOBJ *v65; // [rsp+A0h] [rbp-D8h]
  __int64 v66; // [rsp+A8h] [rbp-D0h]
  __int64 v67; // [rsp+B0h] [rbp-C8h]
  _OWORD v68[4]; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned int v69[2]; // [rsp+100h] [rbp-78h] BYREF
  int v70; // [rsp+108h] [rbp-70h]
  void *v71[3]; // [rsp+110h] [rbp-68h] BYREF

  v65 = a5;
  v8 = this;
  v64 = a6;
  v9 = *(_QWORD *)this;
  v10 = (unsigned int)a2;
  v56 = (unsigned int)a2;
  v54 = this;
  if ( *(_QWORD *)(v9 + 480) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v11 = *(_QWORD *)v8;
    v63 = a4;
    v12 = *(_DWORD **)(v11 + 480);
    if ( *v12 )
    {
      v13 = &a4[v10];
      Run = (struct GPRUN *)(v12 + 4);
      if ( a4 < v13 )
      {
        v15 = v12 + 5;
        for ( i = v15; ; v15 = i )
        {
          v16 = *a4;
          v17 = v16;
          v18 = v16 - *(_DWORD *)Run;
          if ( (unsigned int)v18 < *v15
            || (Run = RFONTOBJ::gprunFindRun(v8, v16),
                v18 = v16 - *(_DWORD *)Run,
                i = (_DWORD *)((char *)Run + 4),
                (unsigned int)v18 < *((_DWORD *)Run + 1)) )
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v18);
          }
          else
          {
            LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(v8, v65, v64, a4, v63, v56, &v62, 0);
            if ( !LinkMetricsPlus )
              return 0LL;
          }
          if ( !LinkMetricsPlus )
            break;
LABEL_8:
          ++a4;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
          if ( a4 >= v13 )
            return 1LL;
        }
        v20 = *(_QWORD *)v8;
        v21 = (struct RFONTOBJ *)(8 * v18 + *((_QWORD *)Run + 1));
        v67 = 8 * v18;
        v59 = v21;
        if ( !*(_QWORD *)(v20 + 480) )
        {
          if ( !(unsigned int)RFONTOBJ::bAllocateCache(v8, v21) )
            return 0LL;
          v21 = v59;
        }
        v22 = *(_QWORD *)v8;
        v23 = *(ULONG_PTR **)(v22 + 480);
        v24 = *(_DWORD *)(v22 + 84);
        v55 = v23;
        if ( (v24 & 2) != 0 )
        {
          v52[0] = v16;
          v25 = v54;
          RFONTOBJ::vXlatGlyphArray(v54, v52, 1u, &v57, 0, 0);
          v23 = v55;
          v21 = v59;
          v17 = v57;
          v22 = *(_QWORD *)v25;
        }
        else
        {
          v25 = v54;
        }
        v26 = v22;
        v53 = v22;
        if ( v17 == *(_DWORD *)(v22 + 460) )
        {
          v49 = v23[1];
          v53 = v22;
          if ( v49 )
          {
            *(_QWORD *)v21 = v49;
LABEL_37:
            v46 = 1;
LABEL_38:
            if ( !v46 )
              return 0LL;
            v8 = v54;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(v67 + *((_QWORD *)Run + 1));
            goto LABEL_8;
          }
        }
        v27 = *(_QWORD *)(v22 + 512);
        if ( *(_DWORD *)(v22 + 640) )
        {
          v28 = 24LL;
        }
        else
        {
          v28 = 64LL;
          v53 = v22;
        }
        if ( (unsigned __int64)(v27 + v28) > *(_QWORD *)(v22 + 520) )
        {
          v48 = (_QWORD *)PALLOCMEM2(0x720uLL);
          if ( !v48 )
            goto LABEL_51;
          *v48 = *(_QWORD *)(v22 + 536);
          *(_QWORD *)(v22 + 536) = v48;
          *(_QWORD *)(v22 + 512) = v48 + 2;
          *(_QWORD *)(v22 + 520) = v48 + 228;
          v26 = *(_QWORD *)v25;
          v53 = *(_QWORD *)v25;
        }
        v58 = (*(_DWORD *)(v26 + 88) == 2) + 1;
        memset(v68, 0, sizeof(v68));
        v30 = *(_QWORD *)(v26 + 128);
        if ( *(_DWORD *)(v26 + 640) )
          v31 = v68;
        else
          v31 = *(_OWORD **)(v22 + 512);
        v60 = v31;
        v66 = *(_QWORD *)(v26 + 112);
        v32 = *(_QWORD *)(v30 + 88);
        v55 = 0LL;
        *(_DWORD *)v52 = 0;
        v33 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD))(v32 + 2912);
        if ( (*(_DWORD *)(v32 + 40) & 0x2000) != 0 && *(_DWORD *)(v30 + 36) <= 3u )
        {
          v34 = *(_DWORD *)(v30 + 52);
          if ( (v34 & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
            v34 = *(_DWORD *)(v30 + 52);
          }
          if ( (v34 & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
          v35 = *(_DWORD *)(v30 + 36);
          v36 = 0;
          if ( !v35 )
            goto LABEL_29;
          v37 = *(struct _FONTFILEVIEW ***)(v30 + 200);
          v38 = v37;
          while ( 1 )
          {
            v39 = *((_DWORD *)*v38 + 10);
            if ( (v39 & 0x10) == 0 && (v39 & 8) != 0 && !*((_QWORD *)*v38 + 6) )
              break;
            ++v36;
            ++v38;
            if ( v36 >= v35 )
              goto LABEL_29;
          }
          memset(v71, 0, sizeof(v71));
          *(_QWORD *)v69 = 0LL;
          v70 = 0;
          if ( MapFontFiles(v35, v37, v71, v69) )
          {
            v50 = *(ULONG_PTR **)(v30 + 200);
            v40 = *(unsigned int *)(v30 + 36);
            v55 = v50;
          }
          else
          {
LABEL_29:
            v40 = *(unsigned int *)v52;
          }
        }
        else
        {
          v40 = 0LL;
        }
        v41 = v33(v66, v53, v58, v17, v60, 0LL, 0);
        if ( (_DWORD)v40 )
        {
          v51 = v55;
          do
          {
            EngUnmapFontFileFD(*v51++);
            --v40;
          }
          while ( v40 );
        }
        if ( v41 != -1 )
        {
          v42 = v54;
          if ( *(_DWORD *)(*(_QWORD *)v54 + 640LL) )
          {
            v43 = *(_QWORD *)(v22 + 512);
            *(_OWORD *)v43 = v68[0];
            *(_QWORD *)(v43 + 16) = *(_QWORD *)&v68[1];
          }
          v44 = v59;
          **(_QWORD **)(v22 + 512) = 0LL;
          *(_QWORD *)v44 = *(_QWORD *)(v22 + 512);
          v45 = 64LL;
          if ( *(_DWORD *)(*(_QWORD *)v42 + 640LL) )
            v45 = 24LL;
          *(_QWORD *)(v22 + 512) += v45;
          goto LABEL_37;
        }
LABEL_51:
        v46 = 0;
        goto LABEL_38;
      }
    }
    else
    {
      for ( ; (_DWORD)v10; LODWORD(v10) = v10 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)v8 + 460LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v8);
        ++a3;
      }
    }
    return 1LL;
  }
  return 0LL;
}
