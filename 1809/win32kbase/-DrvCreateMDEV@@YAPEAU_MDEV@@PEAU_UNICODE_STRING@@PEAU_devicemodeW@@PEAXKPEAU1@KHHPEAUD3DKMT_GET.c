/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8
 * Callers:
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0015070 (DrvGetDeviceFromName.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015460 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023910 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0052A70 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C005586C (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0055AD0 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0055B00 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0055C18 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     AlignRects @ 0x1C0055D24 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C0055DB0 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0055DD4 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005679C (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00568A8 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0056A30 (DrvGetDisplayDriverNames.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0056B38 (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C0057EA0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0095728 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A2BA0 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00A4738 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00A552C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A596C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C00A69AC (wcsncmp.c)
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0101370 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v9; // rbx
  _QWORD *v12; // rax
  struct _MDEV *v13; // r14
  _DWORD *v14; // rax
  __int64 cx_low; // rcx
  __int64 v16; // rsi
  struct _devicemodeW *v17; // rax
  __int64 v18; // rdx
  struct tagSIZE v19; // r11
  unsigned int v20; // r9d
  struct D3DKMT_GETPATHSMODALITY *v21; // r13
  int v22; // ebx
  int v23; // edi
  wchar_t *v24; // r8
  unsigned int v25; // r12d
  unsigned int v26; // r15d
  bool v27; // sf
  HDEV HDEV; // rdi
  wchar_t *DeviceFromName; // r14
  LONG i; // eax
  unsigned __int16 v31; // cx
  int PrimaryAttachFlags; // eax
  unsigned int v33; // r13d
  struct _MDEV *v34; // r15
  UNICODE_STRING *v35; // rax
  MULTIDEVLOCKOBJ *v36; // r14
  unsigned int v37; // edx
  unsigned int v38; // ebx
  unsigned int v39; // edx
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // ebx
  _DWORD *v43; // rdi
  struct _devicemodeW *v44; // rax
  struct tagRECT *v45; // r12
  unsigned int v46; // r10d
  unsigned int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rax
  _DWORD *v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r13d
  struct D3DKMT_GETPATHSMODALITY *v54; // rdi
  unsigned int v55; // ecx
  __int64 v56; // rbx
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned int v61; // r15d
  __int64 v62; // r13
  __int64 v63; // rbx
  void (__fastcall *v64)(__int64, __int64); // rax
  struct tagRECT v65; // xmm0
  __int64 v66; // rax
  int v68; // eax
  bool v69; // zf
  __int64 v70; // rax
  struct _DRV_NAMES *v71; // r13
  unsigned int v72; // edi
  unsigned int v73; // r15d
  unsigned int v74; // r12d
  struct _devicemodeW *v75; // rax
  struct _devicemodeW *v76; // rbx
  int v77; // eax
  struct _devicemodeW *v78; // rbx
  struct _devicemodeW *v79; // rax
  __int64 v80; // rbx
  __int64 v81; // r10
  __int64 DisplayDriverNames; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  struct _DRV_NAMES *v85; // r12
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // r15
  unsigned __int16 v89; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v92; // rax
  int v93; // eax
  unsigned int v94; // eax
  unsigned int v95; // eax
  struct tagSIZE *v96; // rdx
  __int64 v97; // r8
  struct tagSIZE v98; // rcx
  struct tagSIZE v99; // rax
  unsigned int v100; // ecx
  unsigned int *v101; // rbx
  unsigned __int64 v102; // rax
  void *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rdx
  int v108; // eax
  unsigned int v109; // edx
  unsigned int j; // r8d
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rdx
  unsigned int v114; // eax
  unsigned int v115; // edx
  unsigned int v116; // edx
  int v117; // ecx
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned int v120; // r15d
  unsigned int v121; // r13d
  __int64 v122; // rbx
  unsigned int v123; // r15d
  unsigned int v124; // kr00_4
  unsigned int v125; // ecx
  unsigned int v126; // eax
  unsigned int v127; // edx
  unsigned int v128; // ecx
  unsigned int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  unsigned int v133; // r9d
  unsigned __int64 v134; // rdx
  __int64 v135; // rax
  int v136; // ecx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v137; // rdx
  struct _ERESOURCE *v138; // rcx
  unsigned int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // rax
  __int64 v148; // rdx
  int v149; // eax
  __int64 v150; // rax
  struct _devicemodeW *v151; // rbx
  struct _devicemodeW *v152; // rbx
  int v153; // eax
  HDEV v154; // rax
  struct _devicemodeW *v155; // rbx
  int v156; // eax
  int v157; // eax
  __int64 dmPelsHeight; // r9
  __int64 dmPelsWidth; // r8
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  int DpiSettingWithNoDefaultSupported; // eax
  unsigned int v167; // eax
  _QWORD *v168; // rax
  int v169; // edx
  __int64 v170; // rax
  __int64 v171; // rax
  struct _devicemodeW *Src; // [rsp+28h] [rbp-D1h]
  int v173; // [rsp+38h] [rbp-C1h]
  int v174; // [rsp+38h] [rbp-C1h]
  struct _DPI_INFORMATION *v175; // [rsp+40h] [rbp-B9h]
  int v176; // [rsp+40h] [rbp-B9h]
  int cx; // [rsp+58h] [rbp-A1h]
  unsigned int v178; // [rsp+5Ch] [rbp-9Dh]
  struct _devicemodeW *v179; // [rsp+60h] [rbp-99h] BYREF
  int v180; // [rsp+68h] [rbp-91h]
  int v181; // [rsp+6Ch] [rbp-8Dh]
  int PruneFlag; // [rsp+70h] [rbp-89h]
  unsigned int v183; // [rsp+74h] [rbp-85h]
  int v184; // [rsp+78h] [rbp-81h]
  struct tagSIZE v185; // [rsp+80h] [rbp-79h] BYREF
  unsigned int v186; // [rsp+88h] [rbp-71h] BYREF
  int v187; // [rsp+8Ch] [rbp-6Dh]
  int v188; // [rsp+90h] [rbp-69h]
  struct _devicemodeW *v189; // [rsp+98h] [rbp-61h]
  struct tagSIZE v190; // [rsp+A0h] [rbp-59h] BYREF
  int v191; // [rsp+A8h] [rbp-51h] BYREF
  unsigned int v192; // [rsp+ACh] [rbp-4Dh] BYREF
  int v193; // [rsp+B0h] [rbp-49h]
  int v194; // [rsp+B4h] [rbp-45h]
  unsigned __int64 v195; // [rsp+B8h] [rbp-41h]
  void *Buf2; // [rsp+C0h] [rbp-39h] BYREF
  _QWORD v197[2]; // [rsp+C8h] [rbp-31h] BYREF
  struct tagSIZE v198[12]; // [rsp+D8h] [rbp-21h] BYREF
  PCUNICODE_STRING String1a; // [rsp+148h] [rbp+4Fh]
  unsigned int v203; // [rsp+158h] [rbp+5Fh]
  LONG v205; // [rsp+160h] [rbp+67h]
  struct _MDEV *v206; // [rsp+168h] [rbp+6Fh]
  int v207; // [rsp+168h] [rbp+6Fh]

  v9 = a4;
  cx = 0;
  v180 = 0;
  v184 = 0;
  v194 = 0;
  v187 = a4 & 1;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v13 = a5;
  v12[3] = a1;
  v12[4] = a3;
  v12[5] = v9;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  v14 = PALLOCMEM2(0x48uLL, 1936876615LL, 1);
  v16 = (__int64)v14;
  if ( !v14 )
    goto LABEL_88;
  v14[5] = 0;
  *((_QWORD *)v14 + 3) = a3;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
  v19 = 0LL;
  v189 = v17;
  if ( !v17 )
    goto LABEL_292;
  v20 = a6;
  v21 = a9;
  v181 = a8;
  PruneFlag = a6 != 0;
  v22 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    v188 = v22;
LABEL_5:
    v23 = cx;
    cx_low = 1LL;
    v178 = 1;
    v18 = 0x1000000000LL;
    v24 = 0LL;
    v195 = 0LL;
    v25 = 0;
    v193 = 0;
    v186 = 0;
    v26 = 0;
    v192 = 0;
    v183 = 0;
    while ( 1 )
    {
      v27 = v23 < 0;
      if ( v23 )
        break;
      HDEV = (HDEV)v19;
      v190 = v19;
      v185 = v19;
      if ( a1 )
      {
        if ( !v24 )
        {
          DeviceFromName = DrvGetDeviceFromName(a1);
          v20 = a6;
          v195 = (unsigned __int64)DeviceFromName;
          v18 = a5 != 0LL ? v178 : 0;
          v19 = 0LL;
          v178 = v18;
          cx_low = (unsigned int)v18;
          goto LABEL_15;
        }
      }
      else if ( !v24 )
      {
        goto LABEL_9;
      }
      if ( v13 )
      {
        if ( v25 >= *((_DWORD *)v13 + 5) )
          goto LABEL_33;
        v135 = v25++;
        v193 = v25;
        HDEV = (HDEV)*((_QWORD *)v13 + 5 * v135 + 4);
        v190 = (struct tagSIZE)HDEV;
        DeviceFromName = (wchar_t *)*((_QWORD *)HDEV + 322);
        if ( DeviceFromName == v24 )
          goto LABEL_27;
        v136 = v180 ^ 1;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) == 0 )
          v136 = v180;
        if ( v136 )
          goto LABEL_27;
        EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
        EngAcquireSemaphore(*((HSEMAPHORE *)HDEV + 6));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)HDEV + 6), 11LL);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v137 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)HDEV + 444);
        ++*((_DWORD *)HDEV + 3);
        ++*((_DWORD *)HDEV + 2);
        TrackObjectReferenceIncrement(1u, v137);
        if ( ((_DWORD)HDEV[10] & 0x400) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          DrvEnableDisplay(HDEV);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion();
        }
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *((_QWORD *)HDEV + 6));
        v138 = (struct _ERESOURCE *)*((_QWORD *)HDEV + 6);
        if ( v138 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v138);
          PsLeavePriorityRegion();
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v19 = 0LL;
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion();
          v19 = 0LL;
        }
        cx_low = v178;
        v20 = a6;
        v139 = (*((_DWORD *)DeviceFromName + 40) >> 2) & 1;
        v186 = 1;
        v192 = v139;
        goto LABEL_15;
      }
