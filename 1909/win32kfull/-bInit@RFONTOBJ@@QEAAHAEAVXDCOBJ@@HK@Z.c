/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70
 * Callers:
 *     GreGetCharWidthW @ 0x1C008F864 (GreGetCharWidthW.c)
 *     GreGetCharABCWidthsW @ 0x1C008FC90 (GreGetCharABCWidthsW.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0090910 (NtGdiGetLinkedUFIs.c)
 *     GreGetUFI @ 0x1C0092E18 (GreGetUFI.c)
 *     GreGetGlyphOutlineInternal @ 0x1C009B008 (GreGetGlyphOutlineInternal.c)
 *     NtGdiGetWidthTable @ 0x1C009BC30 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C009C08C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009C2B8 (GreGetOutlineTextMetricsInternalW.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AF610 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C00E0F34 (GreGetTextCharsetInfo.c)
 *     GreGetGlyphIndicesW @ 0x1C00F5248 (GreGetGlyphIndicesW.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     GreFontIsLinked @ 0x1C00F86F4 (GreFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00FAD70 (NtGdiQueryFontAssocInfo.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FC3E4 (GreGetFontUnicodeRanges.c)
 *     GreGetCharWidthInfo @ 0x1C0101074 (GreGetCharWidthInfo.c)
 *     GreGetTextMetricsW @ 0x1C0107E3C (GreGetTextMetricsW.c)
 *     GreGetKerningPairs @ 0x1C0144EE4 (GreGetKerningPairs.c)
 *     NtGdiGetETM @ 0x1C0158E00 (NtGdiGetETM.c)
 *     GreGetRealizationInfo @ 0x1C0166578 (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C01675D8 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027843C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0291E60 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00466DC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00497A0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C004B1FC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00965B8 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0097464 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0097E64 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0098400 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0098428 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C009DB6C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00B8770 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0102610 (EngUnmapFontFileFD.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0114B4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C011E100 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C011FDC0 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C011FE78 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     Win32FileInfo @ 0x1C0120E44 (Win32FileInfo.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012397C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C013F4B8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026AB64 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A16B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A18F0 (vRemoveAllInactiveRFONTs.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02B3658 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  int v6; // r13d
  __int64 v7; // rdx
  bool v8; // bl
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // edi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct PDEV *v15; // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // ebx
  __int64 v27; // rdx
  int v28; // ebx
  int v29; // ebx
  int v30; // eax
  __int64 v31; // r8
  int v32; // r12d
  __int64 v33; // rcx
  int v34; // r10d
  _DWORD *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // ecx
  struct RFONT **v39; // rsi
  int v40; // r14d
  __int64 v41; // rdx
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned int v47; // esi
  int InactiveHelper; // eax
  struct PFE *v49; // rcx
  int v50; // r15d
  __int64 v51; // rbx
  struct XDCOBJ *v52; // r15
  bool v53; // cf
  int v54; // ecx
  int v55; // eax
  unsigned int v56; // r12d
  struct PFE *v57; // rax
  struct PFE *v58; // rsi
  __int64 v59; // r14
  int v60; // ecx
  unsigned int v61; // r15d
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  struct tagLOGFONTW *v66; // rdx
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  int v70; // r8d
  unsigned int v71; // esi
  __int64 v72; // rcx
  int v73; // r14d
  __int64 v74; // rax
  __int64 v75; // rdx
  RFONTOBJ *v76; // r12
  __int64 v77; // r15
  struct PFE *v78; // rax
  int v79; // ecx
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rdx
  int v83; // ecx
  int v84; // eax
  __int64 v85; // rdx
  const void *v86; // r14
  struct XDCOBJ *v87; // r15
  struct PFE *v88; // rbx
  bool v89; // r15
  __int64 v90; // rsi
  unsigned int v91; // r14d
  unsigned int i; // ebx
  struct DCOBJ *v93; // rax
  __int64 v94; // rax
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r10
  __int64 v98; // r11
  _QWORD *v99; // r8
  int v100; // r8d
  int v101; // r8d
  __int64 v102; // rax
  __int64 v103; // rdx
  _QWORD *v104; // r8
  _QWORD *v105; // rcx
  struct DCOBJ *v106; // rdx
  size_t v107; // rsi
  unsigned int v108; // eax
  struct tagLOGFONTW *v109; // rax
  struct tagLOGFONTW *v110; // rbx
  PFEOBJ *v111; // rcx
  __int64 v112; // rax
  int v113; // edx
  __int64 v114; // rcx
  __int64 v115; // r14
  unsigned int v117; // [rsp+28h] [rbp-D8h]
  __int64 v118; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v119; // [rsp+68h] [rbp-98h]
  unsigned int v120; // [rsp+6Ch] [rbp-94h] BYREF
  struct PFE *v121; // [rsp+70h] [rbp-90h] BYREF
  int v122; // [rsp+78h] [rbp-88h]
  struct DCOBJ *v123; // [rsp+80h] [rbp-80h]
  int v124[2]; // [rsp+88h] [rbp-78h] BYREF
  struct RFONT *v125; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v126; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v127; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v128; // [rsp+A8h] [rbp-58h] BYREF
  RFONTOBJ *v129; // [rsp+B0h] [rbp-50h]
  __int64 v130; // [rsp+B8h] [rbp-48h] BYREF
  int v131; // [rsp+C0h] [rbp-40h]
  int v132; // [rsp+C4h] [rbp-3Ch]
  __int64 v133; // [rsp+C8h] [rbp-38h]
  __int64 v134; // [rsp+D0h] [rbp-30h]
  _QWORD v135[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v136; // [rsp+E8h] [rbp-18h]
  __int64 v137; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v138; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v139; // [rsp+100h] [rbp+0h] BYREF
  __int64 v140; // [rsp+108h] [rbp+8h] BYREF
  int v141; // [rsp+110h] [rbp+10h]
  int v142; // [rsp+114h] [rbp+14h]
  _QWORD v143[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v144[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v145; // [rsp+140h] [rbp+40h] BYREF
  __int64 v146; // [rsp+150h] [rbp+50h] BYREF
  __int64 v147; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v148; // [rsp+170h] [rbp+70h]
  struct _FD_XFORM v149; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v150[112]; // [rsp+190h] [rbp+90h] BYREF

  v129 = this;
  v119 = a4;
  v122 = a3;
  v123 = a2;
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 0LL;
  }
  v6 = 0;
  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || !KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    v8 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      && UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
    {
      if ( (v8 || !(unsigned int)UserIsUserCritSecIn())
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        goto LABEL_13;
      }
      return 0LL;
    }
  }
LABEL_13:
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 1744LL);
  *(_QWORD *)this = v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 504);
    v11 = 0;
    if ( v10 )
    {
      GreAcquireSemaphore(v10);
      v12 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v12 & 8) != 0 )
      {
        v11 = 1;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v12 & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
      GreReleaseSemaphoreInternal(v10);
      if ( v11 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v15 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v16 = *((_DWORD *)v15 + 10);
            if ( (v16 & 0x2000) == 0 )
            {
              if ( (v16 & 0x8000) == 0 )
                break;
              v17 = *(_QWORD *)(*((_QWORD *)v15 + 224) + 48LL);
              if ( v17 == PsGetCurrentProcessWin32Process(v14, v13) )
                break;
            }
            v15 = *(struct PDEV **)v15;
            if ( !v15 )
              goto LABEL_25;
          }
          PDEV::IncrementClientReferenceCount(v15);
        }
LABEL_25:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v15 )
        {
          *(_QWORD *)v124 = v15;
          vRemoveAllInactiveRFONTs(v15);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v15 = *(struct PDEV **)v15;
          if ( v15 )
          {
            while ( 1 )
            {
              v20 = *((_DWORD *)v15 + 10);
              if ( (v20 & 0x2000) == 0 )
              {
                if ( (v20 & 0x8000) == 0 )
                  break;
                v21 = *(_QWORD *)(*((_QWORD *)v15 + 224) + 48LL);
                if ( v21 == PsGetCurrentProcessWin32Process(v19, v18) )
                  break;
              }
              v15 = *(struct PDEV **)v15;
              if ( !v15 )
                goto LABEL_33;
            }
            PDEV::IncrementClientReferenceCount(v15);
          }
LABEL_33:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(v124, 0LL);
        }
      }
    }
  }
  v22 = *(_QWORD *)a2;
  LOBYTE(v7) = 10;
  v118 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 976) + 296LL);
  v24 = HmgShareLock(v23, v7);
  v128 = v24;
  v25 = v24;
  if ( !v24 )
    goto LABEL_260;
  if ( (*(_DWORD *)(v24 + 28) & 1) == 0 )
    goto LABEL_44;
  UserGetHDEV();
  v26 = *(_DWORD *)(v25 + 24);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v25);
  v25 = 0LL;
  if ( !v118 )
  {
LABEL_260:
    RFONTOBJ::vMakeInactive(this);
    *(_QWORD *)this = 0LL;
    v47 = 0;
    *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = 0LL;
    goto LABEL_261;
  }
  v28 = v26 - 4;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( v29 )
    {
      if ( v29 == 1 )
        v23 = *(_QWORD *)(v118 + 1448);
    }
    else
    {
      v23 = *(_QWORD *)(v118 + 1440);
    }
  }
  else
  {
    v23 = *(_QWORD *)(v118 + 1432);
  }
  LOBYTE(v27) = 10;
  v25 = HmgShareLock(v23, v27);
  v128 = v25;
