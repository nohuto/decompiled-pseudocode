/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C007EA60 (GreGetOutlineTextMetricsInternalW.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00803D0 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C0081284 (GreGetTextCharsetInfo.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00DFB54 (GreGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00E0EA0 (NtGdiGetWidthTable.c)
 *     GreGetCharWidthW @ 0x1C00F87A4 (GreGetCharWidthW.c)
 *     GreGetGlyphIndicesW @ 0x1C00F8CAC (GreGetGlyphIndicesW.c)
 *     GreFontIsLinked @ 0x1C00F9624 (GreFontIsLinked.c)
 *     GreGetTextMetricsW @ 0x1C00FAD74 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FBD98 (GreGetFontUnicodeRanges.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00FBED0 (NtGdiQueryFontAssocInfo.c)
 *     GreGetCharWidthInfo @ 0x1C0100AB8 (GreGetCharWidthInfo.c)
 *     NtGdiGetETM @ 0x1C0118830 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C011936C (GreGetKerningPairs.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0127D40 (NtGdiGetLinkedUFIs.c)
 *     GreGetUFI @ 0x1C012913C (GreGetUFI.c)
 *     GreGetRealizationInfo @ 0x1C013B79C (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C013CF34 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02475B8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C02681D8 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C003EDCC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0081004 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0083A20 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088CB4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088D5C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00C5438 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00CCA7C (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C00CD0D4 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE388 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00CEA9C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013D1C8 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0197020 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0197244 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0278678 (vRemoveAllInactiveRFONTs.c)
 */

__int64 __fastcall RFONTOBJ::bInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  RFONTOBJ *v5; // r15
  int SessionTextStackStatus; // eax
  __int64 v7; // rdx
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // bl
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // edi
  int v15; // eax
  __int64 v16; // rcx
  struct PDEV *v17; // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // ebx
  __int64 v29; // rdx
  int v30; // ebx
  int v31; // ebx
  int v32; // eax
  __int64 v33; // r8
  struct XDCOBJ *v34; // rsi
  int v35; // r12d
  __int64 v36; // rcx
  int v37; // r9d
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  __int64 v44; // rdx
  unsigned int v45; // esi
  __int64 v46; // rax
  unsigned int v47; // ecx
  struct RFONT **v48; // rsi
  int v49; // r14d
  int InactiveHelper; // eax
  struct RFONT *v51; // rcx
  int v52; // r15d
  __int64 v53; // rbx
  __int64 v54; // r14
  bool v55; // cf
  int v56; // ecx
  int v57; // eax
  struct PFE *v58; // rax
  struct PFE *v59; // r12
  struct tagLOGFONTW *v60; // r10
  __int64 v61; // rdx
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  int v65; // r8d
  __int64 v66; // rax
  unsigned int v67; // esi
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  int v71; // ecx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rdx
  int v75; // ecx
  int v76; // eax
  __int64 v77; // r8
  struct XDCOBJ *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r10
  __int64 v83; // r11
  _QWORD *v84; // rdx
  int v85; // r8d
  int v86; // r8d
  __int64 v87; // rax
  __int64 v88; // rdx
  _QWORD *v89; // r8
  _QWORD *v90; // rcx
  struct XDCOBJ *v91; // rdx
  size_t v92; // rsi
  unsigned int v93; // eax
  struct tagLOGFONTW *v94; // rax
  struct tagLOGFONTW *v95; // rbx
  struct XDCOBJ *v96; // rdx
  unsigned int v97; // eax
  PFEOBJ *v98; // rcx
  __int64 v99; // rax
  int v100; // edx
  __int64 v101; // rcx
  unsigned int v102; // [rsp+28h] [rbp-D8h]
  __int64 v103; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v104; // [rsp+68h] [rbp-98h]
  int v105; // [rsp+6Ch] [rbp-94h]
  unsigned int v106; // [rsp+70h] [rbp-90h] BYREF
  struct XDCOBJ *v107; // [rsp+78h] [rbp-88h]
  int v108[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v109[2]; // [rsp+88h] [rbp-78h]
  struct RFONT *v110; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v111; // [rsp+98h] [rbp-68h] BYREF
  __int64 v112; // [rsp+A0h] [rbp-60h] BYREF
  int v113; // [rsp+A8h] [rbp-58h]
  int v114; // [rsp+ACh] [rbp-54h]
  __int64 v115; // [rsp+B0h] [rbp-50h] BYREF
  struct RFONT *v116; // [rsp+B8h] [rbp-48h] BYREF
  int v117; // [rsp+C0h] [rbp-40h]
  unsigned int v118; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v119; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v120; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v121; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-18h] BYREF
  int v123; // [rsp+F0h] [rbp-10h]
  int v124; // [rsp+F4h] [rbp-Ch]
  _QWORD v125[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v126; // [rsp+108h] [rbp+8h] BYREF
  int v127; // [rsp+118h] [rbp+18h]
  __int64 v128; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v129[24]; // [rsp+130h] [rbp+30h] BYREF
  struct _FD_XFORM v130; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v131[112]; // [rsp+160h] [rbp+60h] BYREF

  v104 = a4;
  v105 = a3;
  v5 = this;
  v107 = a2;
  *(_QWORD *)v109 = this;
  SessionTextStackStatus = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
  v8 = 0;
  if ( SessionTextStackStatus != 259 )
  {
    if ( SessionTextStackStatus >= 0 )
      goto LABEL_8;
    return 0LL;
  }
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v11 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(v10, v9);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  if ( v11 || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
  {
    KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
    goto LABEL_8;
  }
  if ( (unsigned int)UserIsUserCritSecIn()
    || KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) < 0
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    return 0LL;
  }
  KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
LABEL_8:
  v12 = *(_QWORD *)(*(_QWORD *)a2 + 2152LL);
  *(_QWORD *)v5 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 496);
    v14 = 0;
    if ( v13 )
    {
      GreAcquireSemaphore(v13);
      v15 = *(_DWORD *)(*(_QWORD *)v5 + 68LL);
      if ( (v15 & 8) != 0 )
      {
        v14 = 1;
        *(_DWORD *)(*(_QWORD *)v5 + 68LL) = v15 & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v13);
      GreReleaseSemaphoreInternal(v13);
      if ( v14 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v17 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v18 = *((_DWORD *)v17 + 10);
            if ( (v18 & 0x2000) == 0 )
            {
              if ( (v18 & 0x8000) == 0 )
                break;
              v19 = *(_QWORD *)(*((_QWORD *)v17 + 223) + 48LL);
              if ( v19 == PsGetCurrentProcessWin32Process(v16) )
                break;
            }
            v17 = *(struct PDEV **)v17;
            if ( !v17 )
              goto LABEL_23;
          }
          PDEV::IncrementClientReferenceCount(v17);
        }
LABEL_23:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v17 )
        {
          *(_QWORD *)v108 = v17;
          vRemoveAllInactiveRFONTs(v17);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v17 = *(struct PDEV **)v17;
          if ( v17 )
          {
            while ( 1 )
            {
              v22 = *((_DWORD *)v17 + 10);
              if ( (v22 & 0x2000) == 0 )
              {
                if ( (v22 & 0x8000) == 0 )
                  break;
                v23 = *(_QWORD *)(*((_QWORD *)v17 + 223) + 48LL);
                if ( v23 == PsGetCurrentProcessWin32Process(v21) )
                  break;
              }
              v17 = *(struct PDEV **)v17;
              if ( !v17 )
                goto LABEL_31;
            }
            PDEV::IncrementClientReferenceCount(v17);
          }
LABEL_31:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(v108, 0LL);
        }
      }
    }
  }
  v24 = *(_QWORD *)a2;
  LOBYTE(v7) = 10;
  v103 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 80) + 176LL);
  v26 = HmgShareLock(v25, v7);
  v115 = v26;
  v27 = v26;
  if ( !v26 )
    goto LABEL_237;
  if ( (*(_DWORD *)(v26 + 28) & 1) == 0 )
    goto LABEL_42;
  UserGetHDEV();
  v28 = *(_DWORD *)(v27 + 24);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v27);
  v27 = 0LL;
  if ( !v103 )
  {
LABEL_237:
    RFONTOBJ::vMakeInactive(v5);
    *(_QWORD *)v5 = 0LL;
    v45 = 0;
    *(_QWORD *)(*(_QWORD *)a2 + 2152LL) = 0LL;
    goto LABEL_238;
  }
  v30 = v28 - 4;
  if ( v30 )
  {
    v31 = v30 - 1;
    if ( v31 )
    {
      if ( v31 == 1 )
        v25 = *(_QWORD *)(v103 + 1440);
    }
    else
    {
      v25 = *(_QWORD *)(v103 + 1432);
    }
  }
  else
  {
    v25 = *(_QWORD *)(v103 + 1424);
  }
  LOBYTE(v29) = 10;
  v27 = HmgShareLock(v25, v29);
  v115 = v27;
