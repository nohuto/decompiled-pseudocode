/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C00517A8
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C0112650 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C004BF40 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C004D83C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C004EE48 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0052D5C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0053720 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0053880 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0104A14 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C0105A68 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C0124D0C (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C014F378 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0154584 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C01655E4 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A1B98 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
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
  unsigned int v11; // r12d
  __int64 v12; // r13
  int v13; // r14d
  __int64 v14; // rsi
  unsigned int v15; // edi
  int v16; // eax
  struct _FONTOBJ *v17; // rsi
  struct _FONTOBJ **v18; // r13
  ULONG_PTR iTTUniq; // rcx
  unsigned int v20; // r14d
  ULONG_PTR v21; // rdx
  ULONG cxMax; // r12d
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rbx
  struct RFONTOBJ *v26; // r8
  __int64 v27; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  ULONG_PTR iFile; // rbx
  ULONG v30; // r13d
  __int64 v31; // r12
  __int64 v32; // rbx
  RFONTOBJ *v33; // rcx
  __int64 v34; // r9
  struct RFONTOBJ *v35; // r8
  struct _GLYPHDATA *v36; // rax
  SIZE sizLogResPpi; // rbx
  struct RFONTOBJ *v38; // r8
  unsigned int v39; // r12d
  struct _GLYPHDATA *v40; // rax
  struct _FONTOBJ *v41; // rbx
  SIZE v42; // rax
  struct DHPDEV__ *v43; // rdx
  unsigned int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // edi
  int v47; // eax
  int v48; // ecx
  unsigned int v49; // eax
  LONG top; // ecx
  int v51; // eax
  int v52; // eax
  unsigned __int16 v54; // [rsp+40h] [rbp-C0h] BYREF
  struct _FONTOBJ *v55; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v57; // [rsp+54h] [rbp-ACh]
  unsigned int v58; // [rsp+58h] [rbp-A8h]
  unsigned int v59; // [rsp+5Ch] [rbp-A4h]
  unsigned int v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v62[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _FONTOBJ **v63; // [rsp+80h] [rbp-80h]
  SIZE v64; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR v65; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  RFONTOBJ *v69; // [rsp+A8h] [rbp-58h]
  _QWORD v70[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _MAT2 *v71; // [rsp+C0h] [rbp-40h]
  struct tagTTPOLYGONHEADER *v72; // [rsp+C8h] [rbp-38h]
  _GLYPHDATA v73; // [rsp+D0h] [rbp-30h] BYREF

  v72 = a6;
  v11 = 0;
  v68 = a4;
  v71 = a7;
  v12 = a4;
  memset(&v73, 0, sizeof(v73));
  v58 = 0;
  v59 = -1;
  v67 = a3 & 0x100;
  v13 = a3 & 0x80;
  v14 = 0LL;
  v15 = a3 & 0xFFFFFE7F;
  v66 = v13 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v70, a1);
  if ( !v12 || !v71 )
  {
    EngSetLastError(0x57u);
    goto LABEL_52;
  }
  if ( !v70[0] )
  {
    EngSetLastError(6u);
    goto LABEL_83;
  }
  v55 = 0LL;
  v16 = RFONTOBJ::bInit((RFONTOBJ *)&v55, (struct XDCOBJ *)v70, 0, 2u);
  v17 = v55;
  if ( v16 )
    GreAcquireSemaphore(v55[7].pvProducer);
  v65 = 0LL;
  v18 = &v55;
  v63 = &v55;
  v64 = 0LL;
  v61 = 0LL;
  if ( !v17 )
    goto LABEL_48;
  if ( v13 )
  {
    v11 = a2;
  }
  else
  {
    v54 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v55, &v54, 1u, &v60, 0, 0);
    v11 = v60;
  }
  v60 = v11;
  if ( v11 != v17[7].flFontType )
    goto LABEL_48;
  if ( v13 )
    goto LABEL_48;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v55, a2) )
    goto LABEL_48;
  iTTUniq = v17[13].iTTUniq;
  if ( !iTTUniq )
    goto LABEL_48;
  GreAcquireSemaphore(iTTUniq);
  v20 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v55, (struct XDCOBJ *)v70);
  RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v55, 0);
  v21 = v17[13].iTTUniq;
  v17[11].cxMax |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v21);
  GreReleaseSemaphoreInternal(v17[13].iTTUniq);
  cxMax = v17[13].cxMax;
  v57 = cxMax;
  if ( cxMax )
  {
    v23 = *(_QWORD *)&v17[11].ulStyleSize;
    v24 = cxMax - 1;
    v54 = a2;
    v25 = *(_QWORD *)(v23 + 8 * v24);
    v61 = v25;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v61, &v54, 1u, &v56, 0, 0);
    if ( v56 != *(_DWORD *)(v25 + 460) )
    {
      v27 = *(_QWORD *)(*(_QWORD *)&v17[11].ulStyleSize + 8 * v24);
      v62[0] = v27;
      if ( v27
        && (*(_DWORD *)(*(_QWORD *)(v27 + 128) + 52LL) & 0xA) == 8
        && (v57 = cxMax - 1, --cxMax, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v62, a2, v26)) != 0LL)
        && EudcMetrics->fxD )
      {
        v20 = v56;
        v18 = (struct _FONTOBJ **)&v61;
        v63 = (struct _FONTOBJ **)&v61;
      }
      else
      {
        v18 = &v55;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v62);
      if ( v20 != -1 )
        goto LABEL_44;
    }
  }
  iFile = v17[11].iFile;
  if ( iFile )
  {
    v65 = v17[11].iFile;
    v54 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v54, 1u, &v56, 0, 0);
    if ( v56 != *(_DWORD *)(iFile + 460) )
    {
      v18 = (struct _FONTOBJ **)&v65;
      v20 = v56;
      v63 = (struct _FONTOBJ **)&v65;
      if ( v56 != -1 )
        goto LABEL_44;
    }
  }
  v30 = 0;
  if ( !cxMax )
  {
LABEL_36:
    v18 = v63;
    goto LABEL_37;
  }
  v54 = a2;
  v31 = 0LL;
  while ( 1 )
  {
    v61 = *(_QWORD *)(v31 + *(_QWORD *)&v17[11].ulStyleSize);
    v32 = v61;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v61, &v54, 1u, &v56, 0, 0);
    if ( v56 != *(_DWORD *)(v32 + 460) )
      break;
