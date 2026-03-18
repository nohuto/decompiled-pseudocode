/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30
 * Callers:
 *     GreGetTextCharsetInfo @ 0x1C0024074 (GreGetTextCharsetInfo.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00805C4 (GreGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00827A0 (NtGdiGetWidthTable.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00833CC (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x1C00C4B20 (NtGdiGetLinkedUFIs.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 *     GreGetUFI @ 0x1C010A3CC (GreGetUFI.c)
 *     GreGetCharWidthW @ 0x1C010D1C4 (GreGetCharWidthW.c)
 *     GreFontIsLinked @ 0x1C01103C4 (GreFontIsLinked.c)
 *     GreGetTextMetricsW @ 0x1C01111FC (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C0112710 (NtGdiQueryFontAssocInfo.c)
 *     GreGetGlyphIndicesW @ 0x1C0115198 (GreGetGlyphIndicesW.c)
 *     GreGetFontUnicodeRanges @ 0x1C0118F94 (GreGetFontUnicodeRanges.c)
 *     GreGetCharWidthInfo @ 0x1C011DB08 (GreGetCharWidthInfo.c)
 *     GreGetRealizationInfo @ 0x1C013790C (GreGetRealizationInfo.c)
 *     NtGdiGetETM @ 0x1C0143A60 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0144014 (GreGetKerningPairs.c)
 *     GreGetTextExtentExW @ 0x1C01626E4 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025F43C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027C0B8 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0027330 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0028C38 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0084E4C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00855CC (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008605C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00863BC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00863E4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0086C2C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CC74 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     Win32FileInfo @ 0x1C0091B10 (Win32FileInfo.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C009A850 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00C5D50 (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00CBC24 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00CBC84 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C010F070 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0130AE4 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C015F19C (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C02519C4 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C028C03C (vRemoveAllInactiveRFONTs.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C029D264 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  struct XDCOBJ *v5; // r12
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  struct PDEV *v13; // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // ebx
  __int64 v24; // rdx
  int v25; // ebx
  int v26; // eax
  __int64 v27; // r8
  int v28; // r15d
  __int64 v29; // rcx
  int v30; // r9d
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // esi
  const struct SEMOBJSHARED *v39; // rdx
  bool v40; // bl
  unsigned int v41; // ecx
  struct RFONT **v42; // rdi
  int v43; // esi
  int InactiveHelper; // eax
  struct RFONT *v45; // rcx
  int v46; // r14d
  __int64 v47; // rbx
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // r12d
  struct PFE *v51; // rax
  struct PFE *v52; // rsi
  __int64 v53; // r14
  int v54; // ecx
  unsigned int v55; // r15d
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct DCOBJ *v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rax
  struct tagLOGFONTW *v61; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  int v65; // r8d
  unsigned int v66; // ebx
  int v67; // r12d
  __int64 v68; // rax
  struct RFONT *v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // r15
  __int64 v72; // rcx
  int v73; // edx
  int v74; // eax
  __int64 v75; // rax
  struct RFONT *v76; // rdx
  int v77; // ebx
  __int64 v78; // rdx
  int v79; // ecx
  int v80; // eax
  __int64 v81; // rdx
  struct DCOBJ *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r10
  __int64 v87; // r11
  _QWORD *v88; // r8
  int v89; // r8d
  int v90; // r8d
  __int64 v91; // rax
  __int64 v92; // rdx
  _QWORD *v93; // r8
  _QWORD *v94; // rcx
  struct XDCOBJ *v95; // r12
  struct PFE *v96; // rbx
  size_t v97; // rsi
  unsigned int v98; // eax
  struct tagLOGFONTW *v99; // rax
  struct tagLOGFONTW *v100; // rbx
  PFEOBJ *v101; // rcx
  __int64 v102; // rax
  int v103; // edx
  __int64 v104; // rcx
  __int64 v105; // rax
  struct DCOBJ *v106; // rax
  __int64 v107; // r15
  int v109; // [rsp+28h] [rbp-D8h]
  unsigned int v110; // [rsp+28h] [rbp-D8h]
  __int64 v111; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v112; // [rsp+68h] [rbp-98h]
  unsigned int v113; // [rsp+6Ch] [rbp-94h] BYREF
  int v114; // [rsp+70h] [rbp-90h]
  int v115; // [rsp+74h] [rbp-8Ch]
  struct DCOBJ *v116; // [rsp+78h] [rbp-88h]
  struct PFE *v117; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v118; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v119; // [rsp+90h] [rbp-70h] BYREF
  __int64 v120; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v121; // [rsp+A0h] [rbp-60h] BYREF
  struct RFONT *v122; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v123; // [rsp+B0h] [rbp-50h] BYREF
  int v124; // [rsp+B8h] [rbp-48h]
  int v125; // [rsp+BCh] [rbp-44h]
  __int64 v126; // [rsp+C0h] [rbp-40h]
  __int64 v127; // [rsp+C8h] [rbp-38h]
  struct RFONT *v128; // [rsp+D0h] [rbp-30h] BYREF
  int v129; // [rsp+D8h] [rbp-28h]
  __int64 v130; // [rsp+E0h] [rbp-20h] BYREF
  int v131; // [rsp+F0h] [rbp-10h]
  __int64 v132; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v133; // [rsp+100h] [rbp+0h] BYREF
  __int64 v134; // [rsp+108h] [rbp+8h] BYREF
  __int64 v135; // [rsp+110h] [rbp+10h] BYREF
  int v136; // [rsp+118h] [rbp+18h]
  int v137; // [rsp+11Ch] [rbp+1Ch]
  _QWORD v138[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v139; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v140[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v141[16]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v142; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v143[24]; // [rsp+170h] [rbp+70h] BYREF
  _FD_XFORM v144; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v145[112]; // [rsp+1A0h] [rbp+A0h] BYREF

  v112 = a4;
  v5 = a2;
  v115 = a3;
  v116 = a2;
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
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
    {
      KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
      goto LABEL_13;
    }
    if ( !(unsigned int)UserIsUserCritSecIn()
      && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
      && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
    {
      KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
      goto LABEL_13;
    }
    return 0LL;
  }
LABEL_13:
  v8 = *(_QWORD *)(*(_QWORD *)v5 + 1768LL);
  *(_QWORD *)this = v8;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 504);
    v10 = 0;
    if ( v9 )
    {
      GreAcquireSemaphore(v9);
      v11 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v11 & 8) != 0 )
      {
        v10 = 1;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v11 & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v9);
      GreReleaseSemaphoreInternal(v9);
      if ( v10 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v13 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v14 = *((_DWORD *)v13 + 10);
            if ( (v14 & 0x2000) == 0 )
            {
              if ( (v14 & 0x8000) == 0 )
                break;
              v15 = *(_QWORD *)(*((_QWORD *)v13 + 224) + 48LL);
              if ( v15 == PsGetCurrentProcessWin32Process(v12) )
                break;
            }
            v13 = *(struct PDEV **)v13;
            if ( !v13 )
              goto LABEL_25;
          }
          PDEV::IncrementClientReferenceCount(v13);
        }
LABEL_25:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v13 )
        {
          v117 = v13;
          vRemoveAllInactiveRFONTs(v13);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v13 = *(struct PDEV **)v13;
          if ( v13 )
          {
            while ( 1 )
            {
              v17 = *((_DWORD *)v13 + 10);
              if ( (v17 & 0x2000) == 0 )
              {
                if ( (v17 & 0x8000) == 0 )
                  break;
                v18 = *(_QWORD *)(*((_QWORD *)v13 + 224) + 48LL);
                if ( v18 == PsGetCurrentProcessWin32Process(v16) )
                  break;
              }
              v13 = *(struct PDEV **)v13;
              if ( !v13 )
                goto LABEL_33;
            }
            PDEV::IncrementClientReferenceCount(v13);
          }
LABEL_33:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v117, 0LL);
        }
      }
    }
  }
  v19 = *(_QWORD *)v5;
  LOBYTE(v7) = 10;
  v111 = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 976) + 296LL);
  v21 = HmgShareLock(v20, v7);
  v120 = v21;
  v22 = v21;
  if ( !v21 )
    goto LABEL_257;
  if ( (*(_DWORD *)(v21 + 28) & 1) == 0 )
    goto LABEL_44;
  UserGetHDEV();
  v23 = *(_DWORD *)(v22 + 24);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v22);
  v22 = 0LL;
  if ( !v111 )
  {
LABEL_257:
    RFONTOBJ::vMakeInactive(this);
    *(_QWORD *)this = 0LL;
    v38 = 0;
    *(_QWORD *)(*(_QWORD *)v5 + 1768LL) = 0LL;
    goto LABEL_258;
  }
  if ( v23 == 6 )
  {
    v20 = *(_QWORD *)(v111 + 1448);
  }
  else
  {
    v25 = v23 - 4;
    if ( v25 )
    {
      if ( v25 == 1 )
        v20 = *(_QWORD *)(v111 + 1440);
    }
    else
    {
      v20 = *(_QWORD *)(v111 + 1432);
    }
  }
  LOBYTE(v24) = 10;
  v22 = HmgShareLock(v20, v24);
  v120 = v22;
LABEL_44:
  if ( !v22 )
    goto LABEL_257;
  v26 = lNormAngle((unsigned int)-*(_DWORD *)(v22 + 284));
  v27 = *(_QWORD *)v5;
  v28 = v26;
  v124 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 976LL) + 208LL);
  v125 = *(_DWORD *)(*(_QWORD *)(v27 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v27 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v123, v5, 0x204u, 0);
    v29 = v123;
  }
  else
  {
    v29 = v27 + 320;
    v123 = v27 + 320;
  }
  if ( v28 || (*(_DWORD *)(v29 + 32) & 1) == 0 || *(float *)(v29 + 12) < 0.0 || (v30 = 1, *(float *)v29 < 0.0) )
    v30 = 0;
  v31 = *(_DWORD **)this;
  v114 = v30;
  if ( v31
    && (v32 = *(_QWORD *)v5,
        v33 = *(_QWORD *)(*(_QWORD *)v5 + 976LL),
        *(_QWORD *)(v33 + 296) == *(_QWORD *)(*(_QWORD *)v5 + 1752LL))
    && (v30 == 1 || !v31[160]) )
  {
    if ( v31[52] == *(_DWORD *)(v33 + 208) && v115 == v31[164] && v112 == (v31[21] & 6) )
    {
      if ( (*(_DWORD *)(v32 + 36) & 1) == 0 && *(_DWORD *)(v32 + 32) != 1 )
        goto LABEL_73;
      v34 = *(_DWORD *)(*(_QWORD *)(v32 + 1768) + 12LL);
      if ( (v34 & 0x200004) == 0 )
        goto LABEL_73;
      v35 = 0LL;
      if ( (gulFontInformation & 2) != 0 )
      {
        v35 = 0x10000LL;
        if ( (gulFontInformation & 0x10) != 0 )
          v35 = 268500992LL;
      }
      if ( (v34 & 4) != 0 )
      {
        v36 = v34 & 0x10010000;
        if ( (_DWORD)v35 != (_DWORD)v36 )
          goto LABEL_80;
      }
      else
      {
        if ( (((unsigned int)v35 ^ v34) & 0x10000) != 0 )
          goto LABEL_80;
        v36 = v34 & 0x10010000;
      }
      if ( !(_DWORD)v36 || !(unsigned int)UserIsRemoteConnection(v36, v35, gulFontInformation, 268500992LL) )
      {
LABEL_73:
        v37 = *(_QWORD *)v5;
        if ( *(float *)(*(_QWORD *)v5 + 452LL) == 0.0 || (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v37 + 456)) )
        {
          if ( (*(_DWORD *)(v37 + 252) & 1) == 0 )
          {
LABEL_78:
            v38 = 1;
            goto LABEL_258;
          }
          if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v123, (struct MATRIX *)(*(_QWORD *)this + 172LL)) )
          {
            *(_DWORD *)(*(_QWORD *)v5 + 252LL) &= ~1u;
            goto LABEL_78;
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v5 + 1752LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 976LL) + 296LL);
  }