LABEL_44:
  if ( !v25 )
    goto LABEL_260;
  v30 = lNormAngle((unsigned int)-*(_DWORD *)(v25 + 284));
  v31 = *(_QWORD *)a2;
  v32 = v30;
  v131 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  v132 = *(_DWORD *)(*(_QWORD *)(v31 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v31 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v130, a2, 0x204u, 0);
    v33 = v130;
  }
  else
  {
    v33 = v31 + 320;
    v130 = v31 + 320;
  }
  if ( v32 || (*(_DWORD *)(v33 + 32) & 1) == 0 || *(float *)(v33 + 12) < 0.0 || (v34 = 1, *(float *)v33 < 0.0) )
    v34 = 0;
  v35 = *(_DWORD **)this;
  v124[0] = v34;
  if ( !v35 )
  {
    v36 = *(_QWORD *)a2;
LABEL_55:
    *(_QWORD *)(v36 + 1728) = *(_QWORD *)(*(_QWORD *)(v36 + 976) + 296LL);
    goto LABEL_56;
  }
  v41 = *(_QWORD *)a2;
  v36 = *(_QWORD *)a2;
  v42 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  if ( *(_QWORD *)(v42 + 296) != *(_QWORD *)(*(_QWORD *)a2 + 1728LL) || v34 != 1 && v35[160] )
    goto LABEL_55;
  if ( v35[52] == *(_DWORD *)(v42 + 208) && v122 == v35[164] && v119 == (v35[21] & 6) )
  {
    if ( (*(_DWORD *)(v41 + 36) & 1) == 0 && *(_DWORD *)(v41 + 32) != 1 )
      goto LABEL_82;
    v43 = *(_DWORD *)(*(_QWORD *)(v41 + 1744) + 12LL);
    if ( (v43 & 0x200004) == 0 )
      goto LABEL_82;
    v44 = 0LL;
    if ( (gulFontInformation & 2) != 0 )
    {
      v44 = 0x10000LL;
      if ( (gulFontInformation & 0x10) != 0 )
        v44 = 268500992LL;
    }
    if ( (v43 & 4) != 0 )
    {
      v45 = v43 & 0x10010000;
      if ( (_DWORD)v44 != (_DWORD)v45 )
        goto LABEL_56;
    }
    else
    {
      if ( (((unsigned int)v44 ^ v43) & 0x10000) != 0 )
        goto LABEL_56;
      v45 = v43 & 0x10010000;
    }
    if ( !(_DWORD)v45 || !(unsigned int)UserIsRemoteConnection(v45, v44, gulFontInformation, 268500992LL) )
    {
LABEL_82:
      v46 = *(_QWORD *)a2;
      if ( *(float *)(*(_QWORD *)a2 + 452LL) == 0.0 || EFLOAT::bIsZero((EFLOAT *)(v46 + 456)) )
      {
        if ( (*(_DWORD *)(v46 + 252) & 1) == 0 )
        {
LABEL_87:
          v47 = 1;
          goto LABEL_261;
        }
        if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v130, (struct MATRIX *)(*(_QWORD *)this + 172LL)) )
        {
          *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
          goto LABEL_87;
        }
      }
    }
  }
