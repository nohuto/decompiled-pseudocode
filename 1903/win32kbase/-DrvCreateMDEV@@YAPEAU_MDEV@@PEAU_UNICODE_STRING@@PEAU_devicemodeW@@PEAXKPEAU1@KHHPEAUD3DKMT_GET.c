/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570
 * Callers:
 *     hdcOpenDCW @ 0x1C003BC90 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022730 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     DrvGetDeviceFromName @ 0x1C003C3B0 (DrvGetDeviceFromName.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0044778 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0044864 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0044894 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0047500 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C004772C (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     AlignRects @ 0x1C0047874 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C00478F8 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C004791C (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00479C0 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0048228 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0048344 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00484E0 (DrvGetDisplayDriverNames.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C004893C (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00493E4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0049738 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C004D4A0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C004DAA0 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00A8E84 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B8DF0 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00B96CC (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00B9BB8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00B9F2C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C00BB5BC (wcsncmp.c)
 *     memcmp @ 0x1C00C0490 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0129C60 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C012BDAC (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
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
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _devicemodeW *v17; // rax
  __int64 v18; // rdx
  HDEV v19; // r11
  unsigned int v20; // r9d
  struct D3DKMT_GETPATHSMODALITY *v21; // r13
  int v22; // ebx
  int v23; // edi
  wchar_t *v24; // r8
  unsigned int v25; // r12d
  unsigned int v26; // r15d
  bool v27; // sf
  HDEV v28; // rdi
  wchar_t *DeviceFromName; // r14
  int i; // eax
  unsigned __int16 v31; // cx
  int PrimaryAttachFlags; // eax
  unsigned int v33; // r12d
  unsigned int *v34; // r14
  UNICODE_STRING *v35; // rax
  MULTIDEVLOCKOBJ *v36; // r15
  unsigned int v37; // ebx
  unsigned int v38; // edx
  unsigned int *v39; // r8
  unsigned int v40; // eax
  char v41; // r9
  unsigned int v42; // ecx
  unsigned int v43; // ebx
  _DWORD *v44; // rdi
  struct D3DKMT_GETPATHSMODALITY *v45; // rax
  struct tagRECT *v46; // r13
  unsigned int v47; // r10d
  unsigned int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rax
  _DWORD *v51; // r8
  __int64 v52; // rax
  unsigned int v53; // r12d
  struct tagSIZE v54; // rdi
  unsigned int v55; // ebx
  __int64 v56; // rbx
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned int v61; // r12d
  unsigned int v62; // r14d
  __int64 v63; // r12
  __int64 v64; // rbx
  void (__fastcall *v65)(__int64, __int64); // rax
  struct tagRECT v66; // xmm0
  __int64 v67; // rax
  int v69; // eax
  bool v70; // zf
  __int64 v71; // rax
  struct _DRV_NAMES *v72; // r13
  unsigned int v73; // edi
  unsigned int v74; // r15d
  unsigned int v75; // r12d
  struct _devicemodeW *v76; // rbx
  struct _devicemodeW *v77; // rcx
  int v78; // eax
  struct _devicemodeW *v79; // rbx
  struct _devicemodeW *v80; // rax
  __int64 v81; // rbx
  __int64 v82; // r10
  __int64 DisplayDriverNames; // rax
  __int64 v84; // rdx
  __int64 v85; // r8
  struct _DRV_NAMES *v86; // r12
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // r15
  unsigned __int16 cx; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v93; // rax
  int v94; // eax
  unsigned int v95; // eax
  unsigned int v96; // eax
  HDEV *v97; // rdx
  __int64 v98; // r8
  HDEV v99; // rcx
  HDEV v100; // rax
  unsigned int v101; // ecx
  unsigned int *v102; // rbx
  unsigned __int64 v103; // rax
  void *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned int v107; // eax
  unsigned int v108; // edx
  unsigned int v109; // edx
  int v110; // ecx
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned int v113; // edx
  int v114; // eax
  unsigned int v115; // edx
  unsigned int v116; // r8d
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rdx
  unsigned int v120; // r14d
  __int64 v121; // rbx
  unsigned int v122; // r14d
  unsigned int v123; // kr00_4
  unsigned int v124; // ecx
  unsigned int v125; // eax
  unsigned int v126; // edx
  unsigned int v127; // ecx
  unsigned int v128; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  unsigned int v132; // r9d
  unsigned __int64 v133; // rdx
  __int64 v134; // rax
  int v135; // ecx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v136; // rdx
  struct _ERESOURCE *v137; // rcx
  unsigned int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // rax
  __int64 v147; // rdx
  int v148; // eax
  __int64 v149; // rax
  struct _devicemodeW *v150; // rbx
  struct _devicemodeW *v151; // rbx
  int v152; // eax
  HDEV v153; // rax
  struct _devicemodeW *v154; // rbx
  int v155; // eax
  int v156; // eax
  __int64 dmPelsHeight; // r9
  __int64 dmPelsWidth; // r8
  __int64 v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  int DpiSettingWithNoDefaultSupported; // eax
  unsigned int v166; // eax
  _QWORD *v167; // rax
  int v168; // edx
  __int64 v169; // rax
  __int64 v170; // rax
  _DWORD *v171; // r14
  unsigned int v172; // ecx
  unsigned int v173; // eax
  int v174; // r8d
  int v175; // edx
  __int64 v176; // rdi
  __int64 v177; // r10
  __int64 v178; // rbx
  unsigned int v179; // r10d
  __int64 v180; // rdi
  int v181; // edx
  __int64 v182; // r9
  __int64 v183; // r8
  __int64 v184; // rax
  int v185; // ecx
  unsigned int *v186; // r12
  int v187; // r8d
  __int64 v188; // rbx
  unsigned int Src; // [rsp+28h] [rbp-E0h]
  unsigned int Srca; // [rsp+28h] [rbp-E0h]
  int v191; // [rsp+38h] [rbp-D0h]
  int v192; // [rsp+38h] [rbp-D0h]
  struct _DPI_INFORMATION *v193; // [rsp+40h] [rbp-C8h]
  int v194; // [rsp+40h] [rbp-C8h]
  int v195; // [rsp+58h] [rbp-B0h]
  unsigned int v196; // [rsp+5Ch] [rbp-ACh]
  struct tagSIZE v197; // [rsp+60h] [rbp-A8h] BYREF
  int v198; // [rsp+68h] [rbp-A0h]
  int v199; // [rsp+6Ch] [rbp-9Ch]
  int PruneFlag; // [rsp+70h] [rbp-98h]
  unsigned int v201; // [rsp+74h] [rbp-94h]
  __int64 v202; // [rsp+78h] [rbp-90h]
  HDEV v203; // [rsp+80h] [rbp-88h] BYREF
  void *Buf2; // [rsp+88h] [rbp-80h]
  unsigned int v205; // [rsp+90h] [rbp-78h] BYREF
  int v206; // [rsp+94h] [rbp-74h]
  int v207; // [rsp+98h] [rbp-70h]
  struct _devicemodeW *v208; // [rsp+A0h] [rbp-68h]
  int v209; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v210; // [rsp+ACh] [rbp-5Ch] BYREF
  int v211; // [rsp+B0h] [rbp-58h]
  struct tagSIZE v212; // [rsp+B8h] [rbp-50h]
  int v213; // [rsp+C0h] [rbp-48h]
  struct tagSIZE v214; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v215[2]; // [rsp+D0h] [rbp-38h] BYREF
  struct tagSIZE *v216; // [rsp+D8h] [rbp-30h]
  struct tagSIZE v217[13]; // [rsp+E0h] [rbp-28h] BYREF
  PCUNICODE_STRING String1a; // [rsp+158h] [rbp+50h]
  unsigned int v222; // [rsp+168h] [rbp+60h]
  unsigned int v224; // [rsp+170h] [rbp+68h]
  struct _MDEV *v225; // [rsp+178h] [rbp+70h]
  int v226; // [rsp+178h] [rbp+70h]

  v9 = a4;
  v195 = 0;
  v198 = 0;
  LODWORD(v202) = 0;
  v213 = 0;
  v206 = a4 & 1;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v13 = a5;
  v12[3] = a1;
  v12[4] = a3;
  v12[5] = v9;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  v14 = PALLOCMEM2(0x60uLL, 0x73726447u, 1);
  v16 = (__int64)v14;
  if ( !v14 )
    goto LABEL_90;
  v14[5] = 0;
  *((_QWORD *)v14 + 3) = a3;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x76656447u, 0);
  v19 = 0LL;
  v208 = v17;
  if ( !v17 )
    goto LABEL_294;
  v20 = a6;
  v21 = a9;
  v199 = a8;
  PruneFlag = a6 != 0;
  v22 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    v207 = v22;
    while ( 2 )
    {
      v23 = v195;
      v15 = 1LL;
      v196 = 1;
      v18 = 0x1000000000LL;
      v24 = 0LL;
      v212 = 0LL;
      v25 = 0;
      v211 = 0;
      v205 = 0;
      v26 = 0;
      v210 = 0;
      v201 = 0;
      while ( 1 )
      {
        v27 = v23 < 0;
        if ( v23 )
          break;
        v28 = v19;
        Buf2 = v19;
        v203 = v19;
        if ( a1 )
        {
          if ( !v24 )
          {
            DeviceFromName = DrvGetDeviceFromName(a1);
            v20 = a6;
            v212 = (struct tagSIZE)DeviceFromName;
            v18 = a5 != 0LL ? v196 : 0;
            v19 = 0LL;
            v196 = v18;
            v15 = (unsigned int)v18;
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
          v134 = v25++;
          v211 = v25;
          v28 = (HDEV)*((_QWORD *)v13 + 7 * v134 + 5);
          Buf2 = v28;
          DeviceFromName = (wchar_t *)*((_QWORD *)v28 + 322);
          if ( DeviceFromName == v24 )
            goto LABEL_27;
          v135 = v198 ^ 1;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) == 0 )
            v135 = v198;
          if ( v135 )
            goto LABEL_27;
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v28 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6), 11LL);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v136 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v28 + 443);
          ++*((_DWORD *)v28 + 3);
          ++*((_DWORD *)v28 + 2);
          TrackObjectReferenceIncrement(1u, v136);
          if ( ((_DWORD)v28[10] & 0x400) != 0 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
              PsLeavePriorityRegion();
            }
            DrvEnableDisplay(v28);
            EngAcquireSemaphore(ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6));
          v137 = (struct _ERESOURCE *)*((_QWORD *)v28 + 6);
          if ( v137 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v137);
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
          v15 = v196;
          v20 = a6;
          v138 = (*((_DWORD *)DeviceFromName + 40) >> 2) & 1;
          v205 = 1;
          v210 = v138;
          goto LABEL_15;
        }
LABEL_9:
        if ( v22 == 4 )
        {
          if ( v26 >= *((unsigned __int16 *)v21 + 10) )
            goto LABEL_33;
          v81 = v26;
          if ( (*((_QWORD *)v21 + 34 * v26 + 6) & 0x1000000000LL) != 0 )
            goto LABEL_216;
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *(_DWORD *)((char *)v21 + v82 + 240) < (int)v19 )
          {
            v15 = v196;
LABEL_216:
            v201 = ++v26;
            goto LABEL_29;
          }
          DeviceFromName = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0
                && *((_DWORD *)DeviceFromName + 62) == *(_DWORD *)((char *)v21 + v82 + 64)
                && *((_DWORD *)DeviceFromName + 63) == *(_DWORD *)((char *)v21 + v82 + 68)
                && *((_DWORD *)DeviceFromName + 64) == *(_DWORD *)((char *)v21 + v82 + 72) )
              {
                break;
              }
              DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
            }
            while ( DeviceFromName );
            goto LABEL_120;
          }
          goto LABEL_225;
        }
        DeviceFromName = gpGraphicsDeviceList;
        for ( i = (int)v19; DeviceFromName && i != v25; ++i )
          DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
        v211 = ++v25;
        if ( gbBaseVideo != (_DWORD)v19 && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
          goto LABEL_28;
LABEL_15:
        if ( v22 == 4 )
        {
          if ( v28 )
          {
            v139 = WdLogNewEntry5_WdAssertion(v15, v18, v24);
            WdLogEvent5_WdAssertion(v139);
            v19 = 0LL;
          }
LABEL_120:
          if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 41) & 1) == 0 )
          {
            DisplayDriverNames = DrvGetDisplayDriverNames(DeviceFromName);
            v19 = 0LL;
            v86 = (struct _DRV_NAMES *)DisplayDriverNames;
            if ( !DisplayDriverNames )
              goto LABEL_133;
            v87 = *((unsigned __int16 *)v21 + 10);
            if ( v26 >= (unsigned int)v87 )
            {
              v140 = WdLogNewEntry5_WdAssertion(v87, v84, v85);
              WdLogEvent5_WdAssertion(v140);
            }
            v88 = 0x1000000000LL;
            v89 = 272LL * v26;
            if ( (*(_QWORD *)((_BYTE *)v21 + v89 + 48) & 0x1000000000LL) != 0 )
            {
              v141 = WdLogNewEntry5_WdAssertion(0x1000000000LL, v84, v85);
              WdLogEvent5_WdAssertion(v141);
            }
            if ( !*(_QWORD *)((char *)v21 + v89 + 272) )
            {
              v142 = WdLogNewEntry5_WdAssertion(v88, v84, v85);
              WdLogEvent5_WdAssertion(v142);
            }
            cx = gdmLogPixels;
            if ( !gdmLogPixels )
            {
              GetDpiSetting(1LL, &v214);
              cx = v214.cx;
              gdmLogPixels = v214.cx;
            }
            *(_WORD *)(*(_QWORD *)((char *)v21 + v89 + 272) + 166LL) = cx;
            DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            v28 = hCreateHDEV(
                    (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                    v86,
                    *(struct _devicemodeW **)((char *)v21 + v89 + 272),
                    a3,
                    DriverCapableOverRide,
                    DriverAccelerationsLevel,
                    v206,
                    (a4 >> 2) & 1,
                    1u,
                    &v203);
            Win32FreePool((__int64)v86);
            v19 = 0LL;
            if ( v28 )
            {
              v15 = *(unsigned int *)((char *)v21 + v89 + 236);
              v26 = v201;
              *((_DWORD *)v28 + 661) = v15;
LABEL_133:
              if ( v28 )
              {
LABEL_134:
                v201 = ++v26;
                goto LABEL_135;
              }
            }
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL);
            v26 = v201;
            v19 = 0LL;
          }
          if ( v28 )
            goto LABEL_134;
          v81 = v26;