LABEL_42:
  if ( !v27 )
    goto LABEL_237;
  v32 = lNormAngle((unsigned int)-*(_DWORD *)(v27 + 284));
  v33 = *(_QWORD *)a2;
  v34 = a2;
  v35 = v32;
  v113 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL);
  v114 = *(_DWORD *)(*(_QWORD *)(v33 + 80) + 312LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v33 + 80) + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v112, a2, 0x204u, 0);
    v36 = v112;
  }
  else
  {
    v36 = v33 + 328;
    v112 = v33 + 328;
  }
  if ( v35 || (*(_DWORD *)(v36 + 32) & 1) == 0 || *(float *)(v36 + 12) < 0.0 || (v37 = 1, *(float *)v36 < 0.0) )
    v37 = 0;
  v38 = *(_DWORD **)v5;
  v108[0] = v37;
  if ( v38
    && (v39 = *(_QWORD *)a2,
        v40 = *(_QWORD *)(*(_QWORD *)a2 + 80LL),
        *(_QWORD *)(v40 + 176) == *(_QWORD *)(*(_QWORD *)a2 + 2136LL))
    && (v37 == 1 || !v38[157]) )
  {
    if ( v38[48] == *(_DWORD *)(v40 + 68) && v105 == v38[160] && v104 == (v38[17] & 6) )
    {
      if ( (*(_DWORD *)(v39 + 36) & 1) == 0 && *(_DWORD *)(v39 + 32) != 1 )
        goto LABEL_71;
      v41 = *(_DWORD *)(*(_QWORD *)(v39 + 2152) + 12LL);
      if ( (v41 & 0x200004) == 0 )
        goto LABEL_71;
      v42 = 0;
      if ( (gulFontInformation & 2) != 0 )
      {
        v42 = 0x10000;
        if ( (gulFontInformation & 0x10) != 0 )
          v42 = 268500992;
      }
      if ( (v41 & 4) != 0 )
      {
        v43 = v41 & 0x10010000;
        if ( v42 != v43 )
          goto LABEL_78;
      }
      else
      {
        if ( ((v41 ^ v42) & 0x10000) != 0 )
          goto LABEL_78;
        v43 = v41 & 0x10010000;
      }
      if ( !v43 || !(unsigned int)UserIsRemoteConnection() )
      {
LABEL_71:
        v44 = *(_QWORD *)a2;
        if ( *(float *)(*(_QWORD *)a2 + 460LL) == 0.0 || (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v44 + 464)) )
        {
          if ( (*(_DWORD *)(v44 + 260) & 1) == 0 )
          {
LABEL_76:
            v45 = 1;
            goto LABEL_238;
          }
          if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v112, (struct MATRIX *)(*(_QWORD *)v5 + 156LL)) )
          {
            *(_DWORD *)(*(_QWORD *)a2 + 260LL) &= ~1u;
            goto LABEL_76;
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a2 + 2136LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 176LL);
  }
