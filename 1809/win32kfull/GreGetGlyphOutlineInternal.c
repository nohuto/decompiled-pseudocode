/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C00C5440
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C00C5270 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0083BC8 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0084210 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00C4CF4 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00C5BD0 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00C5C28 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00C5D50 (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C014AD70 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vGetCache@RFONTOBJ@@QEAAXXZ @ 0x1C015FB0C (-vGetCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C0161770 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C01617B4 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C01618E4 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C028A970 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  ULONG_PTR iTTUniq; // rcx
  unsigned int v19; // r14d
  ULONG_PTR v20; // rdx
  ULONG cxMax; // r12d
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rbx
  struct RFONTOBJ *v25; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  ULONG_PTR iFile; // rbx
  ULONG v28; // r13d
  __int64 v29; // r12
  __int64 v30; // rbx
  struct RFONTOBJ *v31; // r8
  struct _GLYPHDATA *v32; // rax
  SIZE sizLogResPpi; // rbx
  unsigned int v34; // r12d
  struct RFONTOBJ *v35; // r8
  struct _GLYPHDATA *v36; // rax
  SIZE v37; // rdx
  struct DHPDEV__ *v38; // rdx
  unsigned int v39; // edi
  unsigned int v40; // edi
  unsigned int v41; // edi
  int v42; // eax
  int v43; // ecx
  unsigned int v44; // eax
  LONG top; // ecx
  int v46; // eax
  int v47; // eax
  unsigned __int16 v49; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTOBJ *v51; // [rsp+50h] [rbp-B0h] BYREF
  int v52; // [rsp+58h] [rbp-A8h]
  ULONG v53; // [rsp+60h] [rbp-A0h]
  unsigned int v54; // [rsp+64h] [rbp-9Ch]
  unsigned int v55; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v56[2]; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v57; // [rsp+80h] [rbp-80h] BYREF
  RFONTOBJ *v58; // [rsp+88h] [rbp-78h]
  struct _FONTOBJ **v59; // [rsp+90h] [rbp-70h]
  SIZE v60; // [rsp+98h] [rbp-68h] BYREF
  int v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  int v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B8h] [rbp-48h]
  unsigned int v65; // [rsp+BCh] [rbp-44h]
  int v66; // [rsp+C0h] [rbp-40h]
  struct _MAT2 *v67; // [rsp+C8h] [rbp-38h]
  struct tagTTPOLYGONHEADER *v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  _QWORD v70[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v71[32]; // [rsp+F0h] [rbp-10h] BYREF
  _GLYPHDATA v72; // [rsp+110h] [rbp+10h] BYREF

  v68 = a6;
  v67 = a7;
  v9 = 0;
  v54 = 0;
  v69 = a4;
  v66 = a3 & 0x100;
  v10 = a3 & 0x80;
  v11 = 0LL;
  v12 = -1;
  v13 = a3 & 0xFFFFFE7F;
  v64 = -1;
  v14 = a4;
  v65 = v10 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v70, a1);
  if ( !v14 || !v67 )
  {
    EngSetLastError(0x57u);
    goto LABEL_52;
  }
  if ( !v70[0] )
  {
    EngSetLastError(6u);
    goto LABEL_83;
  }
  v52 = 0;
  v51 = 0LL;
  v15 = RFONTOBJ::bInit((RFONTOBJ *)&v51, (struct XDCOBJ *)v70, 0, 2u);
  v16 = v51;
  if ( v15 )
    GreAcquireSemaphore(v51[7].pvProducer);
  LODWORD(v58) = 0;
  v17 = &v51;
  v59 = &v51;
  v57 = 0LL;
  v61 = 0;
  v60 = 0LL;
  v63 = 0;
  v62 = 0LL;
  if ( !v16 )
    goto LABEL_48;
  if ( v10 )
  {
    v9 = a2;
  }
  else
  {
    v49 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v51, &v49, 1, &v55, 0, 0);
    v9 = v55;
  }
  v55 = v9;
  if ( v9 != v16[7].flFontType )
    goto LABEL_48;
  if ( v10 )
    goto LABEL_48;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v51, a2) )
    goto LABEL_48;
  iTTUniq = v16[13].iTTUniq;
  if ( !iTTUniq )
    goto LABEL_48;
  GreAcquireSemaphore(iTTUniq);
  v19 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v51, (struct XDCOBJ *)v70);
  RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v51, 0);
  v20 = v16[13].iTTUniq;
  v16[11].cxMax |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v20);
  GreReleaseSemaphoreInternal(v16[13].iTTUniq);
  cxMax = v16[13].cxMax;
  v53 = cxMax;
  if ( cxMax )
  {
    v22 = *(_QWORD *)&v16[11].ulStyleSize;
    v23 = cxMax - 1;
    v49 = a2;
    v62 = *(_QWORD *)(v22 + 8 * v23);
    v24 = v62;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v62, &v49, 1, &v50, 0, 0);
    if ( v50 != *(_DWORD *)(v24 + 460) )
    {
      RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v56, *(struct RFONT **)(*(_QWORD *)&v16[11].ulStyleSize + 8 * v23));
      if ( v56[0]
        && (*(_DWORD *)(*(_QWORD *)(v56[0] + 128LL) + 52LL) & 0xA) == 8
        && (v53 = cxMax - 1, --cxMax, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v56, a2, v25)) != 0LL)
        && EudcMetrics->fxD )
      {
        v19 = v50;
        v17 = (struct _FONTOBJ **)&v62;
        v59 = (struct _FONTOBJ **)&v62;
      }
      else
      {
        v17 = &v51;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v56);
      if ( v19 != -1 )
        goto LABEL_44;
    }
  }
  iFile = v16[11].iFile;
  if ( iFile )
  {
    v57 = v16[11].iFile;
    v49 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v57, &v49, 1, &v50, 0, 0);
    if ( v50 != *(_DWORD *)(iFile + 460) )
    {
      v17 = (struct _FONTOBJ **)&v57;
      v19 = v50;
      v59 = (struct _FONTOBJ **)&v57;
      if ( v50 != -1 )
        goto LABEL_44;
    }
  }
  v28 = 0;
  if ( !cxMax )
  {
LABEL_36:
    v17 = v59;
    goto LABEL_37;
  }
  v49 = a2;
  v29 = 0LL;
  while ( 1 )
  {
    v62 = *(_QWORD *)(v29 + *(_QWORD *)&v16[11].ulStyleSize);
    v30 = v62;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v62, &v49, 1, &v50, 0, 0);
    if ( v50 != *(_DWORD *)(v30 + 460) )
      break;