LABEL_225:
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *((_DWORD *)v21 + 68 * v81 + 60) < (int)v19 )
          {
            v146 = WdLogNewEntry5_WdAssertion(v144, v143, v145);
            WdLogEvent5_WdAssertion(v146);
            v19 = 0LL;
          }
          v15 = (unsigned __int16)v19;
          if ( (unsigned __int16)v19 < *((_WORD *)v21 + 10) )
          {
            do
            {
              v147 = 272LL * (unsigned __int16)v15;
              if ( *(_DWORD *)((char *)v21 + v147 + 232) == *((_DWORD *)v21 + 68 * v81 + 58) )
                *(_DWORD *)((char *)v21 + v147 + 240) = -1073741823;
              LOWORD(v15) = v15 + 1;
            }
            while ( (unsigned __int16)v15 < *((_WORD *)v21 + 10) );
          }
          goto LABEL_134;
        }
        if ( !DeviceFromName )
          goto LABEL_33;
        if ( (*((_DWORD *)DeviceFromName + 41) & 1) != 0 )
          goto LABEL_28;
        if ( v20 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          LODWORD(v19) = 0;
        }
        if ( v28 )
        {
LABEL_136:
          v93 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v93);
          v94 = *((_DWORD *)DeviceFromName + 40);
          v19 = 0LL;
          LODWORD(v202) = 1;
          if ( v210 )
            v95 = v94 | 4;
          else
            v95 = v94 & 0xFFFFFFFB;
          *((_DWORD *)DeviceFromName + 40) = v95;
          if ( !v203 )
          {
            if ( a5 )
            {
              v96 = *((_DWORD *)a5 + 5);
              if ( v96 )
              {
                v97 = (HDEV *)((char *)a5 + 40);
                v98 = v96;
                do
                {
                  v99 = *v97;
                  v97 += 7;
                  v100 = v203;
                  if ( DeviceFromName == *((wchar_t **)v99 + 322) )
                    v100 = v99;
                  v203 = v100;
                  --v98;
                }
                while ( v98 );
              }
            }
          }
          *(_QWORD *)(56LL * *(unsigned int *)(v16 + 20) + v16 + 40) = v28;
          *(_QWORD *)(56LL * *(unsigned int *)(v16 + 20) + v16 + 48) = v203;
          v101 = *(_DWORD *)(v16 + 20);
          if ( v101 + 2 >= v101 )
          {
            v102 = (unsigned int *)v16;
            *(_DWORD *)(v16 + 20) = v101 + 1;
            v103 = 96LL * (v101 + 2);
            if ( v103 > 0xFFFFFFFF )
            {
              v16 = 0LL;
            }
            else
            {
              v104 = PALLOCMEM2((unsigned int)v103, 0x73726447u, 1);
              v19 = 0LL;
              v16 = (__int64)v104;
            }
            if ( !v16 )
            {
              v13 = a5;
              v23 = -1073741670;
              v15 = v196;
              v16 = (__int64)v102;
              v195 = -1073741670;
              goto LABEL_30;
            }
            memmove((void *)v16, v102, 96LL * v102[5]);
            Win32FreePool((__int64)v102);
            v19 = 0LL;
          }
          goto LABEL_27;
        }
        if ( gForceDisconnect != (_DWORD)v19 || v22 == 3 )
          v31 = -1;
        else
          v31 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v31, &v210, &v205);
        v19 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_33;
        if ( v22 == 1 || v22 == 3 )
        {
          if ( !v205 )
            goto LABEL_27;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          {
            v69 = v198;
          }
          else
          {
            if ( !v198 )
              goto LABEL_96;
            v69 = 0;
          }
          v70 = v69 == 0;
        }
        else
        {
          if ( v22 != 2 )
          {
            v149 = WdLogNewEntry5_WdAssertion(v15, v18, v24);
            WdLogEvent5_WdAssertion(v149);
            v19 = 0LL;
            if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || (_DWORD)v202 )
              goto LABEL_27;
            goto LABEL_96;
          }
          v148 = *((_DWORD *)DeviceFromName + 40);
          if ( (v148 & 8) == 0 )
          {
            if ( (v148 & 0x2000000) != 0 || (_DWORD)v202 || gProtocolType == -1 )
              goto LABEL_27;
            goto LABEL_96;
          }
          if ( !v205 )
            goto LABEL_27;
          v70 = v198 == 0;
        }
        if ( v70 )
          goto LABEL_27;
