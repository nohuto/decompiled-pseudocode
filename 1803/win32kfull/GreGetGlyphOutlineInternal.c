/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C0076F24
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C0076D60 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C0077664 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007777C (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0086598 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0088C68 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C0125B38 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?vGetCache@RFONTOBJ@@QEAAXXZ @ 0x1C01394D8 (-vGetCache@RFONTOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C013C088 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C013C0CC (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C013C904 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0197244 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0277400 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

__int64 __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  unsigned int v9; // r12d
  int v10; // r14d
  struct _FONTOBJ *v11; // rbx
  unsigned int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // rsi
  int v15; // eax
  struct _FONTOBJ *v16; // rsi
  struct _FONTOBJ **v17; // r13
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rdx
  unsigned int pvProducer; // r12d
  ULONG_PTR iFile; // rax
  __int64 v23; // r13
  __int64 v24; // rbx
  struct RFONTOBJ *v25; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v27; // rbx
  unsigned int v28; // r13d
  __int64 v29; // r12
  __int64 v30; // rbx
  struct RFONTOBJ *v31; // r8
  struct _GLYPHDATA *v32; // rax
  ULONG_PTR iTTUniq; // rbx
  unsigned int v34; // r12d
  struct RFONTOBJ *v35; // r8
  struct _GLYPHDATA *v36; // rax
  ULONG_PTR v37; // rdx
  PVOID pvConsumer; // rax
  struct DHPDEV__ *v39; // rdx
  unsigned int v40; // edi
  unsigned int v41; // edi
  unsigned int v42; // edi
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // eax
  LONG top; // ecx
  int v47; // eax
  int v48; // eax
  unsigned __int16 v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTOBJ *v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+58h] [rbp-A8h]
  unsigned int v54; // [rsp+60h] [rbp-A0h]
  unsigned int v55; // [rsp+64h] [rbp-9Ch]
  unsigned int v56; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v57[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-80h] BYREF
  RFONTOBJ *v59; // [rsp+88h] [rbp-78h]
  struct _FONTOBJ **v60; // [rsp+90h] [rbp-70h]
  ULONG_PTR v61; // [rsp+98h] [rbp-68h] BYREF
  int v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h] BYREF
  int v64; // [rsp+B0h] [rbp-50h]
  int v65; // [rsp+B8h] [rbp-48h]
  unsigned int v66; // [rsp+BCh] [rbp-44h]
  int v67; // [rsp+C0h] [rbp-40h]
  _QWORD v68[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _MAT2 *v69; // [rsp+D8h] [rbp-28h]
  struct tagTTPOLYGONHEADER *v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  _GLYPHDATA v72; // [rsp+F0h] [rbp-10h] BYREF

  v70 = a6;
  v69 = a7;
  v9 = 0;
  v55 = 0;
  v71 = a4;
  v67 = a3 & 0x100;
  v10 = a3 & 0x80;
  v11 = 0LL;
  v12 = -1;
  v13 = a3 & 0xFFFFFE7F;
  v65 = -1;
  v14 = a4;
  v66 = v10 != 0 ? 4 : 2;
  MDCOBJ::MDCOBJ((MDCOBJ *)v68, a1);
  if ( !v14 || !v69 )
  {
    EngSetLastError(0x57u);
    goto LABEL_52;
  }
  if ( !v68[0] )
  {
    EngSetLastError(6u);
    goto LABEL_83;
  }
  v53 = 0;
  v52 = 0LL;
  v15 = RFONTOBJ::bInit((RFONTOBJ *)&v52, (struct XDCOBJ *)v68, 0, 2u);
  v16 = v52;
  if ( v15 )
    GreAcquireSemaphore(v52[7].pvConsumer);
  LODWORD(v59) = 0;
  v17 = &v52;
  v60 = &v52;
  v58 = 0LL;
  v62 = 0;
  v61 = 0LL;
  v64 = 0;
  v63 = 0LL;
  if ( !v16 )
    goto LABEL_48;
  if ( v10 )
  {
    v9 = a2;
  }
  else
  {
    v50 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v52, &v50, 1u, &v56, 0, 0);
    v9 = v56;
  }
  v56 = v9;
  if ( v9 != v16[7].iUniq )
    goto LABEL_48;
  if ( v10 )
    goto LABEL_48;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v52, a2) )
    goto LABEL_48;
  v18 = *(_QWORD *)&v16[13].iUniq;
  if ( !v18 )
    goto LABEL_48;
  GreAcquireSemaphore(v18);
  v19 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v52, (struct XDCOBJ *)v68);
  RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v52, 0);
  v20 = *(_QWORD *)&v16[13].iUniq;
  LODWORD(v16[10].pvProducer) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v20);
  GreReleaseSemaphoreInternal(*(_QWORD *)&v16[13].iUniq);
  pvProducer = (unsigned int)v16[12].pvProducer;
  v54 = pvProducer;
  if ( pvProducer )
  {
    iFile = v16[11].iFile;
    v23 = pvProducer - 1;
    v50 = a2;
    v63 = *(_QWORD *)(iFile + 8 * v23);
    v24 = v63;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v63, &v50, 1u, &v51, 0, 0);
    if ( v51 != *(_DWORD *)(v24 + 448) )
    {
      RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v57, *(struct RFONT **)(v16[11].iFile + 8 * v23));
      if ( v57[0]
        && (*(_DWORD *)(*(_QWORD *)(v57[0] + 112LL) + 52LL) & 0xA) == 8
        && (v54 = pvProducer - 1,
            --pvProducer,
            (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v57, a2, v25)) != 0LL)
        && EudcMetrics->fxD )
      {
        v19 = v51;
        v17 = (struct _FONTOBJ **)&v63;
        v60 = (struct _FONTOBJ **)&v63;
      }
      else
      {
        v17 = &v52;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v57);
      if ( v19 != -1 )
        goto LABEL_44;
    }
  }
  v27 = *(_QWORD *)&v16[11].cxMax;
  if ( v27 )
  {
    v58 = *(_QWORD *)&v16[11].cxMax;
    v50 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v58, &v50, 1u, &v51, 0, 0);
    if ( v51 != *(_DWORD *)(v27 + 448) )
    {
      v17 = (struct _FONTOBJ **)&v58;
      v19 = v51;
      v60 = (struct _FONTOBJ **)&v58;
      if ( v51 != -1 )
        goto LABEL_44;
    }
  }
  v28 = 0;
  if ( !pvProducer )
  {
LABEL_36:
    v17 = v60;
    goto LABEL_37;
  }
  v50 = a2;
  v29 = 0LL;
  while ( 1 )
  {
    v63 = *(_QWORD *)(v29 + v16[11].iFile);
    v30 = v63;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v63, &v50, 1u, &v51, 0, 0);
    if ( v51 != *(_DWORD *)(v30 + 448) )
      break;