LABEL_78:
  if ( (*(_DWORD *)(v103 + 40) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v103);
  v46 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 && *(_DWORD *)(v46 + 644) )
  {
    v47 = *(_DWORD *)(v46 + 824);
    if ( v47 <= 0xA )
    {
      memset(v131, 0, sizeof(v131));
      v48 = (struct RFONT **)v131;
      v49 = 0;
    }
    else
    {
      v48 = (struct RFONT **)PALLOCMEM2(8 * v47 + 32);
      if ( !v48 )
      {
        v34 = a2;
        goto LABEL_95;
      }
      v49 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper((struct RFONT **)v5, v48);
    v51 = *v48;
    v52 = InactiveHelper;
    if ( *v48 )
    {
      v53 = 0LL;
      do
      {
        v116 = v51;
        v117 = 0;
        RFONTOBJ::bMakeInactiveHelper(&v116, 0LL);
        v116 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v116);
        v51 = v48[++v53];
      }
      while ( v51 );
    }
    if ( v49 )
      Win32FreePool(v48);
    if ( v52 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
    v5 = *(RFONTOBJ **)v109;
    v34 = v107;
  }
LABEL_95:
  v54 = 0LL;
  v55 = *(_BYTE *)(v27 + 297) != 0;
  v126 = 0LL;
  v56 = (v55 ? 0x20 : 0) | 0x80;
  if ( !*(_BYTE *)(v27 + 298) )
    v56 = v55 ? 0x20 : 0;
  *(_DWORD *)(*(_QWORD *)v34 + 2144LL) = v56;
  *(_DWORD *)(*(_QWORD *)v34 + 2148LL) = v35;
  if ( (*(_DWORD *)(v103 + 40) & 1) != 0 || (v57 = *(_DWORD *)(v27 + 28), v109[0] = 2, (v57 & 2) == 0) )
    v109[0] = 0;
  v121 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v58 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v115, v34, &v106, &v111, &v118, v104 & 4);
  v59 = v58;
  if ( !v58 )
    goto LABEL_222;
  v60 = (struct tagLOGFONTW *)(v27 + 276);
  v61 = *(_QWORD *)v34;
  v125[0] = *((_QWORD *)v58 + 4);
  v123 = *(_DWORD *)(*(_QWORD *)(v61 + 80) + 68LL);
  v124 = *(_DWORD *)(*(_QWORD *)(v61 + 80) + 312LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v61 + 80) + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v122, v34, 0x204u, 0);
    v61 = *(_QWORD *)v34;
    v60 = (struct tagLOGFONTW *)(v27 + 276);
  }
  else
  {
    v122 = v61 + 328;
  }
  if ( !(*(_DWORD *)(*(_QWORD *)(v61 + 80) + 68LL) == 1
       ? bGetNtoD_Win31(&v130, v60, (struct IFIOBJ *)v125, (float **)v34, v109[0], &v111, 0)
       : bGetNtoD(&v130, v60, (struct IFIOBJ *)v125, v34, &v111)) )
  {
LABEL_222:
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(*(_QWORD *)v34 + 2152LL) = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v121);
    goto LABEL_223;
  }
  eYX = v130.eYX;
  if ( LODWORD(v130.eYX) )
  {
    LODWORD(eYX) = LODWORD(v130.eYX) ^ 0x80000000;
    LODWORD(v130.eYX) ^= 0x80000000;
  }
  eYY = v130.eYY;
  if ( LODWORD(v130.eYY) )
  {
    LODWORD(eYY) = LODWORD(v130.eYY) ^ 0x80000000;
    LODWORD(v130.eYY) ^= 0x80000000;
  }
  v65 = *(_DWORD *)(v125[0] + 48LL);
  if ( (v65 & 0x1000000) != 0 )
  {
    v130.eXX = eYY;
    v130.eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(v130.eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  if ( (v65 & 1) != 0 && *(int *)(v27 + 276) <= 0 )
    v106 |= 0x8000u;
  v54 = *(_QWORD *)v59;
  v126 = v54;
  v127 = 0;
  ++*(_DWORD *)(v54 + 68);
  if ( ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  v66 = *(_QWORD *)v34;
  v67 = v106;
  v68 = *(_QWORD *)(v66 + 80);
  v119 = ghsemRFONTList;
  LODWORD(v110) = *(_DWORD *)(v68 + 68);
  GreAcquireSemaphore(ghsemRFONTList);
  v69 = v103;
  if ( (*(_DWORD *)(v103 + 40) & 0x800000) != 0 )
    v70 = *(_QWORD *)(*(_QWORD *)(v103 + 3512) + 1512LL);
  else
    v70 = *(_QWORD *)(v103 + 1512);
  *(_QWORD *)v5 = v70;
  if ( !v70 )
  {
LABEL_146:
    if ( (*(_DWORD *)(v69 + 40) & 0x800000) != 0 )
      v74 = *(_QWORD *)(*(_QWORD *)(v69 + 3512) + 1520LL);
    else
      v74 = *(_QWORD *)(v69 + 1520);
    *(_QWORD *)v5 = v74;
    if ( v74 )
    {
      while ( 1 )
      {
        if ( *(struct PFE **)(v74 + 104) == v59 && v104 == (*(_DWORD *)(v74 + 68) & 6) )
        {
          v75 = *(_DWORD *)(v74 + 12);
          if ( ((v67 ^ v75) & 0xE000) == 0 )
          {
            v76 = (v67 ^ v75) & 0x50010000;
            if ( !v76 )
              goto LABEL_243;
            if ( (v67 & 0x10000) != 0 && (v75 & 0x20000) != 0 )
              v76 = (v67 ^ v75) & 0x50000000;
            if ( (v67 & 0x10000000) != 0 && (v75 & 0x10000000) == 0 && (v75 & 0x2000000) != 0 || !v76 )
            {
LABEL_243:
              if ( !*(_DWORD *)(v74 + 40)
                && *(_QWORD *)&v130.eXX == *(_QWORD *)(v74 + 120)
                && *(_QWORD *)&v130.eYX == *(_QWORD *)(v74 + 128)
                && v105 == *(_DWORD *)(v74 + 640) )
              {
                if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v112, (struct MATRIX *)(v74 + 156)) )
                {
                  v77 = *(_QWORD *)v5;
                  if ( *(_DWORD *)(*(_QWORD *)v5 + 192LL) == (_DWORD)v110 && (v108[0] || !*(_DWORD *)(v77 + 628)) )
                    break;
                }
              }
            }
          }
        }
        v74 = *(_QWORD *)(*(_QWORD *)v5 + 656LL);
        *(_QWORD *)v5 = v74;
        if ( !v74 )
          goto LABEL_172;
      }
      v79 = v103;
      if ( (*(_DWORD *)(v103 + 40) & 0x800000) != 0 )
        v80 = *(_QWORD *)(*(_QWORD *)(v103 + 3512) + 1520LL);
      else
        v80 = *(_QWORD *)(v103 + 1520);
      v81 = *(_QWORD *)(v77 + 648);
      v82 = *(_QWORD *)(v77 + 656);
      v83 = v81 + 648;
      if ( !v81 )
        v83 = 0LL;
      v84 = (_QWORD *)(v82 + 648);
      if ( !v82 )
        v84 = 0LL;
      if ( v81 )
      {
        *(_QWORD *)(v83 + 8) = v82;
        if ( v84 )
          *v84 = *(_QWORD *)(v77 + 648);
      }
      else
      {
        v80 = *(_QWORD *)(v77 + 656);
        if ( !v84 )
        {
LABEL_189:
          if ( (*(_DWORD *)(v79 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v79 + 3512) + 1520LL) = v80;
          else
            *(_QWORD *)(v79 + 1520) = v80;
          if ( (*(_DWORD *)(v103 + 40) & 0x800000) != 0 )
            v85 = *(_DWORD *)(*(_QWORD *)(v103 + 3512) + 1528LL);
          else
            v85 = *(_DWORD *)(v103 + 1528);
          v86 = v85 - 1;
          if ( (*(_DWORD *)(v103 + 40) & 0x800000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v103 + 3512) + 1528LL) = v86;
          else
            *(_DWORD *)(v103 + 1528) = v86;
          v87 = v103;
          if ( (*(_DWORD *)(v103 + 40) & 0x800000) != 0 )
            v88 = *(_QWORD *)(*(_QWORD *)(v103 + 3512) + 1512LL);
          else
            v88 = *(_QWORD *)(v103 + 1512);
          v89 = (_QWORD *)(v88 + 648);
          if ( !v88 )
            v89 = 0LL;
          v90 = (_QWORD *)(*(_QWORD *)v5 + 648LL);
          if ( *(_QWORD *)v5 != -648LL )
          {
            *v90 = 0LL;
            v90[1] = v88;
            if ( v89 )
              *v89 = *(_QWORD *)v5;
            v88 = *(_QWORD *)v5;
            v87 = v103;
          }
          if ( (*(_DWORD *)(v87 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v87 + 3512) + 1512LL) = v88;
          else
            *(_QWORD *)(v87 + 1512) = v88;
          *(_DWORD *)(*(_QWORD *)v5 + 644LL) = 1;
          goto LABEL_211;
        }
        *v84 = 0LL;
      }
      v79 = v103;
      goto LABEL_189;
    }
LABEL_172:
    *(_QWORD *)v5 = 0LL;
    if ( ghsemRFONTList )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
      GreReleaseSemaphoreInternal(ghsemRFONTList);
    }
    v78 = v107;
    if ( (unsigned int)RFONTOBJ::bRealizeFont(
                         v5,
                         v107,
                         (struct PDEVOBJ *)&v103,
                         (struct tagENUMLOGFONTEXDVW *)(v27 + 276),
                         v59,
                         &v130,
                         &v111,
                         v106,
                         0,
                         v105,
                         v108[0],
                         v104) )
    {
      if ( *(_DWORD *)(v27 + 280) )
      {
        v120 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v92 = 420LL;
        v128 = *((_QWORD *)v59 + 4);
        v93 = *(_DWORD *)(v27 + 272);
        if ( v93 < 0x1A4 )
          v92 = v93;
        v94 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v92);
        v95 = v94;
        if ( v94 )
        {
          memmove(v94, (const void *)(v27 + 276), v92);
          v96 = v107;
          v97 = v109[0];
          v95->lfWidth = 0;
          if ( !PFEOBJ::bSetFontXform(
                  v98,
                  v96,
                  v95,
                  (struct _FD_XFORM *)(*(_QWORD *)v5 + 136LL),
                  v97,
                  v102,
                  &v111,
                  (struct IFIOBJ *)&v128,
                  0) )
            *(struct _FD_XFORM *)(*(_QWORD *)v5 + 136LL) = v130;
          FreeTmpBuffer(v95);
        }
        else
        {
          *(struct _FD_XFORM *)(*(_QWORD *)v5 + 136LL) = v130;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v120);
        v78 = v107;
      }
      v99 = *(_QWORD *)v5;
      v100 = 1;
      v101 = *(_QWORD *)v78;
      v45 = 1;
      v127 = 1;
      *(_QWORD *)(v101 + 2152) = v99;
      *(_DWORD *)(*(_QWORD *)v78 + 260LL) &= ~1u;
      goto LABEL_225;
    }
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(*(_QWORD *)v78 + 2152LL) = 0LL;
LABEL_223:
    v45 = 0;
    goto LABEL_224;
  }
  while ( 1 )
  {
    if ( *(struct PFE **)(v70 + 104) != v59 || v104 != (*(_DWORD *)(v70 + 68) & 6) )
      goto LABEL_144;
    v71 = *(_DWORD *)(v70 + 12);
    if ( ((v71 ^ v67) & 0xE000) == 0 )
    {
      v72 = (v71 ^ v67) & 0x50010000;
      if ( !v72 )
        goto LABEL_244;
      if ( (v67 & 0x10000) != 0 && (v71 & 0x20000) != 0 )
        v72 = (v71 ^ v67) & 0x50000000;
      if ( (v67 & 0x10000000) != 0 && (v71 & 0x10000000) == 0 && (v71 & 0x2000000) != 0 || !v72 )
      {
LABEL_244:
        if ( !*(_DWORD *)(v70 + 40)
          && *(_QWORD *)&v130.eXX == *(_QWORD *)(v70 + 120)
          && *(_QWORD *)&v130.eYX == *(_QWORD *)(v70 + 128)
          && v105 == *(_DWORD *)(v70 + 640) )
        {
          if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v112, (struct MATRIX *)(v70 + 156)) )
          {
            v73 = *(_QWORD *)v5;
            if ( *(_DWORD *)(*(_QWORD *)v5 + 192LL) == (_DWORD)v110 && (v108[0] || !*(_DWORD *)(v73 + 628)) )
              break;
          }
        }
      }
    }
    v70 = *(_QWORD *)v5;