LABEL_80:
  if ( (*(_DWORD *)(v111 + 40) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v111);
  if ( !RFONTOBJ::bValid(this) )
    goto LABEL_97;
  SEMOBJ::SEMOBJ((SEMOBJ *)&v118, ghsemRFONTList);
  v40 = RFONTOBJ::bActive(this, v39);
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v118);
  if ( !v40 )
    goto LABEL_97;
  v41 = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( v41 <= 0xA )
  {
    memset(v145, 0, sizeof(v145));
    v42 = (struct RFONT **)v145;
    v43 = 0;
    goto LABEL_88;
  }
  v42 = (struct RFONT **)PALLOCMEM2(8 * v41 + 32);
  if ( v42 )
  {
    v43 = 1;
LABEL_88:
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v42);
    v45 = *v42;
    v46 = InactiveHelper;
    if ( *v42 )
    {
      v47 = 0LL;
      do
      {
        v128 = v45;
        v129 = 0;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v128, 0LL);
        v128 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v128);
        v45 = v42[++v47];
      }
      while ( v45 );
      v5 = v116;
    }
    if ( v43 )
      Win32FreePool(v42);
    if ( v46 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
    v6 = 0;
  }
LABEL_97:
  v22 = v120;
  v130 = 0LL;
  v48 = (*(_BYTE *)(v120 + 297) != 0 ? 0x20 : 0) | 0x80;
  if ( !*(_BYTE *)(v120 + 298) )
    v48 = *(_BYTE *)(v120 + 297) != 0 ? 0x20 : 0;
  *(_DWORD *)(*(_QWORD *)v5 + 1760LL) = v48;
  *(_DWORD *)(*(_QWORD *)v5 + 1764LL) = v28;
  if ( (*(_DWORD *)(v111 + 40) & 1) != 0 || (v49 = *(_DWORD *)(v22 + 28), v118 = 2, (v49 & 2) == 0) )
    v118 = 0;
  v134 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v50 = v112 & 4;
  v51 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v120, v116, &v113, &v119, &v121, v50);
  v117 = v51;
  v52 = v51;
  if ( !v51 )
    goto LABEL_241;
  v53 = *(_QWORD *)v51;
  v139 = v53;
  v54 = *(_DWORD *)(v53 + 52);
  if ( (v54 & 0x2000) != 0 )
    goto LABEL_117;
  if ( (v54 & 0x1000) == 0 )
    goto LABEL_112;
  v55 = 0;
  if ( !*(_DWORD *)(v53 + 36) )
    goto LABEL_111;
  v56 = *(_QWORD *)(v53 + 200);
  do
  {
    v127 = 0LL;
    v126 = 0LL;
    Win32FileInfo(*(PCWSTR *)(*(_QWORD *)(v56 + 8LL * v55) + 80LL));
    v56 = *(_QWORD *)(v53 + 200);
    v57 = *(_QWORD *)(v56 + 8LL * v55);
    if ( *(_QWORD *)v57 != v126 || *(_DWORD *)(v57 + 24) != (_DWORD)v127 )
    {
      *(_DWORD *)(v53 + 52) |= 0x2000u;
LABEL_117:
      if ( (unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v139) )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        v109 = v50;
        v58 = v116;
        v52 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v120, v116, &v113, &v119, &v121, v109);
        v117 = v52;
        goto LABEL_113;
      }
      goto LABEL_240;
    }
    ++v55;
  }
  while ( v55 < *(_DWORD *)(v53 + 36) );
  v54 = *(_DWORD *)(v53 + 52);
  v52 = v117;