LABEL_96:
        v71 = DrvGetDisplayDriverNames(DeviceFromName);
        v19 = 0LL;
        v72 = (struct _DRV_NAMES *)v71;
        if ( !v71 )
          goto LABEL_27;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
        {
          v73 = 4;
          v74 = 0;
          v75 = 0;
        }
        else
        {
          v73 = 1;
          v74 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v75 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        }
        if ( a2 )
        {
          v77 = a2;
        }
        else
        {
          v76 = v208;
          memset(v208, 0, sizeof(struct _devicemodeW));
          v77 = v76;
          v76->dmSize = 220;
        }
        v78 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                (struct _devicemodeW **)&v197,
                &v209,
                0LL,
                v77,
                0,
                PruneFlag,
                a7,
                v199,
                0LL);
        if ( v78 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4LL);
LABEL_104:
          v79 = (struct _devicemodeW *)v197;
          v28 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  v72,
                  *(struct _devicemodeW **)&v197,
                  a3,
                  v74,
                  v75,
                  v206,
                  (a4 >> 2) & 1,
                  v73,
                  &v203);
          if ( !v28 && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
          goto LABEL_105;
        }
        if ( v78 == -1073741776 )
        {
          v150 = *(struct _devicemodeW **)(*(_QWORD *)(v16 + 40) + 2592LL);
          if ( *(_QWORD *)&v197 && *(struct _devicemodeW **)&v197 != v208 )
          {
            Win32FreePool(*(_QWORD *)&v197);
            v197 = 0LL;
          }
          v78 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  (struct _devicemodeW **)&v197,
                  &v209,
                  0LL,
                  v150,
                  0,
                  PruneFlag,
                  a7,
                  v199,
                  0LL);
        }
        if ( v78 >= 0 )
          goto LABEL_104;
        DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
        v79 = (struct _devicemodeW *)v197;
        v28 = (HDEV)Buf2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
          gulDriverFailureReason = 4;
