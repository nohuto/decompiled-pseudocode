/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88
 * Callers:
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C005B1C0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00805C4 (GreGetCharABCWidthsW.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C00811F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008350C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00848F4 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     GreGetCharWidthW @ 0x1C010D1C4 (GreGetCharWidthW.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C01116CC (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C01140EC (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C007FC6C (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0083968 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0084130 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0084210 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00929C4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C0162B70 (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  _DWORD *v12; // rcx
  struct GPRUN *v14; // r13
  _DWORD *v15; // r9
  unsigned int v16; // r12d
  __int64 v17; // rbx
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  _OWORD *v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD); // rbx
  int v32; // eax
  unsigned int v33; // r10d
  unsigned int v34; // r8d
  struct _FONTFILEVIEW **v35; // r11
  struct _FONTFILEVIEW **v36; // rax
  int v37; // ecx
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  unsigned int v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+5Ch] [rbp-A4h]
  struct GPRUN *v47; // [rsp+60h] [rbp-A0h]
  _OWORD *v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  _DWORD *i; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v54; // [rsp+98h] [rbp-68h]
  struct ESTROBJ *v55; // [rsp+A0h] [rbp-60h]
  struct XDCOBJ *v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v58; // [rsp+B8h] [rbp-48h]
  _OWORD v59[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v60[2]; // [rsp+100h] [rbp+0h] BYREF
  int v61; // [rsp+108h] [rbp+8h]
  void *v62[3]; // [rsp+110h] [rbp+10h] BYREF

  v56 = a5;
  v55 = a6;
  v9 = *(_QWORD *)this;
  v10 = (unsigned int)a2;
  v46 = (int)a2;
  if ( *(_QWORD *)(v9 + 480) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v11 = *(_QWORD *)this;
    v54 = a4;
    v12 = *(_DWORD **)(v11 + 480);
    if ( !*v12 )
    {
      for ( ; (_DWORD)v10; LODWORD(v10) = v10 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++a3;
      }
      return 1LL;
    }
    v58 = &a4[v10];
    v14 = (struct GPRUN *)(v12 + 4);
    v47 = (struct GPRUN *)(v12 + 4);
    if ( a4 >= v58 )
      return 1LL;
    v15 = v12 + 5;
    for ( i = v12 + 5; ; v15 = i )
    {
      v16 = *a4;
      v42 = v16;
      v17 = v16 - *(_DWORD *)v14;
      if ( (unsigned int)v17 < *v15 )
      {
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17);
      }
      else
      {
        Run = RFONTOBJ::gprunFindRun(this, v16);
        v47 = Run;
        v14 = Run;
        v17 = v16 - *(_DWORD *)Run;
        i = (_DWORD *)((char *)Run + 4);
        if ( (unsigned int)v17 >= *((_DWORD *)Run + 1) )
        {
          LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v56, v55, a4, v54, v10, &v53, 0);
          if ( !LinkMetricsPlus )
            return 0LL;
        }
        else
        {
          _mm_lfence();
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v17);
        }
      }
      if ( LinkMetricsPlus )
        goto LABEL_56;
      v44 = (unsigned int)v17;
      v49 = *((_QWORD *)v14 + 1);
      if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
        return 0LL;
      v20 = *(_QWORD *)this;
      v21 = *(_QWORD *)(*(_QWORD *)this + 480LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
      {
        LOWORD(v43) = v16;
        RFONTOBJ::vXlatGlyphArray(this, (const unsigned __int16 *)&v43, 1u, &v45, 0, 0);
        v22 = v45;
        v20 = *(_QWORD *)this;
        v42 = v45;
      }
      else
      {
        v22 = v16;
      }
      v23 = v20;
      if ( v22 == *(_DWORD *)(v20 + 460) )
      {
        v24 = *(_QWORD *)(v21 + 8);
        if ( v24 )
        {
          v25 = v44;
          *(_QWORD *)(v49 + 8 * v44) = v24;
LABEL_53:
          v39 = 1;
          goto LABEL_54;
        }
      }
      if ( *(_QWORD *)(v20 + 512) + (-(__int64)(*(_DWORD *)(v20 + 640) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64 > *(_QWORD *)(v20 + 520) )
      {
        v26 = PALLOCMEM2(0x720uLL, 1667326791LL, 0);
        if ( !v26 )
          goto LABEL_49;
        *v26 = *(_QWORD *)(v20 + 536);
        *(_QWORD *)(v20 + 536) = v26;
        *(_QWORD *)(v20 + 512) = v26 + 2;
        *(_QWORD *)(v20 + 520) = v26 + 228;
        v23 = *(_QWORD *)this;
      }
      v43 = (*(_DWORD *)(v23 + 88) == 2) + 1;
      memset(v59, 0, sizeof(v59));
      v28 = *(_QWORD *)(v23 + 128);
      if ( *(_DWORD *)(v23 + 640) )
      {
        v27 = v59;
        v48 = v59;
      }
      else
      {
        v48 = *(_OWORD **)(v20 + 512);
      }
      v29 = *(_QWORD *)(v23 + 112);
      v51 = 0LL;
      v52 = 0;
      v57 = v29;
      v30 = *(_QWORD *)(v28 + 88);
      v31 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD))(v30 + 2912);
      if ( (*(_DWORD *)(v30 + 40) & 0x2000) != 0 && *(_DWORD *)(v28 + 36) <= 3u )
      {
        v32 = *(_DWORD *)(v28 + 52);
        if ( (v32 & 0x1000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
          v32 = *(_DWORD *)(v28 + 52);
        }
        if ( (v32 & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
        v33 = *(_DWORD *)(v28 + 36);
        v34 = 0;
        if ( v33 )
        {
          v35 = *(struct _FONTFILEVIEW ***)(v28 + 200);
          v36 = v35;
          while ( 1 )
          {
            v37 = *((_DWORD *)*v36 + 10);
            if ( (v37 & 0x10) == 0 && (v37 & 8) != 0 && !*((_QWORD *)*v36 + 6) )
              break;
            ++v34;
            ++v36;
            if ( v34 >= v33 )
              goto LABEL_45;
          }
          memset(v62, 0, sizeof(v62));
          *(_QWORD *)v60 = 0LL;
          v61 = 0;
          if ( MapFontFiles(v33, v35, v62, v60) )
          {
            v51 = *(_QWORD *)(v28 + 200);
            v52 = *(_DWORD *)(v28 + 36);
          }
        }
      }
LABEL_45:
      v38 = v31(v57, v23, v43, v42, v48, 0LL, 0);
      if ( !ValidateGlyphDataAndBitmap(v38, v43, 0LL) )
        v38 = -1;
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)&v51);
      if ( v38 != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
        {
          v40 = *(_QWORD *)(v20 + 512);
          *(_OWORD *)v40 = v59[0];
          *(_QWORD *)(v40 + 16) = *(_QWORD *)&v59[1];
        }
        v41 = v49;
        v25 = v44;
        v14 = v47;
        **(_QWORD **)(v20 + 512) = 0LL;
        *(_QWORD *)(v41 + 8 * v25) = *(_QWORD *)(v20 + 512);
        *(_QWORD *)(v20 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
        goto LABEL_53;
      }
      v14 = v47;
LABEL_49:
      v25 = v44;
      v39 = 0;
LABEL_54:
      if ( !v39 )
        return 0LL;
      LODWORD(v10) = v46;
      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v25);
LABEL_56:
      ++a4;
      a3->hg = LinkMetricsPlus->hg;
      a3->pgdf = &LinkMetricsPlus->gdf;
      ++a3;
      if ( a4 >= v58 )
        return 1LL;
    }
  }
  return 0LL;
}