LABEL_56:
  if ( (*(_DWORD *)(v118 + 40) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v118);
  v37 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v37 + 660) )
  {
    v38 = *(_DWORD *)(v37 + 840);
    if ( v38 <= 0xA )
    {
      memset(v150, 0, sizeof(v150));
      v39 = (struct RFONT **)v150;
      v40 = 0;
    }
    else
    {
      v39 = (struct RFONT **)PALLOCMEM2(8 * v38 + 32, 1718382187LL, 1);
      if ( !v39 )
        goto LABEL_96;
      v40 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v39);
    v49 = *v39;
    v50 = InactiveHelper;
    if ( *v39 )
    {
      v51 = 0LL;
      do
      {
        v121 = v49;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v121, 0LL);
        v121 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v121);
        v49 = v39[++v51];
      }
      while ( v49 );
    }
    if ( v40 )
      Win32FreePool(v39);
    if ( v50 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
LABEL_96:
  v52 = v123;
  v53 = *(_BYTE *)(v25 + 297) != 0;
  v135[0] = 0LL;
  v54 = (v53 ? 0x20 : 0) | 0x80;
  if ( !*(_BYTE *)(v25 + 298) )
    v54 = v53 ? 0x20 : 0;
  *(_DWORD *)(*(_QWORD *)v123 + 1736LL) = v54;
  *(_DWORD *)(*(_QWORD *)v52 + 1740LL) = v32;
  *(_QWORD *)&v149.eXX = 0LL;
  *(_QWORD *)&v149.eYX = 0LL;
  v126 = 0LL;
  if ( (*(_DWORD *)(v118 + 40) & 1) != 0 || (v55 = *(_DWORD *)(v25 + 28), LODWORD(v125) = 2, (v55 & 2) == 0) )
    LODWORD(v125) = 0;
  v139 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v56 = v119 & 4;
  v57 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v128, v52, &v120, &v126, &v127, v56);
  v121 = v57;
  v58 = v57;
  if ( !v57 )
  {
LABEL_245:
    *(_QWORD *)v129 = 0LL;
    *(_QWORD *)(*(_QWORD *)v52 + 1744LL) = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v139);
    goto LABEL_246;
  }
  v59 = *(_QWORD *)v57;
  v145 = v59;
  v60 = *(_DWORD *)(v59 + 52);
  if ( (v60 & 0x2000) != 0 )
  {
LABEL_112:
    if ( (unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v145) )
    {
      GreAcquireSemaphore(ghsemPublicPFT);
      v58 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v128, v52, &v120, &v126, &v127, v56);
      v121 = v58;
      goto LABEL_114;
    }
    goto LABEL_245;
  }
  if ( (v60 & 0x1000) == 0 )
    goto LABEL_114;
  v61 = 0;
  if ( !*(_DWORD *)(v59 + 36) )
    goto LABEL_110;
  v62 = *(_QWORD *)(v59 + 200);
  do
  {
    v134 = 0LL;
    v133 = 0LL;
    Win32FileInfo(*(PCWSTR *)(*(_QWORD *)(v62 + 8LL * v61) + 80LL));
    v62 = *(_QWORD *)(v59 + 200);
    v63 = *(_QWORD *)(v62 + 8LL * v61);
    if ( *(_QWORD *)v63 != v133 || *(_DWORD *)(v63 + 24) != (_DWORD)v134 )
    {
      *(_DWORD *)(v59 + 52) |= 0x2000u;
      v52 = v123;
      goto LABEL_112;
    }
    ++v61;
  }
  while ( v61 < *(_DWORD *)(v59 + 36) );
  v60 = *(_DWORD *)(v59 + 52);
  v58 = v121;