LABEL_105:
        v80 = a2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
          goto LABEL_278;
        if ( !v28 )
        {
          DrvLogDisplayDriverEvent(4LL);
          if ( v79 )
          {
            if ( v79->dmBitsPerPel == 4 )
              DrvLogDisplayDriverEvent(5LL);
            if ( v79 != v208 )
            {
              Win32FreePool((__int64)v79);
              v197 = 0LL;
            }
          }
          v151 = v208;
          memset(v208, 0, sizeof(struct _devicemodeW));
          v151->dmSize = 220;
          v152 = DrvProbeAndCaptureDevmode(
                   (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                   (struct _devicemodeW **)&v197,
                   &v209,
                   0LL,
                   v151,
                   1,
                   PruneFlag,
                   a7,
                   v199,
                   0LL);
          v79 = (struct _devicemodeW *)v197;
          if ( v152 >= 0 )
          {
            v153 = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                     v72,
                     *(struct _devicemodeW **)&v197,
                     a3,
                     v74,
                     v75,
                     v206,
                     (a4 >> 2) & 1,
                     1u,
                     &v203);
            Buf2 = v153;
            if ( v153 || v79->dmPelsWidth == 640 && v79->dmPelsHeight == 480 && v79->dmBitsPerPel == 4 )
            {
LABEL_272:
              v28 = v153;
            }
            else
            {
              if ( v79 != v208 )
              {
                Win32FreePool((__int64)v79);
                v197 = 0LL;
              }
              v154 = v208;
              memset(v208, 0, sizeof(struct _devicemodeW));
              v154->dmSize = 220;
              v155 = v199;
              v154->dmBitsPerPel = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0 ? 32 : 4;
              v194 = a7;
              v192 = PruneFlag;
              v154->dmPelsWidth = 640;
              v154->dmPelsHeight = 480;
              v154->dmFields = 1835008;
              v156 = DrvProbeAndCaptureDevmode(
                       (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                       (struct _devicemodeW **)&v197,
                       &v209,
                       0LL,
                       v154,
                       0,
                       v192,
                       v194,
                       v155,
                       0LL);
              v79 = (struct _devicemodeW *)v197;
              if ( v156 >= 0 )
              {
                v153 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                         v72,
                         *(struct _devicemodeW **)&v197,
                         a3,
                         v74,
                         v75,
                         v206,
                         (a4 >> 2) & 1,
                         1u,
                         &v203);
                goto LABEL_272;
              }
              v28 = (HDEV)Buf2;
            }
          }
          if ( v79 )
          {
            dmPelsHeight = v79->dmPelsHeight;
            dmPelsWidth = v79->dmPelsWidth;
            v159 = v28 != 0LL;
          }
          else
          {
            v159 = 2LL;
            dmPelsHeight = v208->dmPelsHeight;
            dmPelsWidth = v208->dmPelsWidth;
          }
          DrvDxgkLogCodePointPacket(26LL, v159, dmPelsWidth, dmPelsHeight);
          v80 = 0LL;
LABEL_278:
          if ( !v28 && !v80 )
          {
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL);
          }
        }
        if ( v79 && v79 != v208 )
          Win32FreePool((__int64)v79);
        Win32FreePool((__int64)v72);
        v26 = v201;
        v19 = 0LL;