LABEL_9:
      if ( v22 == 4 )
      {
        if ( v26 >= *((unsigned __int16 *)v21 + 10) )
          goto LABEL_33;
        v80 = v26;
        if ( (*((_QWORD *)v21 + 34 * v26 + 6) & 0x1000000000LL) != 0 )
          goto LABEL_215;
        if ( !IsPrimaryPathInCloneGroup(v21, v26) || *(_DWORD *)((char *)v21 + v81 + 240) < v19.cx )
        {
          cx_low = v178;
LABEL_215:
          v183 = ++v26;
          goto LABEL_29;
        }
        DeviceFromName = gpGraphicsDeviceList;
        if ( gpGraphicsDeviceList )
        {
          do
          {
            if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0
              && *((_DWORD *)DeviceFromName + 62) == *(_DWORD *)((char *)v21 + v81 + 64)
              && *((_DWORD *)DeviceFromName + 63) == *(_DWORD *)((char *)v21 + v81 + 68)
              && *((_DWORD *)DeviceFromName + 64) == *(_DWORD *)((char *)v21 + v81 + 72) )
            {
              break;
            }
            DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
          }
          while ( DeviceFromName );
          goto LABEL_118;
        }
        goto LABEL_224;
      }
      DeviceFromName = gpGraphicsDeviceList;
      for ( i = v19.cx; DeviceFromName && i != v25; ++i )
        DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
      v193 = ++v25;
      if ( gbBaseVideo != v19.cx && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
        goto LABEL_28;
LABEL_15:
      if ( v22 == 4 )
      {
        if ( HDEV )
        {
          v140 = WdLogNewEntry5_WdAssertion(cx_low, v18, v24);
          WdLogEvent5_WdAssertion(v140);
          v19 = 0LL;
        }
LABEL_118:
        if ( DeviceFromName )
        {
          cx_low = 1LL;
          if ( (*((_DWORD *)DeviceFromName + 41) & 1) == 0 )
          {
            DisplayDriverNames = DrvGetDisplayDriverNames(DeviceFromName);
            v19 = 0LL;
            v85 = (struct _DRV_NAMES *)DisplayDriverNames;
            if ( !DisplayDriverNames )
              goto LABEL_131;
            v86 = *((unsigned __int16 *)v21 + 10);
            if ( v26 >= (unsigned int)v86 )
            {
              v141 = WdLogNewEntry5_WdAssertion(v86, v83, v84);
              WdLogEvent5_WdAssertion(v141);
            }
            v87 = 0x1000000000LL;
            v88 = 272LL * v26;
            if ( (*(_QWORD *)((_BYTE *)v21 + v88 + 48) & 0x1000000000LL) != 0 )
            {
              v142 = WdLogNewEntry5_WdAssertion(0x1000000000LL, v83, v84);
              WdLogEvent5_WdAssertion(v142);
            }
            if ( !*(_QWORD *)((char *)v21 + v88 + 272) )
            {
              v143 = WdLogNewEntry5_WdAssertion(v87, v83, v84);
              WdLogEvent5_WdAssertion(v143);
            }
            v89 = gdmLogPixels;
            if ( !gdmLogPixels )
            {
              GetDpiSetting(1LL, &Buf2);
              v89 = (unsigned __int16)Buf2;
              gdmLogPixels = (unsigned __int16)Buf2;
            }
            *(_WORD *)(*(_QWORD *)((char *)v21 + v88 + 272) + 166LL) = v89;
            DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            HDEV = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                     v85,
                     *(struct _devicemodeW **)((char *)v21 + v88 + 272),
                     a3,
                     DriverCapableOverRide,
                     DriverAccelerationsLevel,
                     v187,
                     (a4 >> 2) & 1,
                     1u,
                     (HDEV *)&v185);
            Win32FreePool((__int64)v85);
            v19 = 0LL;
            if ( HDEV )
            {
              cx_low = *(unsigned int *)((char *)v21 + v88 + 236);
              v26 = v183;
              *((_DWORD *)HDEV + 661) = cx_low;
LABEL_131:
              if ( HDEV )
              {
LABEL_132:
                v183 = ++v26;
                goto LABEL_133;
              }
            }
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL);
            v26 = v183;
            v19 = 0LL;
          }
        }
        if ( HDEV )
          goto LABEL_132;
        v80 = v26;