LABEL_144:
    v70 = *(_QWORD *)(v70 + 656);
    *(_QWORD *)v5 = v70;
    if ( !v70 )
    {
      v69 = v103;
      goto LABEL_146;
    }
  }
  ++*(_DWORD *)(v73 + 644);
  v110 = PDEVOBJ::prfntActive((PDEVOBJ *)&v103);
  if ( v110 != *(struct RFONT **)v5 )
  {
    RFONTOBJ::vRemove(v5, &v110, 1LL);
    RFONTOBJ::vInsert(v5, &v110, 1LL);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v103, v110);
  }
LABEL_211:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v119);
  v45 = 1;
  v91 = v107;
  *(_QWORD *)(*(_QWORD *)v107 + 2152LL) = *(_QWORD *)v5;
  *(_DWORD *)(*(_QWORD *)v91 + 260LL) &= ~1u;
LABEL_224:
  v100 = v127;
LABEL_225:
  if ( v54 && !v100 )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    --*(_DWORD *)(v54 + 68);
    if ( !*(_DWORD *)(v54 + 56)
      && !*(_DWORD *)(v54 + 60)
      && !*(_QWORD *)(v54 + 144)
      && !*(_DWORD *)(v54 + 68)
      && !*(_DWORD *)(v54 + 64) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)&v126, (struct PFFCLEANUP *)v129);
      v8 = 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    if ( v8 )
      vCleanupFontFile((struct PFFCLEANUP *)v129);
  }
LABEL_238:
  if ( v27 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v27);
  return v45;
}