LABEL_135:
        if ( v28 )
          goto LABEL_136;
LABEL_27:
        v15 = v196;
LABEL_28:
        v13 = a5;
LABEL_29:
        v23 = v195;
LABEL_30:
        v22 = v207;
        v18 = 0x1000000000LL;
        v21 = a9;
        v25 = v211;
        v24 = (wchar_t *)v212;
        v20 = a6;
        if ( !(_DWORD)v15 )
        {
          v27 = v23 < 0;
          break;
        }
      }
      if ( v27 )
        goto LABEL_285;
LABEL_33:
      if ( v22 == 4 )
      {
        if ( (_DWORD)v202 != (_DWORD)v19 )
        {
          v105 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v105);
          v22 = 1;
          v207 = 1;
          goto LABEL_153;
        }
        v162 = WdLogNewEntry5_WdError(v15, v18, v24);
        *(_QWORD *)(v162 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v162);
        goto LABEL_294;
      }
      if ( (_DWORD)v202 != (_DWORD)v19 )
      {
        if ( v198 != (_DWORD)v19 )
        {
          v195 = (int)v19;
          goto LABEL_37;
        }
        v106 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v106);
LABEL_153:
        v13 = a5;
        v19 = 0LL;
        v20 = a6;
        v198 = 1;
        continue;
      }
      break;
    }
    if ( v22 == 1 )
    {
      v160 = WdLogNewEntry5_WdTrace(v15);
      WdLogEvent5_WdTrace(v160);
      v19 = 0LL;
      v22 = 2;
      v199 = 0;
LABEL_292:
      v20 = a6;
      v13 = a5;
      continue;
    }
    break;
  }
  if ( v22 == 2 && (unsigned int)UserIsWddmConnectedSession(v15, v18) )
  {
    v161 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v161);
    v19 = 0LL;
    v22 = 3;
    goto LABEL_292;
  }
  if ( !v25 )
  {
    v164 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v164);
    goto LABEL_294;
  }
  v163 = WdLogNewEntry5_WdTrace(v15);
  WdLogEvent5_WdTrace(v163);
  v23 = -1073741204;
  v19 = 0LL;
  v195 = -1073741204;
LABEL_285:
  if ( v23 )
  {
LABEL_87:
    if ( v195 < 0 )
      goto LABEL_294;
    goto LABEL_88;
  }