LABEL_224:
        if ( !IsPrimaryPathInCloneGroup(v21, v26) || *((_DWORD *)v21 + 68 * v80 + 60) < v19.cx )
        {
          v147 = WdLogNewEntry5_WdAssertion(v145, v144, v146);
          WdLogEvent5_WdAssertion(v147);
          v19 = 0LL;
        }
        cx_low = LOWORD(v19.cx);
        if ( LOWORD(v19.cx) < *((_WORD *)v21 + 10) )
        {
          do
          {
            v148 = 272LL * (unsigned __int16)cx_low;
            if ( *(_DWORD *)((char *)v21 + v148 + 232) == *((_DWORD *)v21 + 68 * v80 + 58) )
              *(_DWORD *)((char *)v21 + v148 + 240) = -1073741823;
            LOWORD(cx_low) = cx_low + 1;
          }
          while ( (unsigned __int16)cx_low < *((_WORD *)v21 + 10) );
        }
        goto LABEL_132;
      }
      if ( !DeviceFromName )
        goto LABEL_33;
      if ( (*((_DWORD *)DeviceFromName + 41) & 1) != 0 )
        goto LABEL_28;
      if ( v20 == -1 )
      {
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        v19.cx = 0;
      }
      if ( HDEV )
      {
LABEL_134:
        v92 = WdLogNewEntry5_WdTrace(cx_low);
        WdLogEvent5_WdTrace(v92);
        v93 = *((_DWORD *)DeviceFromName + 40);
        v19 = 0LL;
        v184 = 1;
        if ( v192 )
          v94 = v93 | 4;
        else
          v94 = v93 & 0xFFFFFFFB;
        *((_DWORD *)DeviceFromName + 40) = v94;
        if ( !*(_QWORD *)&v185 )
        {
          if ( a5 )
          {
            v95 = *((_DWORD *)a5 + 5);
            if ( v95 )
            {
              v96 = (struct tagSIZE *)((char *)a5 + 32);
              v97 = v95;
              do
              {
                v98 = *v96;
                v96 += 5;
                v99 = v185;
                if ( DeviceFromName == *(wchar_t **)(*(_QWORD *)&v98 + 2576LL) )
                  v99 = v98;
                v185 = v99;
                --v97;
              }
              while ( v97 );
            }
          }
        }
        *(_QWORD *)(v16 + 40LL * *(unsigned int *)(v16 + 20) + 32) = HDEV;
        *(struct tagSIZE *)(v16 + 40 * (*(unsigned int *)(v16 + 20) + 1LL)) = v185;
        v100 = *(_DWORD *)(v16 + 20);
        if ( v100 + 2 >= v100 )
        {
          *(_DWORD *)(v16 + 20) = v100 + 1;
          v101 = (unsigned int *)v16;
          v102 = 72LL * (v100 + 2);
          if ( v102 > 0xFFFFFFFF )
          {
            v16 = 0LL;
          }
          else
          {
            v103 = PALLOCMEM2((unsigned int)v102, 1936876615LL, 1);
            v19 = 0LL;
            v16 = (__int64)v103;
          }
          if ( !v16 )
          {
            v13 = a5;
            v23 = -1073741670;
            cx_low = v178;
            v16 = (__int64)v101;
            cx = -1073741670;
            goto LABEL_30;
          }
          memmove((void *)v16, v101, 72LL * v101[5]);
          Win32FreePool((__int64)v101);
          v19 = 0LL;
        }
        goto LABEL_27;
      }
      if ( gForceDisconnect != v19.cx || v22 == 3 )
        v31 = -1;
      else
        v31 = gProtocolType;
      PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v31, &v192, &v186);
      v19 = 0LL;
      if ( !PrimaryAttachFlags )
        goto LABEL_33;
      if ( v22 == 1 || v22 == 3 )
      {
        if ( !v186 )
          goto LABEL_27;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
        {
          v68 = v180;
        }
        else
        {
          if ( !v180 )
            goto LABEL_94;
          v68 = 0;
        }
        v69 = v68 == 0;
      }
      else
      {
        if ( v22 != 2 )
        {
          v150 = WdLogNewEntry5_WdAssertion(cx_low, v18, v24);
          WdLogEvent5_WdAssertion(v150);
          v19 = 0LL;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || v184 )
            goto LABEL_27;
          goto LABEL_94;
        }
        v149 = *((_DWORD *)DeviceFromName + 40);
        if ( (v149 & 8) == 0 )
        {
          if ( (v149 & 0x2000000) != 0 || v184 || gProtocolType == -1 )
            goto LABEL_27;
          goto LABEL_94;
        }
        if ( !v186 )
          goto LABEL_27;
        v69 = v180 == 0;
      }
      if ( v69 )
        goto LABEL_27;