LABEL_35:
    ++v28;
    v29 += 8LL;
    if ( v28 >= v54 )
      goto LABEL_36;
  }
  RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v57, *(struct RFONT **)(v29 + v16[11].iFile));
  if ( !v57[0]
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       (RFONTOBJ *)v57,
                       a2,
                       (struct PFF *)v16[1].pvConsumer,
                       *(struct PFF **)(v57[0] + 112LL))
    || (v32 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v57, a2, v31)) == 0LL
    || !v32->fxD )
  {
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v57);
    goto LABEL_35;
  }
  v19 = v51;
  v17 = (struct _FONTOBJ **)&v63;
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v57);
  if ( v19 != -1 )
    goto LABEL_44;
LABEL_37:
  iTTUniq = v16[11].iTTUniq;
  if ( !iTTUniq )
    goto LABEL_47;
  v61 = v16[11].iTTUniq;
  v50 = a2;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v61, &v50, 1u, &v51, 0, 0);
  v34 = v51;
  if ( v51 == *(_DWORD *)(iTTUniq + 448) )
    goto LABEL_47;
  RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v57, (struct RFONT *)v16[11].iTTUniq);
  if ( v57[0] )
  {
    v36 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v57, a2, v35);
    if ( v36 )
    {
      if ( v36->fxD )
      {
        v19 = v34;
        v17 = (struct _FONTOBJ **)&v61;
      }
    }
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v57);
  if ( v19 == -1 )
  {
LABEL_47:
    RFONTOBJ::dtorHelper((RFONTOBJ *)&v52);
    LODWORD(v16[10].pvProducer) = 0;
    v9 = v56;
  }
  else
  {
LABEL_44:
    v9 = v19;
  }
LABEL_48:
  v11 = *v17;
  if ( !*v17 )
    EngSetLastError(0x3EBu);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v61);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v58);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
  v14 = v71;
  v12 = v65;
LABEL_52:
  if ( v11 )
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v52, (struct RFONT *)v11);
    RFONTOBJ::vGetCache((RFONTOBJ *)&v52);
    v37 = v52[1].iTTUniq;
    pvConsumer = v11[1].pvConsumer;
    v11 = 0LL;
    v61 = (ULONG_PTR)pvConsumer;
    if ( v37
      && *(_QWORD *)(v37 + 3072)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v58, (struct DCOBJ *)v68, (struct RFONTOBJ *)&v52, v69, a8, v66),
          (_DWORD)v58) )
    {
      if ( !v13 )
      {
        v45 = PFFOBJ::QueryFontData((PFFOBJ *)&v61, 0LL, v52, 4u, v9, &v72, 0LL, 0);
        goto LABEL_76;
      }
      if ( v13 == 1 )
        goto LABEL_61;
      if ( v13 <= 3 )
      {
        v43 = 2;
        if ( v13 != 3 )
          v43 = 0;
        v44 = v43 | 4;
        if ( !v67 )
          v44 = v43;
        v45 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)&v61, v39, v52, v9, v44, &v72, a5, v70);
LABEL_76:
        v12 = v45;
        if ( v45 != -1 )
        {
          top = v72.rclInk.top;
          v47 = v72.rclInk.right - v72.rclInk.left;
          *(_DWORD *)(v14 + 8) = v72.rclInk.left;
          *(_DWORD *)v14 = v47;
          *(_DWORD *)(v14 + 4) = v72.rclInk.bottom - top;
          v48 = (v72.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v14 + 12) = -top;
          *(_WORD *)(v14 + 16) = v48 >> 1;
          *(_WORD *)(v14 + 18) = ((v72.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v13 <= 6 )
      {
LABEL_61:
        v40 = v13 - 1;
        if ( v40 )
        {
          v41 = v40 - 3;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( v42 )
            {
              if ( v42 == 1 )
                v55 = 9;
            }
            else
            {
              v55 = 8;
            }
          }
          else
          {
            v55 = 6;
          }
        }
        else
        {
          v55 = 5;
        }
        v45 = PFFOBJ::QueryFontData((PFFOBJ *)&v61, 0LL, v52, v55, v9, &v72, v70, a5);
        goto LABEL_76;
      }
      if ( !HIDWORD(v58) )
      {
        RFONTOBJ::vReleaseCache(v59);
        RFONTOBJ::vMakeInactive(v59);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v52 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v52);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v52);
  }
LABEL_83:
  if ( (struct _FONTOBJ *)v68[0] != v11 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v68);
  return v12;
}