LABEL_35:
    ++v30;
    v31 += 8LL;
    if ( v30 >= v57 )
      goto LABEL_36;
  }
  v34 = *(_QWORD *)(v31 + *(_QWORD *)&v17[11].ulStyleSize);
  v62[0] = v34;
  if ( !v34
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       v33,
                       a2,
                       *(struct PFF **)&v17[2].iUniq,
                       *(struct PFF **)(v34 + 128))
    || (v36 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v62, a2, v35)) == 0LL
    || !v36->fxD )
  {
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v62);
    goto LABEL_35;
  }
  v20 = v56;
  v18 = (struct _FONTOBJ **)&v61;
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v62);
  if ( v20 != -1 )
    goto LABEL_44;
LABEL_37:
  sizLogResPpi = v17[11].sizLogResPpi;
  if ( !*(_QWORD *)&sizLogResPpi )
    goto LABEL_47;
  v64 = v17[11].sizLogResPpi;
  v54 = a2;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v54, 1u, &v56, 0, 0);
  v39 = v56;
  if ( v56 == *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 460LL) )
    goto LABEL_47;
  v62[0] = v17[11].sizLogResPpi;
  if ( v62[0] )
  {
    v40 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v62, a2, v38);
    if ( v40 )
    {
      if ( v40->fxD )
      {
        v20 = v39;
        v18 = (struct _FONTOBJ **)&v64;
      }
    }
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v62);
  if ( v20 == -1 )
  {
LABEL_47:
    RFONTOBJ::dtorHelper((RFONTOBJ *)&v55);
    v17[11].cxMax = 0;
    v11 = v60;
  }
  else
  {
LABEL_44:
    v11 = v20;
  }
LABEL_48:
  v41 = *v18;
  if ( !*v18 )
    EngSetLastError(0x3EBu);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v61);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v64);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v65);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v55);
  v12 = v68;
  v14 = (unsigned __int64)v41 & -(__int64)(v41 != 0LL);
LABEL_52:
  if ( v14 )
  {
    v55 = (struct _FONTOBJ *)v14;
    GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
    v62[0] = *(_QWORD *)(v14 + 128);
    v42 = v55[1].sizLogResPpi;
    if ( *(_QWORD *)&v42
      && *(_QWORD *)(*(_QWORD *)&v42 + 3080LL)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v68, (struct DCOBJ *)v70, (struct RFONTOBJ *)&v55, v71, a8, v66),
          (_DWORD)v68) )
    {
      if ( !v15 )
      {
        v49 = PFFOBJ::QueryFontData((PFFOBJ *)v62, 0LL, v55, 4u, v11, &v73, 0LL, 0);
        goto LABEL_76;
      }
      if ( v15 == 1 )
        goto LABEL_61;
      if ( v15 <= 3 )
      {
        v47 = 2;
        if ( v15 != 3 )
          v47 = 0;
        v48 = v47 | 4;
        if ( !v67 )
          v48 = v47;
        v49 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)v62, v43, v55, v11, v48, &v73, a5, v72);
LABEL_76:
        v59 = v49;
        if ( v49 != -1 )
        {
          top = v73.rclInk.top;
          v51 = v73.rclInk.right - v73.rclInk.left;
          *(_DWORD *)(v12 + 8) = v73.rclInk.left;
          *(_DWORD *)v12 = v51;
          *(_DWORD *)(v12 + 4) = v73.rclInk.bottom - top;
          v52 = (v73.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v12 + 12) = -top;
          *(_WORD *)(v12 + 16) = v52 >> 1;
          *(_WORD *)(v12 + 18) = ((v73.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v15 <= 6 )
      {
LABEL_61:
        v44 = v15 - 1;
        if ( v44 )
        {
          v45 = v44 - 3;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              if ( v46 == 1 )
                v58 = 9;
            }
            else
            {
              v58 = 8;
            }
          }
          else
          {
            v58 = 6;
          }
        }
        else
        {
          v58 = 5;
        }
        v49 = PFFOBJ::QueryFontData((PFFOBJ *)v62, 0LL, v55, v58, v11, &v73, v72, a5);
        goto LABEL_76;
      }
      if ( !HIDWORD(v68) )
      {
        RFONTOBJ::vReleaseCache(v69);
        RFONTOBJ::vMakeInactive(v69);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v55 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v55);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v55);
  }
LABEL_83:
  if ( v70[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v70);
  return v59;
}