LABEL_94:
      v70 = DrvGetDisplayDriverNames(DeviceFromName);
      v19 = 0LL;
      v71 = (struct _DRV_NAMES *)v70;
      if ( !v70 )
        goto LABEL_27;
      v72 = (*((_DWORD *)DeviceFromName + 40) & 8) != 0 ? 4 : 1;
      if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
      {
        v73 = 0;
        v74 = 0;
      }
      else
      {
        v73 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        v74 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      }
      v75 = a2;
      if ( !a2 )
      {
        v76 = v189;
        memset(v189, 0, sizeof(struct _devicemodeW));
        v76->dmSize = 220;
        v75 = v76;
      }
      v77 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)DeviceFromName,
              &v179,
              &v191,
              0LL,
              v75,
              0,
              PruneFlag,
              a7,
              v181,
              0LL);
      if ( v77 == 1073741839 )
      {
        DrvLogDisplayDriverEvent(4LL);
LABEL_102:
        v78 = v179;
        HDEV = hCreateHDEV(
                 (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                 v71,
                 v179,
                 a3,
                 v73,
                 v74,
                 v187,
                 (a4 >> 2) & 1,
                 v72,
                 (HDEV *)&v185);
        if ( !HDEV && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
          gulDriverFailureReason = 5;
        goto LABEL_103;
      }
      if ( v77 == -1073741776 )
      {
        v151 = *(struct _devicemodeW **)(*(_QWORD *)(v16 + 32) + 2592LL);
        if ( v179 && v179 != v189 )
        {
          Win32FreePool((__int64)v179);
          v179 = 0LL;
        }
        v77 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                &v179,
                &v191,
                0LL,
                v151,
                0,
                PruneFlag,
                a7,
                v181,
                0LL);
      }
      if ( v77 >= 0 )
        goto LABEL_102;
      DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
      v78 = v179;
      HDEV = (HDEV)v190;
      if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
        gulDriverFailureReason = 4;
LABEL_103:
      v79 = a2;
      if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
        goto LABEL_276;
      if ( !HDEV )
      {
        DrvLogDisplayDriverEvent(4LL);
        if ( v78 )
        {
          if ( v78->dmBitsPerPel == 4 )
            DrvLogDisplayDriverEvent(5LL);
          if ( v78 != v189 )
          {
            Win32FreePool((__int64)v78);
            v179 = 0LL;
          }
        }
        v152 = v189;
        memset(v189, 0, sizeof(struct _devicemodeW));
        v152->dmSize = 220;
        v153 = DrvProbeAndCaptureDevmode(
                 (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                 &v179,
                 &v191,
                 0LL,
                 v152,
                 1,
                 PruneFlag,
                 a7,
                 v181,
                 0LL);
        v78 = v179;
        if ( v153 >= 0 )
        {
          v154 = hCreateHDEV(
                   (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                   v71,
                   v179,
                   a3,
                   v73,
                   v74,
                   v187,
                   (a4 >> 2) & 1,
                   1u,
                   (HDEV *)&v185);
          v190 = (struct tagSIZE)v154;
          if ( v154 || v78->dmPelsWidth == 640 && v78->dmPelsHeight == 480 && v78->dmBitsPerPel == 4 )
          {
LABEL_270:
            HDEV = v154;
          }
          else
          {
            if ( v78 != v189 )
            {
              Win32FreePool((__int64)v78);
              v179 = 0LL;
            }
            v155 = v189;
            memset(v189, 0, sizeof(struct _devicemodeW));
            v155->dmSize = 220;
            v156 = v181;
            v155->dmBitsPerPel = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0 ? 32 : 4;
            v176 = a7;
            v174 = PruneFlag;
            v155->dmPelsWidth = 640;
            v155->dmPelsHeight = 480;
            v155->dmFields = 1835008;
            v157 = DrvProbeAndCaptureDevmode(
                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                     &v179,
                     &v191,
                     0LL,
                     v155,
                     0,
                     v174,
                     v176,
                     v156,
                     0LL);
            v78 = v179;
            if ( v157 >= 0 )
            {
              v154 = hCreateHDEV(
                       (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                       v71,
                       v179,
                       a3,
                       v73,
                       v74,
                       v187,
                       (a4 >> 2) & 1,
                       1u,
                       (HDEV *)&v185);
              goto LABEL_270;
            }
            HDEV = (HDEV)v190;
          }
        }
        if ( v78 )
        {
          dmPelsHeight = v78->dmPelsHeight;
          dmPelsWidth = v78->dmPelsWidth;
          v160 = HDEV != 0LL;
        }
        else
        {
          v160 = 2LL;
          dmPelsHeight = v189->dmPelsHeight;
          dmPelsWidth = v189->dmPelsWidth;
        }
        DrvDxgkLogCodePointPacket(26LL, v160, dmPelsWidth, dmPelsHeight);
        v79 = 0LL;
LABEL_276:
        if ( !HDEV && !v79 )
        {
          gpLastFailedPhysDisp = (__int64)DeviceFromName;
          DrvLogDisplayDriverEvent(2LL);
        }
      }
      if ( v78 && v78 != v189 )
        Win32FreePool((__int64)v78);
      Win32FreePool((__int64)v71);
      v26 = v183;
      v19 = 0LL;
LABEL_133:
      if ( HDEV )
        goto LABEL_134;
LABEL_27:
      cx_low = v178;
LABEL_28:
      v13 = a5;
LABEL_29:
      v23 = cx;
LABEL_30:
      v22 = v188;
      v18 = 0x1000000000LL;
      v21 = a9;
      v25 = v193;
      v24 = (wchar_t *)v195;
      v20 = a6;
      if ( !(_DWORD)cx_low )
      {
        v27 = v23 < 0;
        break;
      }
    }
    if ( !v27 )
    {
LABEL_33:
      if ( v22 == 4 )
      {
        if ( v184 == v19.cx )
        {
          v163 = WdLogNewEntry5_WdError(cx_low, v18, v24);
          *(_QWORD *)(v163 + 24) = -1073741823LL;
          WdLogEvent5_WdError(v163);
          goto LABEL_292;
        }
        v104 = WdLogNewEntry5_WdTrace(cx_low);
        WdLogEvent5_WdTrace(v104);
        v22 = 1;
        v188 = 1;
      }
      else
      {
        if ( v184 == v19.cx )
        {
          if ( v22 == 1 )
          {
            v161 = WdLogNewEntry5_WdTrace(cx_low);
            WdLogEvent5_WdTrace(v161);
            v19 = 0LL;
            v22 = 2;
            v181 = 0;
          }
          else
          {
            if ( v22 != 2 || !(unsigned int)UserIsWddmConnectedSession() )
            {
              if ( v25 )
              {
                v164 = WdLogNewEntry5_WdTrace(cx_low);
                WdLogEvent5_WdTrace(v164);
                v23 = -1073741204;
                v19 = 0LL;
                cx = -1073741204;
                break;
              }
              v165 = WdLogNewEntry5_WdTrace(cx_low);
              WdLogEvent5_WdTrace(v165);
              goto LABEL_292;
            }
            v162 = WdLogNewEntry5_WdTrace(cx_low);
            WdLogEvent5_WdTrace(v162);
            v19 = 0LL;
            v22 = 3;
          }
          v20 = a6;
          v13 = a5;
          continue;
        }
        if ( v180 != v19.cx )
        {
          cx = v19.cx;
          goto LABEL_37;
        }
        v105 = WdLogNewEntry5_WdTrace(cx_low);
        WdLogEvent5_WdTrace(v105);
      }
      v13 = a5;
      v19 = 0LL;
      v20 = a6;
      v180 = 1;
      goto LABEL_5;
    }
    break;
  }
  if ( v23 )
    goto LABEL_85;
LABEL_37:
  if ( (a4 & 2) != 0 )
    goto LABEL_85;
  v205 = v19.cx;
  v206 = (struct _MDEV *)v19;
  v33 = v19.cx;
  v34 = (struct _MDEV *)v19;
  v35 = (UNICODE_STRING *)Win32AllocPool(104LL, 0x6C6D6847u);
  String1a = v35;
  v36 = (MULTIDEVLOCKOBJ *)v35;
  if ( v35 )
  {
    *(_QWORD *)&v35->Length = 1LL;
    v35->Buffer = 0LL;
    *(_QWORD *)&v35[1].Length = 0LL;
  }
  else
  {
    v36 = 0LL;
    String1a = 0LL;
  }
  if ( !v36 )
  {
LABEL_292:
    if ( v16 )
    {
      DrvBackoutMDEV((struct _MDEV *)v16, v18);
      Win32FreePool(v16);
      v16 = 0LL;
    }
    goto LABEL_86;
  }
  MULTIDEVLOCKOBJ::vInit(v36, (struct _MDEV *)v16);
  if ( (*(_DWORD *)v36 & 1) == 0 )
    goto LABEL_84;
  MULTIDEVLOCKOBJ::vLock(v36);
  v38 = *(_DWORD *)(v16 + 20);
  v39 = 0;
  if ( !v38 )
    goto LABEL_49;
  while ( 2 )
  {
    v40 = *(_QWORD *)(*(_QWORD *)(v16 + 40LL * v39 + 32) + 2576LL);
    v41 = *(_DWORD *)(v40 + 160);
    if ( (v41 & 8) != 0 )
    {
      if ( (v41 & 4) != 0 )
      {
        v41 &= ~4u;
        *(_DWORD *)(v40 + 160) = v41;
        goto LABEL_46;
      }
    }
    else
    {
      if ( !v34 )
        v33 = v39;
LABEL_46:
      if ( (v41 & 4) != 0 )
      {
        if ( v34 )
        {
          cx = -1073741438;
          *(_DWORD *)(v40 + 160) = v41 & 0xFFFFFFFB;
        }
        else
        {
          v34 = (struct _MDEV *)v40;
          v33 = v39;
        }
      }
    }
    v38 = *(_DWORD *)(v16 + 20);
    if ( ++v39 < v38 )
      continue;
    break;
  }
  v205 = v33;
  v206 = v34;
LABEL_49:
  v42 = 16 * v38;
  Buf2 = PALLOCMEM2(v42, 1936876615LL, 0);
  v43 = Buf2;
  v44 = (struct _devicemodeW *)PALLOCMEM2(v42, 1936876615LL, 0);
  v179 = v44;
  v45 = (struct tagRECT *)v44;
  if ( !v43 )
    goto LABEL_80;
  if ( !v44 )
    goto LABEL_79;
  v46 = 0;
  v203 = 0;
  v47 = 0;
  if ( *(_DWORD *)(v16 + 20) )
  {
    do
    {
      v48 = 2LL * v47;
      v49 = *(_QWORD *)(v16 + 40LL * v47 + 32);
      v50 = *(_DWORD **)(v49 + 2592);
      v43[2 * v48] = v50[19];
      v43[2 * v48 + 1] = v50[20];
      v43[2 * v48 + 2] = v50[19] + v50[43];
      v43[2 * v48 + 3] = v50[20] + v50[44];
      if ( (*(_DWORD *)(*(_QWORD *)(v49 + 2576) + 160LL) & 8) == 0 )
      {
        if ( !v34 && !v50[19] && !v50[20] )
        {
          v33 = v47;
          v34 = *(struct _MDEV **)(v49 + 2576);
        }
        ++v46;
      }
      ++v47;
    }
    while ( v47 < *(_DWORD *)(v16 + 20) );
    v36 = (MULTIDEVLOCKOBJ *)String1a;
    v203 = v46;
    v205 = v33;
    v206 = v34;
  }
  memmove(v45, v43, v42);
  if ( !gDrvDpiAdjusted )
  {
    gDrvDpiWin8Style = 0;
    a6 = 0;
    if ( ((gProtocolType + 1) & 0xFFFE) == 0 && (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v51, 65534LL) >= 0 )
    {
      GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
      if ( gDrvDpiWin8Style )
      {
        DpiSettingWithNoDefaultSupported = IsGetDpiSettingWithNoDefaultSupported();
        if ( DpiSettingWithNoDefaultSupported >= 0 )
          GetDpiSettingWithNoDefault(0LL, &a6);
        v167 = a6;
        if ( (unsigned int)a6 <= 0x60 )
          v167 = 96;
        if ( v167 >= 0x1E0 )
          LOWORD(v167) = 480;
        gdmLogPixels = v167;
      }
    }
  }
  v52 = v33;
  v53 = 0;
  v54 = *(struct D3DKMT_GETPATHSMODALITY **)(v16 + 40 * v52 + 32);
  a9 = v54;
  *(_DWORD *)(*((_QWORD *)v54 + 322) + 160LL) |= 4u;
  v55 = *(_DWORD *)(v16 + 20);
  if ( v55 )
  {
    do
    {
      v56 = *(_QWORD *)(v16 + 40LL * v53 + 32);
      if ( (*(_DWORD *)(*(_QWORD *)(v56 + 2576) + 160LL) & 0x800000) != 0 )
      {
        v57 = 0;
        if ( v53 == v205 )
          v57 = 32;
        *(_DWORD *)(v56 + 2548) = *(_DWORD *)(v56 + 2548) & 0xFFFFFFDF | v57;
        a6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64))qword_1C01CDB50)(
               *(_QWORD *)(*(_QWORD *)(v56 + 2576) + 240LL),
               *(unsigned int *)(*(_QWORD *)(v56 + 2576) + 256LL),
               0xFFFFFFFFLL,
               v56 + 2136,
               v56 + 2456);
        if ( a6 < 0 )
        {
          v168 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58, v60);
          v168[3] = a6;
          v168[4] = *(_QWORD *)(*(_QWORD *)(v56 + 2576) + 240LL);
          v168[5] = *(unsigned int *)(*(_QWORD *)(v56 + 2576) + 256LL);
          WdLogEvent5_WdError(v168);
        }
      }
      v55 = *(_DWORD *)(v16 + 20);
      ++v53;
    }
    while ( v53 < v55 );
    v54 = a9;
    v36 = (MULTIDEVLOCKOBJ *)String1a;
    v34 = v206;
    v45 = (struct tagRECT *)v179;
  }
  if ( !gDrvDpiAdjusted )
  {
    gDrvDpiWin8Style = 0;
    a6 = 0;
    if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
    {
      v114 = *((_DWORD *)v54 + 882);
      if ( v114 )
      {
        v115 = (96 * HIWORD(v114) + 50) / 0x64u;
      }
      else
      {
        if ( wcsncmp(*((const wchar_t **)v34 + 25), L"WORKERDD", *((unsigned int *)v34 + 66))
          && wcsncmp(*((const wchar_t **)v34 + 25), L"TSDDD", *((unsigned int *)v34 + 66)) )
        {
          gDrvDpiWin8Style = 1;
        }
        GetDpiSetting(2LL, &a6);
        v115 = a6;
        if ( (unsigned int)a6 <= 0x60 )
          v115 = 96;
        if ( v115 >= 0x1E0 )
          v115 = 480;
        a6 = v115;
      }
      gdmLogPixels = v115;
      v116 = 0;
      v55 = *(_DWORD *)(v16 + 20);
      if ( v55 )
      {
        do
        {
          v117 = gdmLogPixels;
          v118 = v116++;
          v119 = *(_QWORD *)(v16 + 40 * v118 + 32);
          *(_DWORD *)(v119 + 2180) = gdmLogPixels;
          *(_DWORD *)(v119 + 2176) = v117;
          *(_WORD *)(*(_QWORD *)(v119 + 2592) + 166LL) = gdmLogPixels;
          v55 = *(_DWORD *)(v16 + 20);
        }
        while ( v116 < v55 );
      }
      goto LABEL_170;
    }
    v106 = (unsigned int)(96 * *((_DWORD *)v54 + 617) + 50);
    v107 = (unsigned int)v106 / 0x64;
    if ( (_WORD)v107 )
      SetDpiSetting(1LL, (unsigned __int16)v107);
    if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v106, v107) >= 0 )
      GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
    if ( gDrvDpiWin8Style )
    {
      if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
        GetDpiSettingWithNoDefault(0LL, &a6);
      v109 = a6;
      if ( (unsigned int)a6 <= 0x60 )
        v109 = 96;
      if ( v109 >= 0x1E0 )
        v109 = 480;
      a6 = v109;
    }
    else
    {
      v108 = *((_DWORD *)v54 + 616);
      if ( !v108 )
      {
        gdmLogPixels = 96;
LABEL_166:
        v55 = *(_DWORD *)(v16 + 20);
        for ( j = 0; j < v55; ++j )
        {
          v111 = gdmLogPixels;
          v112 = *(_QWORD *)(v16 + 40LL * j + 32);
          v113 = *(_QWORD *)(v112 + 2592);
          *(_DWORD *)(v112 + 2180) = gdmLogPixels;
          *(_DWORD *)(v112 + 2176) = v111;
          *(_WORD *)(v113 + 166) = gdmLogPixels;
          if ( gDrvDpiWin8Style )
          {
            v169 = 100 * gdmLogPixels;
            *(_DWORD *)(v112 + 2540) = 1234568;
            *(_DWORD *)(v112 + 2464) = (v169 + 48) / 0x60u;
          }
          v55 = *(_DWORD *)(v16 + 20);
        }
LABEL_170:
        gDrvDpiAdjusted = 1;
        goto LABEL_70;
      }
      v109 = (96 * v108 + 50) / 0x64u;
    }
    gdmLogPixels = v109;
    goto LABEL_166;
  }