LABEL_37:
  if ( (a4 & 2) != 0 )
    goto LABEL_87;
  v224 = (unsigned int)v19;
  v225 = (struct _MDEV *)v19;
  v33 = (unsigned int)v19;
  v34 = (unsigned int *)v19;
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
  if ( v36 )
  {
    MULTIDEVLOCKOBJ::vInit(v36, (struct _MDEV *)v16);
    if ( (*(_DWORD *)v36 & 1) != 0 )
    {
      MULTIDEVLOCKOBJ::vLock(v36);
      v37 = *(_DWORD *)(v16 + 20);
      v38 = 0;
      if ( v37 )
      {
        do
        {
          v39 = *(unsigned int **)(*(_QWORD *)(56LL * v38 + v16 + 40) + 2576LL);
          v40 = v39[40];
          if ( (v40 & 8) != 0 )
          {
            if ( (v40 & 4) != 0 )
            {
              v40 &= ~4u;
              v39[40] = v40;
            }
            v42 = v40;
            v41 = v40;
          }
          else
          {
            v41 = v39[40];
            v42 = v39[40];
            if ( !v34 )
              v33 = v38;
          }
          if ( (v41 & 4) != 0 )
          {
            if ( v34 )
            {
              v195 = -1073741438;
              v39[40] = v42 & 0xFFFFFFFB;
            }
            else
            {
              v34 = v39;
              v33 = v38;
            }
          }
          v37 = *(_DWORD *)(v16 + 20);
          ++v38;
        }
        while ( v38 < v37 );
        v224 = v33;
        v225 = (struct _MDEV *)v34;
      }
      v43 = 16 * v37;
      Buf2 = PALLOCMEM2(v43, 0x73726447u, 0);
      v44 = Buf2;
      v45 = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(v43, 0x73726447u, 0);
      a9 = v45;
      v46 = (struct tagRECT *)v45;
      if ( v44 )
      {
        if ( v45 )
        {
          v47 = 0;
          v222 = 0;
          v48 = 0;
          if ( *(_DWORD *)(v16 + 20) )
          {
            do
            {
              v49 = 2LL * v48;
              v50 = *(_QWORD *)(56LL * v48 + v16 + 40);
              v51 = *(_DWORD **)(v50 + 2592);
              v44[2 * v49] = v51[19];
              v44[2 * v49 + 1] = v51[20];
              v44[2 * v49 + 2] = v51[19] + v51[43];
              v44[2 * v49 + 3] = v51[20] + v51[44];
              if ( (*(_DWORD *)(*(_QWORD *)(v50 + 2576) + 160LL) & 8) == 0 )
              {
                if ( !v34 && !v51[19] && !v51[20] )
                {
                  v33 = v48;
                  v34 = *(unsigned int **)(v50 + 2576);
                }
                ++v47;
              }
              ++v48;
            }
            while ( v48 < *(_DWORD *)(v16 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v222 = v47;
            v224 = v33;
            v225 = (struct _MDEV *)v34;
          }
          memmove(v46, v44, v43);
          if ( !gDrvDpiAdjusted )
          {
            gDrvDpiWin8Style = 0;
            a6 = 0;
            if ( ((gProtocolType + 1) & 0xFFFE) == 0 && (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
            {
              GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
              if ( gDrvDpiWin8Style )
              {
                DpiSettingWithNoDefaultSupported = IsGetDpiSettingWithNoDefaultSupported();
                if ( DpiSettingWithNoDefaultSupported >= 0 )
                  GetDpiSettingWithNoDefault(0LL, &a6);
                v166 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v166 = 96;
                if ( v166 >= 0x1E0 )
                  LOWORD(v166) = 480;
                gdmLogPixels = v166;
              }
            }
          }
          v52 = v33;
          v53 = 0;
          v54 = *(struct tagSIZE *)(56 * v52 + v16 + 40);
          v212 = v54;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v54 + 2576LL) + 160LL) |= 4u;
          v55 = *(_DWORD *)(v16 + 20);
          if ( v55 )
          {
            do
            {
              v56 = *(_QWORD *)(56LL * v53 + v16 + 40);
              if ( (*(_DWORD *)(*(_QWORD *)(v56 + 2576) + 160LL) & 0x800000) != 0 )
              {
                v57 = 0;
                if ( v53 == v224 )
                  v57 = 32;
                *(_DWORD *)(v56 + 2548) = *(_DWORD *)(v56 + 2548) & 0xFFFFFFDF | v57;
                a6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))qword_1C0215218)(
                       *(_QWORD *)(*(_QWORD *)(v56 + 2576) + 240LL),
                       *(unsigned int *)(*(_QWORD *)(v56 + 2576) + 256LL),
                       v56 + 2136);
                if ( a6 < 0 )
                {
                  v167 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58, v60);
                  v167[3] = a6;
                  v167[4] = *(_QWORD *)(*(_QWORD *)(v56 + 2576) + 240LL);
                  v167[5] = *(unsigned int *)(*(_QWORD *)(v56 + 2576) + 256LL);
                  WdLogEvent5_WdError(v167);
                }
              }
              v55 = *(_DWORD *)(v16 + 20);
              ++v53;
            }
            while ( v53 < v55 );
            v54 = v212;
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v34 = (unsigned int *)v225;
            v46 = (struct tagRECT *)a9;
          }
          v61 = 0;
          if ( !gDrvDpiAdjusted )
          {
            gDrvDpiWin8Style = 0;
            a6 = 0;
            if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
            {
              v107 = *(_DWORD *)(*(_QWORD *)&v54 + 3552LL);
              if ( v107 )
              {
                v108 = (96 * HIWORD(v107) + 50) / 0x64u;
              }
              else
              {
                if ( wcsncmp(*((const wchar_t **)v34 + 25), L"WORKERDD", v34[66])
                  && wcsncmp(*((const wchar_t **)v34 + 25), L"TSDDD", v34[66]) )
                {
                  gDrvDpiWin8Style = 1;
                }
                GetDpiSetting(2LL, &a6);
                v108 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v108 = 96;
                if ( v108 >= 0x1E0 )
                  v108 = 480;
                a6 = v108;
              }
              gdmLogPixels = v108;
              v109 = 0;
              v55 = *(_DWORD *)(v16 + 20);
              if ( v55 )
              {
                do
                {
                  v110 = gdmLogPixels;
                  v111 = v109++;
                  v112 = *(_QWORD *)(56 * v111 + v16 + 40);
                  *(_DWORD *)(v112 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v112 + 2176) = v110;
                  *(_WORD *)(*(_QWORD *)(v112 + 2592) + 166LL) = gdmLogPixels;
                  v55 = *(_DWORD *)(v16 + 20);
                }
                while ( v109 < v55 );
              }
            }
            else
            {
              v113 = (96 * *(_DWORD *)(*(_QWORD *)&v54 + 2468LL) + 50) / 0x64u;
              if ( (_WORD)v113 )
                SetDpiSetting(1LL, (unsigned __int16)v113);
              if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
                GetWin8StyleDpiSettingFromRegistry(&gDrvDpiWin8Style);
              if ( gDrvDpiWin8Style )
              {
                if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 )
                  GetDpiSettingWithNoDefault(0LL, &a6);
                v115 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v115 = 96;
                if ( v115 >= 0x1E0 )
                  v115 = 480;
                a6 = v115;
              }
              else
              {
                v114 = *(_DWORD *)(*(_QWORD *)&v54 + 2464LL);
                if ( v114 )
                  v115 = (96 * v114 + 50) / 0x64u;
                else
                  LOWORD(v115) = 96;
              }
              gdmLogPixels = v115;
              v116 = 0;
              v55 = *(_DWORD *)(v16 + 20);
              if ( v55 )
              {
                do
                {
                  v117 = gdmLogPixels;
                  v118 = *(_QWORD *)(56LL * v116 + v16 + 40);
                  v119 = *(_QWORD *)(v118 + 2592);
                  *(_DWORD *)(v118 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v118 + 2176) = v117;
                  *(_WORD *)(v119 + 166) = gdmLogPixels;
                  if ( gDrvDpiWin8Style )
                  {
                    v168 = 100 * gdmLogPixels;
                    *(_DWORD *)(v118 + 2540) = 1234568;
                    *(_DWORD *)(v118 + 2464) = (v168 + 48) / 0x60u;
                  }
                  v55 = *(_DWORD *)(v16 + 20);
                  ++v116;
                }
                while ( v116 < v55 );
              }
            }
            gDrvDpiAdjusted = 1;
          }
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
          {
            v226 = 1;
            v120 = 1;
            if ( v55 )
            {
              do
              {
                v121 = *(_QWORD *)(56LL * v61 + v16 + 40);
                v122 = *(_DWORD *)(v121 + 3552);
                v123 = *(_DWORD *)(v121 + 2148);
                LOBYTE(a6) = ((*(_DWORD *)(*(_QWORD *)(v121 + 2592) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                v124 = v123 / 0x3E8;
                v125 = *(_DWORD *)(v121 + 2144) / 0x3E8u;
                if ( (_BYTE)a6 )
                {
                  v125 = v123 / 0x3E8;
                  v124 = *(_DWORD *)(v121 + 2144) / 0x3E8u;
                }
                v126 = *(_DWORD *)(v121 + 2156);
                v212 = (struct tagSIZE)__PAIR64__(v124, v125);
                v127 = *(_DWORD *)(v121 + 2152);
                v214 = v212;
                v128 = v127;
                if ( (_BYTE)a6 )
                {
                  v128 = v126;
                  v126 = v127;
                }
                v203 = (HDEV)__PAIR64__(v126, v128);
                v197 = (struct tagSIZE)__PAIR64__(v126, v128);
                memset(v217, 0, 0x20uLL);
                v215[0] = 1;
                v216 = v217;
                v215[1] = 32;
                if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v215) < 0 )
                {
                  v169 = WdLogNewEntry5_WdAssertion(v130, v129, v131);
                  WdLogEvent5_WdAssertion(v169);
                }
                v193 = (struct _DPI_INFORMATION *)(v121 + 2456);
                if ( v122 )
                {
                  FillDpiInfo(&v214, &v197, (struct tagSIZE)v217, v132, 0, HIWORD(v122), v191, v193);
                  *(_DWORD *)(v121 + 2548) |= 0x200u;
                  v120 = v226;
                }
                else
                {
                  *(_DWORD *)(v121 + 2548) &= ~0x200u;
                  v120 = 0;
                  v226 = 0;
                  FillDpiInfo(&v214, &v197, (struct tagSIZE)v217, v132, gdmLogPixels, 0, v191, v193);
                }
                GetRemoteScaleOverrideTestHook(
                  (const unsigned __int16 *)(*(_QWORD *)(v121 + 2576) + 64LL),
                  v133,
                  (struct _DPI_INFORMATION *)(v121 + 2456));
                ++v61;
                *(_DWORD *)(v121 + 2548) = *(_DWORD *)(v121 + 2548) & 0xFFFFFF7F | ((unsigned __int8)a6 << 7);
              }
              while ( v61 < *(_DWORD *)(v16 + 20) );
              v36 = (MULTIDEVLOCKOBJ *)String1a;
              v46 = (struct tagRECT *)a9;
            }
            UserSetScaleFactorsFromRemoteMetric(v120);
            v213 = 1;
          }
          else
          {
            *((_DWORD *)gpsi + 559) &= ~0x40u;
          }
          gdmLogPixelsOfPrimary = (96 * *(_DWORD *)(*(_QWORD *)&v54 + 2468LL) + 50) / 0x64u;
          AlignRects(v46, v222);
          v44 = Buf2;
          if ( memcmp(v46, Buf2, 16LL * v222) )
          {
            v170 = WdLogNewEntry5_WdWarning();
            WdLogEvent5_WdWarning(v170);
          }
          v62 = 0;
          if ( *(_DWORD *)(v16 + 20) )
          {
            do
            {
              v63 = 56LL * v62;
              v64 = *(_QWORD *)(v63 + v16 + 40);
              *(_QWORD *)(v64 + 2584) = *(_QWORD *)&v46[v62].left;
              v65 = *(void (__fastcall **)(__int64, __int64))(v64 + 3384);
              if ( v65 )
                v65((*(_QWORD *)(v64 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v64 + 2552) != 0LL), 2LL);
              v66 = v46[v62++];
              *(struct tagRECT *)(v63 + v16 + 56) = v66;
              *(_DWORD *)(v63 + v16 + 72) = *(_DWORD *)(v64 + 2464);
            }
            while ( v62 < *(_DWORD *)(v16 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v44 = Buf2;
          }
          if ( (unsigned int)bUniformSpaceDpiMode() )
          {
            v171 = PALLOCMEM2((unsigned int)(4 * *(_DWORD *)(v16 + 20)), 0x73726447u, 0);
            if ( v171 )
            {
              v172 = *(_DWORD *)(v16 + 20);
              v173 = 0;
              if ( v172 )
              {
                do
                {
                  v171[v173] = v173;
                  ++v173;
                  v172 = *(_DWORD *)(v16 + 20);
                }
                while ( v173 < v172 );
                v36 = (MULTIDEVLOCKOBJ *)String1a;
              }
              do
              {
                v174 = 0;
                v175 = 0;
                if ( v172 == 1 )
                {
                  v172 = *(_DWORD *)(v16 + 20);
                }
                else
                {
                  do
                  {
                    v176 = (unsigned int)(v175 + 1);
                    v177 = (unsigned int)v171[v176];
                    v178 = (unsigned int)v171[v175];
                    if ( *(_DWORD *)(56 * (v178 + 1) + v16) > *(_DWORD *)(56 * (v177 + 1) + v16) )
                    {
                      v171[v175] = v177;
                      v174 = 1;
                      v171[v176] = v178;
                    }
                    v172 = *(_DWORD *)(v16 + 20);
                    ++v175;
                  }
                  while ( (unsigned int)v176 < v172 - 1 );
                }
              }
              while ( v174 );
              v46 = (struct tagRECT *)a9;
              v179 = v172 - 1;
              LODWORD(v180) = 0;
              v181 = 0;
              if ( v172 == 1 )
              {
LABEL_344:
                v186 = &v171[(unsigned int)v180];
                MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, *v186, 0xFFFFFFFF, 0, Src);
                v187 = v180;
                if ( (unsigned int)v180 < *(_DWORD *)(v16 + 20) - 1 )
                {
                  do
                  {
                    v188 = (unsigned int)(v187 + 1);
                    MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, v171[v188], v171[v187], 1, Srca);
                    v187 = v188;
                  }
                  while ( (unsigned int)v188 < *(_DWORD *)(v16 + 20) - 1 );
                  v46 = (struct tagRECT *)a9;
                }
                while ( (_DWORD)v180 )
                {
                  v180 = (unsigned int)(v180 - 1);
                  MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, v171[v180], *v186--, 0, Srca);
                }
                *(_DWORD *)(v16 + 16) |= 2u;
                *(_DWORD *)(v16 + 32) = 96;
                gbUniformSpaceDpiMode = 1;
              }
              else
              {
                while ( 1 )
                {
                  v182 = (unsigned int)(v181 + 1);
                  v183 = 56 * ((unsigned int)v171[v181] + 1LL);
                  v184 = 56 * ((unsigned int)v171[v182] + 1LL);
                  v185 = *(_DWORD *)(v184 + v16);
                  if ( *(_DWORD *)(v183 + v16 + 8) != v185 )
                    break;
                  if ( *(_DWORD *)(v183 + v16) || *(_DWORD *)(v183 + v16 + 4) )
                  {
                    if ( !v185 && !*(_DWORD *)(v184 + v16 + 4) )
                      LODWORD(v180) = v181 + 1;
                  }
                  else
                  {
                    LODWORD(v180) = v181;
                  }
                  ++v181;
                  if ( (unsigned int)v182 >= v179 )
                    goto LABEL_344;
                }
              }
              Win32FreePool((__int64)v171);
              v44 = Buf2;
            }
          }
          else
          {
            gbUniformSpaceDpiMode = 0;
          }
        }
        Win32FreePool((__int64)v44);
      }
      if ( v46 )
        Win32FreePool((__int64)v46);
      MULTIDEVLOCKOBJ::vUnlock(v36);
      if ( v213 )
        ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    }
    MULTIDEVLOCKOBJ::`scalar deleting destructor'(v36);
    goto LABEL_87;
  }
LABEL_294:
  if ( v16 )
  {
    DrvBackoutMDEV((struct _MDEV *)v16, v18);
    Win32FreePool(v16);
    v16 = 0LL;
  }
LABEL_88:
  if ( v208 )
    Win32FreePool((__int64)v208);
LABEL_90:
  v67 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v67 + 24) = v16;
  WdLogEvent5_WdTrace(v67);
  return (struct _MDEV *)v16;
}