LABEL_110:
  v52 = v123;
  *(_DWORD *)(v59 + 52) = v60 & 0xFFFFEFFF;
LABEL_114:
  if ( !v58 )
    goto LABEL_245;
  v64 = *(_QWORD *)v52;
  v143[0] = *((_QWORD *)v58 + 4);
  v141 = *(_DWORD *)(*(_QWORD *)(v64 + 976) + 208LL);
  v142 = *(_DWORD *)(*(_QWORD *)(v64 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v64 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v140, v52, 0x204u, 0);
    v64 = *(_QWORD *)v52;
  }
  else
  {
    v140 = v64 + 320;
  }
  v65 = *(_QWORD *)(v64 + 976);
  v66 = (struct tagLOGFONTW *)(v25 + 276);
  if ( !(*(_DWORD *)(v65 + 208) == 1
       ? bGetNtoD_Win31(&v149, v66, (struct IFIOBJ *)v143, v52, (unsigned int)v125, &v126, 0)
       : bGetNtoD(&v149, v66, (struct IFIOBJ *)v143, v52, &v126)) )
    goto LABEL_245;
  eYX = v149.eYX;
  if ( LODWORD(v149.eYX) )
  {
    LODWORD(eYX) = LODWORD(v149.eYX) ^ 0x80000000;
    LODWORD(v149.eYX) ^= 0x80000000;
  }
  eYY = v149.eYY;
  if ( LODWORD(v149.eYY) )
  {
    LODWORD(eYY) = LODWORD(v149.eYY) ^ 0x80000000;
    LODWORD(v149.eYY) ^= 0x80000000;
  }
  v70 = *(_DWORD *)(v143[0] + 48LL);
  if ( (v70 & 0x1000000) != 0 )
  {
    v149.eXX = eYY;
    v149.eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(v149.eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  if ( (v70 & 1) != 0 && *(int *)(v25 + 276) <= 0 )
    v120 |= 0x8000u;
  v135[0] = *(_QWORD *)v58;
  v136 = 0;
  ++*(_DWORD *)(v135[0] + 68LL);
  if ( ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  v71 = v120;
  v72 = *(_QWORD *)(*(_QWORD *)v52 + 976LL);
  v137 = ghsemRFONTList;
  v73 = *(_DWORD *)(v72 + 208);
  GreAcquireSemaphore(ghsemRFONTList);
  v74 = v118;
  if ( (*(_DWORD *)(v118 + 40) & 0x800000) != 0 )
    v75 = *(_QWORD *)(*(_QWORD *)(v118 + 3520) + 1520LL);
  else
    v75 = *(_QWORD *)(v118 + 1520);
  v76 = v129;
  v77 = *(_QWORD *)&v149.eYX;
  *(_QWORD *)v129 = v75;
  if ( !v75 )
  {
LABEL_162:
    if ( (*(_DWORD *)(v74 + 40) & 0x800000) != 0 )
      v82 = *(_QWORD *)(*(_QWORD *)(v74 + 3520) + 1528LL);
    else
      v82 = *(_QWORD *)(v74 + 1528);
    *(_QWORD *)v76 = v82;
    if ( v82 )
    {
      while ( 1 )
      {
        if ( *(struct PFE **)(v82 + 120) == v121 && v119 == (*(_DWORD *)(v82 + 84) & 6) )
        {
          v83 = *(_DWORD *)(v82 + 12);
          if ( ((v71 ^ v83) & 0xE000) == 0 )
          {
            v84 = (v71 ^ v83) & 0x50010000;
            if ( !v84 )
              goto LABEL_267;
            if ( (v71 & 0x10000) != 0 && (v83 & 0x20000) != 0 )
              v84 = (v71 ^ v83) & 0x50000000;
            if ( (v71 & 0x10000000) != 0 && (v83 & 0x10000000) == 0 && (v83 & 0x2000000) != 0 || !v84 )
            {
LABEL_267:
              if ( !*(_DWORD *)(v82 + 40)
                && *(_QWORD *)&v149.eXX == *(_QWORD *)(v82 + 136)
                && v77 == *(_QWORD *)(v82 + 144)
                && v122 == *(_DWORD *)(v82 + 656) )
              {
                if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v130, (struct MATRIX *)(v82 + 172)) )
                {
                  v85 = *(_QWORD *)v76;
                  if ( *(_DWORD *)(*(_QWORD *)v76 + 208LL) == v73 && (v124[0] || !*(_DWORD *)(v85 + 640)) )
                    break;
                }
              }
            }
          }
        }
        v82 = *(_QWORD *)(*(_QWORD *)v76 + 672LL);
        *(_QWORD *)v76 = v82;
        if ( !v82 )
          goto LABEL_188;
      }
      v94 = v118;
      if ( (*(_DWORD *)(v118 + 40) & 0x800000) != 0 )
        v95 = *(_QWORD *)(*(_QWORD *)(v118 + 3520) + 1528LL);
      else
        v95 = *(_QWORD *)(v118 + 1528);
      v96 = *(_QWORD *)(v85 + 664);
      v97 = *(_QWORD *)(v85 + 672);
      v98 = v96 + 664;
      if ( !v96 )
        v98 = 0LL;
      v99 = (_QWORD *)(v97 + 664);
      if ( !v97 )
        v99 = 0LL;
      if ( v96 )
      {
        *(_QWORD *)(v98 + 8) = v97;
        if ( v99 )
          *v99 = *(_QWORD *)(v85 + 664);
      }
      else
      {
        v95 = *(_QWORD *)(v85 + 672);
        if ( !v99 )
        {
LABEL_211:
          if ( (*(_DWORD *)(v94 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v94 + 3520) + 1528LL) = v95;
          else
            *(_QWORD *)(v94 + 1528) = v95;
          if ( (*(_DWORD *)(v118 + 40) & 0x800000) != 0 )
            v100 = *(_DWORD *)(*(_QWORD *)(v118 + 3520) + 1536LL);
          else
            v100 = *(_DWORD *)(v118 + 1536);
          v101 = v100 - 1;
          if ( (*(_DWORD *)(v118 + 40) & 0x800000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v118 + 3520) + 1536LL) = v101;
          else
            *(_DWORD *)(v118 + 1536) = v101;
          v102 = v118;
          if ( (*(_DWORD *)(v118 + 40) & 0x800000) != 0 )
            v103 = *(_QWORD *)(*(_QWORD *)(v118 + 3520) + 1520LL);
          else
            v103 = *(_QWORD *)(v118 + 1520);
          v104 = (_QWORD *)(v103 + 664);
          if ( !v103 )
            v104 = 0LL;
          v105 = (_QWORD *)(*(_QWORD *)v76 + 664LL);
          if ( *(_QWORD *)v76 != -664LL )
          {
            *v105 = 0LL;
            v105[1] = v103;
            if ( v104 )
              *v104 = *(_QWORD *)v76;
            v103 = *(_QWORD *)v76;
            v102 = v118;
          }
          if ( (*(_DWORD *)(v102 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v102 + 3520) + 1520LL) = v103;
          else
            *(_QWORD *)(v102 + 1520) = v103;
          *(_DWORD *)(*(_QWORD *)v76 + 660LL) = 1;
          goto LABEL_233;
        }
        *v99 = 0LL;
      }
      v94 = v118;
      goto LABEL_211;
    }
LABEL_188:
    *(_QWORD *)v76 = 0LL;
    if ( ghsemRFONTList )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
      GreReleaseSemaphoreInternal(ghsemRFONTList);
    }
    v86 = (const void *)(v25 + 276);
    v87 = v123;
    v88 = v121;
    if ( !(unsigned int)RFONTOBJ::bRealizeFont(
                          v76,
                          v123,
                          (struct PDEVOBJ *)&v118,
                          (struct tagENUMLOGFONTEXDVW *)(v25 + 276),
                          v121,
                          &v149,
                          &v126,
                          v120,
                          0,
                          v122,
                          v124[0],
                          v119) )
    {
      v89 = 0;
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)&v147,
        (struct PFFOBJ *)v135);
      v90 = v147;
      v91 = v148;
      if ( v148 == *(_DWORD *)(v147 + 36) )
        v89 = (unsigned int)RFONTOBJ::bRealizeFont(
                              v76,
                              v123,
                              (struct PDEVOBJ *)&v118,
                              (struct tagENUMLOGFONTEXDVW *)(v25 + 276),
                              v88,
                              &v149,
                              &v126,
                              v120,
                              0,
                              v122,
                              v124[0],
                              v119) != 0;
      for ( i = 0; i < v91; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v90 + 200) + 8LL * i++)) )
      {
        if ( i >= *(_DWORD *)(v90 + 36) )
          break;
      }
      if ( !v89 )
      {
        v93 = v123;
        *(_QWORD *)v76 = 0LL;
        *(_QWORD *)(*(_QWORD *)v93 + 1744LL) = 0LL;
LABEL_246:
        v47 = 0;
        goto LABEL_247;
      }
      v88 = v121;
      v86 = (const void *)(v25 + 276);
      v87 = v123;
    }
    if ( *(_DWORD *)(v25 + 280) )
    {
      v138 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v107 = 420LL;
      v146 = *((_QWORD *)v88 + 4);
      v108 = *(_DWORD *)(v25 + 272);
      if ( v108 < 0x1A4 )
        v107 = v108;
      v109 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v107);
      v110 = v109;
      if ( v109 )
      {
        memmove(v109, v86, v107);
        v110->lfWidth = 0;
        if ( !PFEOBJ::bSetFontXform(
                v111,
                v87,
                v110,
                (struct _FD_XFORM *)(*(_QWORD *)v76 + 152LL),
                (unsigned int)v125,
                v117,
                &v126,
                (struct IFIOBJ *)&v146,
                0) )
          *(struct _FD_XFORM *)(*(_QWORD *)v76 + 152LL) = v149;
        FreeTmpBuffer(v110);
      }
      else
      {
        *(struct _FD_XFORM *)(*(_QWORD *)v76 + 152LL) = v149;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v138);
    }
    v112 = *(_QWORD *)v76;
    v113 = 1;
    v114 = *(_QWORD *)v87;
    v47 = 1;
    v136 = 1;
    *(_QWORD *)(v114 + 1744) = v112;
    *(_DWORD *)(*(_QWORD *)v87 + 252LL) &= ~1u;
    goto LABEL_248;
  }
  v78 = v121;
  while ( *(struct PFE **)(v75 + 120) != v78 )
  {
LABEL_160:
    v75 = *(_QWORD *)(v75 + 672);
    *(_QWORD *)v76 = v75;
    if ( !v75 )
    {
      v74 = v118;
      goto LABEL_162;
    }
  }
  if ( v119 != (*(_DWORD *)(v75 + 84) & 6) )
  {
LABEL_159:
    v78 = v121;
    goto LABEL_160;
  }
  v79 = *(_DWORD *)(v75 + 12);
  if ( ((v71 ^ v79) & 0xE000) != 0 )
    goto LABEL_158;
  v80 = (v71 ^ v79) & 0x50010000;
  if ( v80 )
  {
    if ( (v71 & 0x10000) != 0 && (v79 & 0x20000) != 0 )
      v80 = (v71 ^ v79) & 0x50000000;
    if ( ((v71 & 0x10000000) == 0 || (v79 & 0x10000000) != 0 || (v79 & 0x2000000) == 0) && v80 )
      goto LABEL_158;
  }
  if ( *(_DWORD *)(v75 + 40)
    || *(_QWORD *)&v149.eXX != *(_QWORD *)(v75 + 136)
    || v77 != *(_QWORD *)(v75 + 144)
    || v122 != *(_DWORD *)(v75 + 656)
    || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v130, (struct MATRIX *)(v75 + 172))
    || (v81 = *(_QWORD *)v76, *(_DWORD *)(*(_QWORD *)v76 + 208LL) != v73)
    || !v124[0] && *(_DWORD *)(v81 + 640) )
  {
LABEL_158:
    v75 = *(_QWORD *)v76;
    goto LABEL_159;
  }
  ++*(_DWORD *)(v81 + 660);
  v125 = PDEVOBJ::prfntActive((PDEVOBJ *)&v118);
  if ( v125 != *(struct RFONT **)v76 )
  {
    RFONTOBJ::vRemove((__int64)v76, (unsigned __int64 *)&v125, 1);
    RFONTOBJ::vInsert((unsigned __int64 *)v76, (unsigned __int64 *)&v125, 1);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v118, v125);
  }
LABEL_233:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v137);
  v47 = 1;
  v106 = v123;
  *(_QWORD *)(*(_QWORD *)v123 + 1744LL) = *(_QWORD *)v76;
  *(_DWORD *)(*(_QWORD *)v106 + 252LL) &= ~1u;
LABEL_247:
  v113 = v136;
LABEL_248:
  v115 = v135[0];
  if ( v135[0] && !v113 )
  {
    memset(v144, 0, sizeof(v144));
    GreAcquireSemaphore(ghsemPublicPFT);
    --*(_DWORD *)(v115 + 68);
    if ( !*(_DWORD *)(v115 + 56)
      && !*(_DWORD *)(v115 + 60)
      && !*(_QWORD *)(v115 + 144)
      && !*(_DWORD *)(v115 + 68)
      && !*(_DWORD *)(v115 + 64) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)v135, (struct PFFCLEANUP *)v144);
      v6 = 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    if ( v6 )
      vCleanupFontFile((struct PFFCLEANUP *)v144);
  }
LABEL_261:
  if ( v25 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v25);
  return v47;
}