LABEL_70:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    v207 = 1;
    v120 = 1;
    v121 = 0;
    if ( v55 )
    {
      do
      {
        v122 = *(_QWORD *)(v16 + 40LL * v121 + 32);
        v123 = *(_DWORD *)(v122 + 3528);
        v124 = *(_DWORD *)(v122 + 2148);
        LOBYTE(a6) = ((*(_DWORD *)(*(_QWORD *)(v122 + 2592) + 84LL) - 1) & 0xFFFFFFFD) == 0;
        v125 = v124 / 0x3E8;
        v126 = *(_DWORD *)(v122 + 2144) / 0x3E8u;
        if ( (_BYTE)a6 )
        {
          v126 = v124 / 0x3E8;
          v125 = *(_DWORD *)(v122 + 2144) / 0x3E8u;
        }
        v127 = *(_DWORD *)(v122 + 2156);
        a9 = (struct D3DKMT_GETPATHSMODALITY *)__PAIR64__(v125, v126);
        v128 = *(_DWORD *)(v122 + 2152);
        v185 = (struct tagSIZE)a9;
        v129 = v128;
        if ( (_BYTE)a6 )
        {
          v129 = v127;
          v127 = v128;
        }
        v195 = __PAIR64__(v127, v129);
        v190 = (struct tagSIZE)__PAIR64__(v127, v129);
        memset(v198, 0, 0x20uLL);
        v197[0] = 0x2000000001LL;
        v197[1] = v198;
        if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v197) < 0 )
        {
          v170 = WdLogNewEntry5_WdAssertion(v131, v130, v132);
          WdLogEvent5_WdAssertion(v170);
        }
        v175 = (struct _DPI_INFORMATION *)(v122 + 2456);
        if ( v123 )
        {
          LODWORD(Src) = 0;
          FillDpiInfo(&v185, &v190, (struct tagSIZE)v198, v133, (DpiInternal *)Src, HIWORD(v123), v173, v175);
          *(_DWORD *)(v122 + 2548) |= 0x200u;
          v120 = v207;
        }
        else
        {
          *(_DWORD *)(v122 + 2548) &= ~0x200u;
          v120 = 0;
          LODWORD(Src) = gdmLogPixels;
          v207 = 0;
          FillDpiInfo(&v185, &v190, (struct tagSIZE)v198, v133, (DpiInternal *)Src, 0, v173, v175);
        }
        GetRemoteScaleOverrideTestHook(
          (STRSAFE_PCNZWCH)(*(_QWORD *)(v122 + 2576) + 64LL),
          v134,
          (struct _DPI_INFORMATION *)(v122 + 2456));
        ++v121;
        *(_DWORD *)(v122 + 2548) = *(_DWORD *)(v122 + 2548) & 0xFFFFFF7F | ((unsigned __int8)a6 << 7);
      }
      while ( v121 < *(_DWORD *)(v16 + 20) );
      v36 = (MULTIDEVLOCKOBJ *)String1a;
      v45 = (struct tagRECT *)v179;
    }
    UserSetScaleFactorsFromRemoteMetric(v120);
    v194 = 1;
  }
  else
  {
    *((_DWORD *)gpsi + 559) &= ~0x40u;
  }
  gdmLogPixelsOfPrimary = (96 * *((_DWORD *)v54 + 617) + 50) / 0x64u;
  AlignRects(v45, v203);
  v43 = Buf2;
  if ( memcmp(v45, Buf2, 16LL * v203) )
  {
    v171 = WdLogNewEntry5_WdWarning(0LL);
    WdLogEvent5_WdWarning(v171);
  }
  v61 = 0;
  if ( *(_DWORD *)(v16 + 20) )
  {
    do
    {
      v62 = 5LL * v61;
      v63 = *(_QWORD *)(v16 + 40LL * v61 + 32);
      *(_QWORD *)(v63 + 2584) = *(_QWORD *)&v45[v61].left;
      v64 = *(void (__fastcall **)(__int64, __int64))(v63 + 3384);
      if ( v64 )
        v64((*(_QWORD *)(v63 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v63 + 2552) != 0LL), 2LL);
      v65 = v45[v61++];
      *(struct tagRECT *)(v16 + 8 * v62 + 48) = v65;
      *(_DWORD *)(v16 + 8 * v62 + 64) = *(_DWORD *)(v63 + 2464);
    }
    while ( v61 < *(_DWORD *)(v16 + 20) );
    v36 = (MULTIDEVLOCKOBJ *)String1a;
    v43 = Buf2;
  }
LABEL_79:
  Win32FreePool((__int64)v43);
LABEL_80:
  if ( v45 )
    Win32FreePool((__int64)v45);
  MULTIDEVLOCKOBJ::vUnlock(v36);
  if ( v194 )
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
LABEL_84:
  MULTIDEVLOCKOBJ::`scalar deleting destructor'(v36, v37);
LABEL_85:
  if ( cx < 0 )
    goto LABEL_292;
LABEL_86:
  if ( v189 )
    Win32FreePool((__int64)v189);
LABEL_88:
  v66 = WdLogNewEntry5_WdTrace(cx_low);
  *(_QWORD *)(v66 + 24) = v16;
  WdLogEvent5_WdTrace(v66);
  return (struct _MDEV *)v16;
}