LABEL_35:
    ++v28;
    v29 += 8LL;
    if ( v28 >= v53 )
      goto LABEL_36;
  }
  RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v56, *(struct RFONT **)(v29 + *(_QWORD *)&v16[11].ulStyleSize));
  if ( !v56[0]
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       (RFONTOBJ *)v56,
                       a2,
                       *(struct PFF **)&v16[2].iUniq,
                       *(struct PFF **)(v56[0] + 128LL))
    || (v32 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v56, a2, v31)) == 0LL
    || !v32->fxD )
  {
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v56);
    goto LABEL_35;
  }
  v19 = v50;
  v17 = (struct _FONTOBJ **)&v62;
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v56);
  if ( v19 != -1 )
    goto LABEL_44;
LABEL_37:
  sizLogResPpi = v16[11].sizLogResPpi;
  if ( !*(_QWORD *)&sizLogResPpi )
    goto LABEL_47;
  v60 = v16[11].sizLogResPpi;
  v49 = a2;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v60, &v49, 1, &v50, 0, 0);
  v34 = v50;
  if ( v50 == *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 460LL) )
    goto LABEL_47;
  RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v56, *(struct RFONT **)&v16[11].sizLogResPpi);
  if ( v56[0] )
  {
    v36 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v56, a2, v35);
    if ( v36 )
    {
      if ( v36->fxD )
      {
        v19 = v34;
        v17 = (struct _FONTOBJ **)&v60;
      }
    }
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v56);
  if ( v19 == -1 )
  {
LABEL_47:
    RFONTOBJ::dtorHelper((RFONTOBJ *)&v51);
    v16[11].cxMax = 0;
    v9 = v55;
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
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v62);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v57);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v51);
  v14 = v69;
  v12 = v64;
LABEL_52:
  if ( v11 )
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v51, (struct RFONT *)v11);
    RFONTOBJ::vGetCache((RFONTOBJ *)&v51);
    v37 = v51[1].sizLogResPpi;
    v60 = *(SIZE *)&v11[2].iUniq;
    if ( *(_QWORD *)&v37
      && *(_QWORD *)(*(_QWORD *)&v37 + 3080LL)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v57, (struct DCOBJ *)v70, (struct RFONTOBJ *)&v51, v67, a8, v65),
          (_DWORD)v57) )
    {
      if ( !v13 )
      {
        v44 = PFFOBJ::QueryFontData((PFFOBJ *)&v60, 0LL, v51, 4u, v9, &v72, 0LL, 0);
        goto LABEL_76;
      }
      if ( v13 == 1 )
        goto LABEL_61;
      if ( v13 <= 3 )
      {
        v42 = 2;
        if ( v13 != 3 )
          v42 = 0;
        v43 = v42 | 4;
        if ( !v66 )
          v43 = v42;
        v44 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)&v60, v38, v51, v9, v43, &v72, a5, v68);
LABEL_76:
        v12 = v44;
        if ( v44 != -1 )
        {
          top = v72.rclInk.top;
          v46 = v72.rclInk.right - v72.rclInk.left;
          *(_DWORD *)(v14 + 8) = v72.rclInk.left;
          *(_DWORD *)v14 = v46;
          *(_DWORD *)(v14 + 4) = v72.rclInk.bottom - top;
          v47 = (v72.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v14 + 12) = -top;
          *(_WORD *)(v14 + 16) = v47 >> 1;
          *(_WORD *)(v14 + 18) = ((v72.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v13 <= 6 )
      {
LABEL_61:
        v39 = v13 - 1;
        if ( v39 )
        {
          v40 = v39 - 3;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              if ( v41 == 1 )
                v54 = 9;
            }
            else
            {
              v54 = 8;
            }
          }
          else
          {
            v54 = 6;
          }
        }
        else
        {
          v54 = 5;
        }
        v44 = PFFOBJ::QueryFontData((PFFOBJ *)&v60, 0LL, v51, v54, v9, &v72, v68, a5);
        goto LABEL_76;
      }
      if ( !HIDWORD(v57) )
      {
        RFONTOBJ::vReleaseCache(v58);
        RFONTOBJ::vMakeInactive(v58);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v51 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v51);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v51);
  }
LABEL_83:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v70);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v71);
  return v12;
}