LABEL_111:
  *(_DWORD *)(v53 + 52) = v54 & 0xFFFFEFFF;
LABEL_112:
  v58 = v116;
LABEL_113:
  if ( !v52 )
  {
LABEL_240:
    v6 = 0;
LABEL_241:
    v106 = v116;
    *(_QWORD *)this = 0LL;
    v105 = *(_QWORD *)v106;
    goto LABEL_242;
  }
  v59 = *(_QWORD *)v58;
  v138[0] = *((_QWORD *)v52 + 4);
  v136 = *(_DWORD *)(*(_QWORD *)(v59 + 976) + 208LL);
  v137 = *(_DWORD *)(*(_QWORD *)(v59 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v59 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v135, v58, 0x204u, 0);
    v59 = *(_QWORD *)v58;
  }
  else
  {
    v135 = v59 + 320;
  }
  v60 = *(_QWORD *)(v59 + 976);
  v61 = (struct tagLOGFONTW *)(v22 + 276);
  if ( *(_DWORD *)(v60 + 208) == 1 )
  {
    v6 = 0;
    NtoD_Win31 = bGetNtoD_Win31(&v144, v61, (struct IFIOBJ *)v138, (float **)v58, v118, &v119, 0);
  }
  else
  {
    NtoD_Win31 = bGetNtoD(&v144, v61, (struct IFIOBJ *)v138, v58, &v119);
    v6 = 0;
  }
  if ( !NtoD_Win31 )
  {
    *(_QWORD *)this = 0LL;
    v105 = *(_QWORD *)v58;
LABEL_242:
    *(_QWORD *)(v105 + 1768) = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v134);
    goto LABEL_243;
  }
  eYX = v144.eYX;
  if ( LODWORD(v144.eYX) )
  {
    LODWORD(eYX) = LODWORD(v144.eYX) ^ 0x80000000;
    LODWORD(v144.eYX) ^= 0x80000000;
  }
  eYY = v144.eYY;
  if ( LODWORD(v144.eYY) )
  {
    LODWORD(eYY) = LODWORD(v144.eYY) ^ 0x80000000;
    LODWORD(v144.eYY) ^= 0x80000000;
  }
  v65 = *(_DWORD *)(v138[0] + 48LL);
  if ( (v65 & 0x1000000) != 0 )
  {
    v144.eXX = eYY;
    v144.eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(v144.eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  if ( (v65 & 1) != 0 && *(int *)(v22 + 276) <= 0 )
    v113 |= 0x8000u;
  v130 = *(_QWORD *)v52;
  v131 = 0;
  ++*(_DWORD *)(v130 + 68);
  if ( ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  v66 = v113;
  v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58 + 976LL) + 208LL);
  v132 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v68 = v111;
  if ( (*(_DWORD *)(v111 + 40) & 0x800000) != 0 )
    v69 = *(struct RFONT **)(*(_QWORD *)(v111 + 3520) + 1520LL);
  else
    v69 = *(struct RFONT **)(v111 + 1520);
  v70 = *(_QWORD *)&v144.eYX;
  v71 = *(_QWORD *)&v144.eXX;
  *(_QWORD *)this = v69;
  if ( !v69 )
  {
LABEL_162:
    if ( (*(_DWORD *)(v68 + 40) & 0x800000) != 0 )
      v76 = *(struct RFONT **)(*(_QWORD *)(v68 + 3520) + 1528LL);
    else
      v76 = *(struct RFONT **)(v68 + 1528);
    *(_QWORD *)this = v76;
    if ( !v76 )
    {
LABEL_189:
      *(_QWORD *)this = 0LL;
      v77 = 0;
      goto LABEL_190;
    }
    while ( 1 )
    {
      RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v141, v76);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v141);
      v78 = *(_QWORD *)this;
      if ( *(struct PFE **)(*(_QWORD *)this + 120LL) == v117 && v112 == (*(_DWORD *)(v78 + 84) & 6) )
      {
        v79 = *(_DWORD *)(v78 + 12);
        if ( ((v66 ^ v79) & 0xE000) == 0 )
        {
          v80 = (v66 ^ v79) & 0x50010000;
          if ( !v80 )
            goto LABEL_264;
          if ( (v66 & 0x10000) != 0 && (v79 & 0x20000) != 0 )
            v80 = (v66 ^ v79) & 0x50000000;
          if ( (v66 & 0x10000000) != 0 && (v79 & 0x10000000) == 0 && (v79 & 0x2000000) != 0 || !v80 )
          {
LABEL_264:
            if ( !*(_DWORD *)(v78 + 40)
              && v71 == *(_QWORD *)(v78 + 136)
              && v70 == *(_QWORD *)(v78 + 144)
              && v115 == *(_DWORD *)(v78 + 656) )
            {
              if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v123, (struct MATRIX *)(v78 + 172)) )
              {
                v81 = *(_QWORD *)this;
                if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == v67 && (v114 || !*(_DWORD *)(v81 + 640)) )
                  break;
              }
            }
          }
        }
      }
      v76 = *(struct RFONT **)(*(_QWORD *)this + 672LL);
      *(_QWORD *)this = v76;
      if ( !v76 )
        goto LABEL_189;
    }
    v83 = v111;
    if ( (*(_DWORD *)(v111 + 40) & 0x800000) != 0 )
      v84 = *(_QWORD *)(*(_QWORD *)(v111 + 3520) + 1528LL);
    else
      v84 = *(_QWORD *)(v111 + 1528);
    v85 = *(_QWORD *)(v81 + 664);
    v86 = *(_QWORD *)(v81 + 672);
    v87 = v85 + 664;
    if ( !v85 )
      v87 = 0LL;
    v88 = (_QWORD *)(v86 + 664);
    if ( !v86 )
      v88 = 0LL;
    if ( v85 )
    {
      *(_QWORD *)(v87 + 8) = v86;
      if ( v88 )
        *v88 = *(_QWORD *)(v81 + 664);
    }
    else
    {
      v84 = *(_QWORD *)(v81 + 672);
      if ( !v88 )
      {
LABEL_205:
        if ( (*(_DWORD *)(v83 + 40) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v83 + 3520) + 1528LL) = v84;
        else
          *(_QWORD *)(v83 + 1528) = v84;
        if ( (*(_DWORD *)(v111 + 40) & 0x800000) != 0 )
          v89 = *(_DWORD *)(*(_QWORD *)(v111 + 3520) + 1536LL);
        else
          v89 = *(_DWORD *)(v111 + 1536);
        v90 = v89 - 1;
        if ( (*(_DWORD *)(v111 + 40) & 0x800000) != 0 )
          *(_DWORD *)(*(_QWORD *)(v111 + 3520) + 1536LL) = v90;
        else
          *(_DWORD *)(v111 + 1536) = v90;
        v91 = v111;
        if ( (*(_DWORD *)(v111 + 40) & 0x800000) != 0 )
          v92 = *(_QWORD *)(*(_QWORD *)(v111 + 3520) + 1520LL);
        else
          v92 = *(_QWORD *)(v111 + 1520);
        v93 = (_QWORD *)(v92 + 664);
        if ( !v92 )
          v93 = 0LL;
        v94 = (_QWORD *)(*(_QWORD *)this + 664LL);
        if ( *(_QWORD *)this != -664LL )
        {
          *v94 = 0LL;
          v94[1] = v92;
          if ( v93 )
            *v93 = *(_QWORD *)this;
          v92 = *(_QWORD *)this;
          v91 = v111;
        }
        if ( (*(_DWORD *)(v91 + 40) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v91 + 3520) + 1520LL) = v92;
        else
          *(_QWORD *)(v91 + 1520) = v92;
        v77 = 1;
        *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
        goto LABEL_190;
      }
      *v88 = 0LL;
    }
    v83 = v111;
    goto LABEL_205;
  }
  while ( 1 )
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v140, v69);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v140);
    v72 = *(_QWORD *)this;
    if ( *(struct PFE **)(*(_QWORD *)this + 120LL) != v117 || v112 != (*(_DWORD *)(v72 + 84) & 6) )
      goto LABEL_160;
    v73 = *(_DWORD *)(v72 + 12);
    if ( ((v66 ^ v73) & 0xE000) == 0 )
    {
      v74 = (v66 ^ v73) & 0x50010000;
      if ( !v74 )
        goto LABEL_265;
      if ( (v66 & 0x10000) != 0 && (v73 & 0x20000) != 0 )
        v74 = (v66 ^ v73) & 0x50000000;
      if ( (v66 & 0x10000000) != 0 && (v73 & 0x10000000) == 0 && (v73 & 0x2000000) != 0 || !v74 )
      {
LABEL_265:
        if ( !*(_DWORD *)(v72 + 40)
          && v71 == *(_QWORD *)(v72 + 136)
          && v70 == *(_QWORD *)(v72 + 144)
          && v115 == *(_DWORD *)(v72 + 656) )
        {
          if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v123, (struct MATRIX *)(v72 + 172)) )
          {
            v75 = *(_QWORD *)this;
            if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == v67 && (v114 || !*(_DWORD *)(v75 + 640)) )
              break;
          }
        }
      }
    }
    v72 = *(_QWORD *)this;
LABEL_160:
    v69 = *(struct RFONT **)(v72 + 672);
    *(_QWORD *)this = v69;
    if ( !v69 )
    {
      v68 = v111;
      goto LABEL_162;
    }
  }
  ++*(_DWORD *)(v75 + 660);
  v122 = PDEVOBJ::prfntActive((PDEVOBJ *)&v111);
  if ( v122 != *(struct RFONT **)this )
  {
    RFONTOBJ::vRemove(this, &v122, 1LL);
    RFONTOBJ::vInsert(this, &v122, 1LL);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v111, v122);
  }
  v77 = 1;
LABEL_190:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v132);
  if ( v77 )
  {
    v38 = 1;
    v82 = v116;
    *(_QWORD *)(*(_QWORD *)v116 + 1768LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)v82 + 252LL) &= ~1u;
    goto LABEL_244;
  }
  v95 = v116;
  v96 = v117;
  if ( (unsigned int)RFONTOBJ::bRealizeFont(
                       this,
                       v116,
                       (struct PDEVOBJ *)&v111,
                       (struct tagENUMLOGFONTEXDVW *)(v22 + 276),
                       v117,
                       &v144,
                       &v119,
                       v113,
                       0,
                       v115,
                       v114,
                       v112) )
  {
    if ( *(_DWORD *)(v22 + 280) )
    {
      v133 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v97 = 420LL;
      v142 = *((_QWORD *)v96 + 4);
      v98 = *(_DWORD *)(v22 + 272);
      if ( v98 < 0x1A4 )
        v97 = v98;
      v99 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v97);
      v100 = v99;
      if ( v99 )
      {
        memmove(v99, (const void *)(v22 + 276), v97);
        v100->lfWidth = 0;
        if ( !PFEOBJ::bSetFontXform(
                v101,
                v95,
                v100,
                (struct _FD_XFORM *)(*(_QWORD *)this + 152LL),
                v118,
                v110,
                &v119,
                (struct IFIOBJ *)&v142,
                0) )
          *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v144;
        FreeTmpBuffer(v100);
      }
      else
      {
        *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v144;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v133);
    }
    v102 = *(_QWORD *)this;
    v103 = 1;
    v104 = *(_QWORD *)v95;
    v38 = 1;
    v131 = 1;
    *(_QWORD *)(v104 + 1768) = v102;
    *(_DWORD *)(*(_QWORD *)v95 + 252LL) &= ~1u;
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(*(_QWORD *)v95 + 1768LL) = 0LL;
LABEL_243:
    v38 = 0;
LABEL_244:
    v103 = v131;
  }
  v107 = v130;
  if ( v130 && !v103 )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    --*(_DWORD *)(v107 + 68);
    if ( !*(_DWORD *)(v107 + 56)
      && !*(_DWORD *)(v107 + 60)
      && !*(_QWORD *)(v107 + 144)
      && !*(_DWORD *)(v107 + 68)
      && !*(_DWORD *)(v107 + 64) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)&v130, (struct PFFCLEANUP *)v143);
      v6 = 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    if ( v6 )
      vCleanupFontFile((struct PFFCLEANUP *)v143);
  }
LABEL_258:
  if ( v22 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v22);
  return v38;
}
