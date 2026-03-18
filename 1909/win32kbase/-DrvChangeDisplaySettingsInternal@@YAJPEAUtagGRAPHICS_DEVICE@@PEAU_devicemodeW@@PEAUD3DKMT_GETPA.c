/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C
 * Callers:
 *     ApplyPathsModality @ 0x1C0041800 (ApplyPathsModality.c)
 *     DrvChangeDisplaySettings @ 0x1C00478FC (DrvChangeDisplaySettings.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00A575C (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0010424 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C001B510 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C003E120 (DrvUpdateDisplayDriverParameters.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00409D8 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0040AC4 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0040AF4 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     DrvEnableMDEV @ 0x1C0040C0C (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0040ED0 (DrvDisableMDEV.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0041B50 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0042C08 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0042E30 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00441DC (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0044638 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0044734 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C00448A4 (DrvDestroyMDEV.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0044A2C (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C006388C (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0068604 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicModeChange @ 0x1C00686C0 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00695E0 (bDynamicProcessAllDriverRealizations.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C006C6BC (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C009EDA4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00A4700 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B6660 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01274B0 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C012781C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0128690 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0128710 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C01287F0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01288FC (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        HSEMAPHORE a3,
        struct _ERESOURCE *a4,
        int a5,
        int a6,
        struct _MDEV *a7,
        __int64 *a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  __int64 v14; // rcx
  int v15; // r12d
  struct _UNICODE_STRING *p_DestinationString; // rbx
  int v18; // r14d
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  struct _devicemodeW *v23; // r13
  unsigned int v24; // r15d
  struct _MDEV *MDEV; // rdi
  int v26; // eax
  int v27; // eax
  struct D3DKMT_GETPATHSMODALITY *v28; // r15
  int v29; // r13d
  struct _MDEV *v30; // rax
  unsigned int v31; // r11d
  unsigned int v32; // r9d
  char *v33; // rcx
  signed __int64 v34; // r8
  __int64 v35; // r10
  __int64 v36; // rdx
  int v37; // r12d
  HDEV v38; // rbx
  HDEV v39; // r13
  MULTIDEVLOCKOBJ *v40; // rax
  MULTIDEVLOCKOBJ *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  MULTIDEVLOCKOBJ *v45; // r15
  struct _ERESOURCE *v46; // rax
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  unsigned int v52; // r15d
  __int64 v53; // rcx
  int v54; // eax
  struct PDEV *v55; // rdx
  struct _MDEV *v56; // rcx
  struct _ERESOURCE *v57; // rbx
  struct PDEV *v58; // rbx
  struct _ERESOURCE *v59; // rbx
  struct _ERESOURCE *v60; // rbx
  HDEV *v61; // rbx
  unsigned int i; // edx
  __int64 v63; // rax
  __int64 v64; // rcx
  wchar_t *j; // rax
  unsigned int k; // r9d
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // ecx
  int v71; // r10d
  unsigned int m; // ebx
  unsigned int v73; // r8d
  unsigned int v74; // edx
  HDEV n; // r9
  __int64 *v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rcx
  bool v80; // cc
  __int64 v81; // rax
  __int64 v82; // rax
  int PruneFlag; // edi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  struct _devicemodeW *v87; // rcx
  __int64 v88; // rax
  DWORD dmFields; // edi
  _QWORD *v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rcx
  int v93; // eax
  int updated; // eax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rax
  unsigned int v101; // edx
  __int64 v102; // r15
  HDEV CloneHDEV; // rax
  __int64 v104; // r15
  PERESOURCE v105; // r15
  HDEV v106; // rax
  unsigned int v107; // eax
  __int64 v108; // r9
  struct PDEV *v109; // r9
  struct PDEV *v110; // rax
  struct _ERESOURCE *v111; // r15
  int v112; // edx
  int v113; // ecx
  int v114; // r8d
  struct PDEV *v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rax
  signed __int32 v120; // ett
  signed __int32 v121; // ett
  HDEV v122; // rax
  HDEV v123; // r15
  __int64 v124; // rax
  unsigned int v125; // edx
  struct PDEV *v126; // rdx
  struct _devicemodeW *v127; // [rsp+58h] [rbp-A8h] BYREF
  HSEMAPHORE hsem; // [rsp+60h] [rbp-A0h]
  int v129[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v130[2]; // [rsp+70h] [rbp-90h] BYREF
  MULTIDEVLOCKOBJ *v131; // [rsp+78h] [rbp-88h]
  int v132; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE Resource; // [rsp+88h] [rbp-78h]
  MULTIDEVLOCKOBJ *v134; // [rsp+90h] [rbp-70h]
  PERESOURCE v135; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *v136; // [rsp+A0h] [rbp-60h]
  HDEV v137; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v138; // [rsp+B0h] [rbp-50h] BYREF
  HDEV v139; // [rsp+B8h] [rbp-48h] BYREF
  struct PDEV *v140; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  HDEV v142; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v143[3]; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v144[7]; // [rsp+F8h] [rbp-8h] BYREF

  v14 = 0LL;
  v15 = a10;
  p_DestinationString = 0LL;
  v18 = 0;
  v129[0] = a12;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v135 = a4;
  LODWORD(Resource) = a9 != 0;
  hsem = a3;
  v130[0] = a9;
  v127 = 0LL;
  v132 = 0;
  v131 = 0LL;
  v134 = 0LL;
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, a2, a3);
  v19[4] = a6;
  v19[5] = a5;
  v19[3] = a1;
  v19[6] = a9;
  v19[7] = a10;
  WdLogEvent5_WdEvent(v19);
  v22 = 0LL;
  if ( a2 )
  {
    if ( !a1 )
    {
      v81 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
      WdLogEvent5_WdAssertion(v81);
      v22 = 0LL;
    }
    if ( hsem )
    {
      v82 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
      WdLogEvent5_WdAssertion(v82);
      v22 = 0LL;
    }
  }
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
  *a8 = 0LL;
  if ( a1 )
  {
    if ( a9 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    else
      PruneFlag = (int)Resource;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v22 = 0LL;
    p_DestinationString = &DestinationString;
    v136 = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v127,
                  &v132,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v129[0],
                  0LL) < 0 )
      {
        v87 = v127;
        if ( v127 )
          Win32FreePool((__int64)v127);
        v88 = WdLogNewEntry5_WdTrace(v87);
        WdLogEvent5_WdTrace(v88);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_132;
      }
      dmFields = a2->dmFields;
      v90 = (_QWORD *)WdLogNewEntry5_WdEvent(v85, v84, v86);
      v90[3] = PsGetCurrentProcess(v92, v91);
      v90[4] = a2->dmPelsWidth;
      v90[5] = a2->dmPelsHeight;
      v90[6] = a2->dmBitsPerPel;
      v90[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v90);
      p_DestinationString = v136;
      v22 = 0LL;
      v93 = 1;
      if ( dmFields )
        v93 = a10;
      v15 = v93;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( !a5 || !a1 || !a2 )
  {
    v23 = v127;
LABEL_7:
    v24 = 0;
    goto LABEL_8;
  }
  v23 = v127;
  if ( gProtocolType == -1 )
    goto LABEL_7;
  updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v127, v132, 1);
  v24 = 0;
  if ( updated < 0 )
  {
    v22 = 4294967291LL;
    v18 = -2;
    if ( updated == -1073741582 )
      v18 = -5;
  }
LABEL_8:
  if ( !a6 || v18 )
    goto LABEL_124;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             v23,
             v135,
             a11 != 0 ? 4 : 0,
             0LL,
             v130[0],
             v15,
             v129[0],
             (struct D3DKMT_GETPATHSMODALITY *)hsem);
    if ( MDEV )
      v18 = 0;
    goto LABEL_28;
  }
  v26 = CheckAndNotifyDualView(p_DestinationString, a7);
  if ( !v26 )
  {
LABEL_15:
    v28 = (struct D3DKMT_GETPATHSMODALITY *)hsem;
    if ( (a13 & 1) != 0 && (unsigned int)DrvUpdateDisplayModeInMdev(a7, (struct D3DKMT_GETPATHSMODALITY *)hsem) )
    {
      v76 = a8;
      *a8 = (__int64)a7;
      DrvReleaseChangeDisplaySettingLocks();
      v18 = 3;
      v100 = WdLogNewEntry5_WdEvent(v98, v97, v99);
      WdLogEvent5_WdEvent(v100);
      goto LABEL_125;
    }
    if ( (unsigned int)DrvDisableMDEV((HDEV *)a7, 0LL, 0LL) )
    {
      v29 = gdmLogPixels;
      v30 = DrvCreateMDEV(p_DestinationString, v127, v135, a11 != 0 ? 4 : 0, a7, v130[0], v15, v129[0], v28);
      v24 = 0;
      MDEV = v30;
      if ( v30 )
      {
        v31 = *((_DWORD *)v30 + 5);
        v18 = 2;
        if ( v31 == *((_DWORD *)a7 + 5) && v29 == gdmLogPixels )
        {
          v32 = 0;
          if ( v31 )
          {
            v33 = (char *)v30 + 40;
            v34 = a7 - v30;
            do
            {
              if ( *(_QWORD *)v33 != *(_QWORD *)&v33[v34] || *((_DWORD *)v33 + 8) != *(_DWORD *)&v33[v34 + 32] )
                goto LABEL_135;
              v35 = 56LL * v32;
              v36 = *(_QWORD *)((char *)v30 + v35 + 56) - *(_QWORD *)((char *)a7 + v35 + 56);
              if ( !v36 )
                v36 = *(_QWORD *)((char *)v30 + v35 + 64) - *(_QWORD *)((char *)a7 + v35 + 64);
              if ( v36 )
LABEL_135:
                v18 = 0;
              ++v32;
              v33 += 56;
            }
            while ( v32 < v31 );
          }
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        DrvEnableMDEV((__int64 *)a7, 0LL, 0LL);
      }
    }
    else
    {
      v24 = 0;
    }
LABEL_28:
    v37 = 0;
    v130[0] = 0;
    v38 = 0LL;
    v129[0] = 0;
    v39 = 0LL;
    *a8 = (__int64)MDEV;
    if ( v18 )
    {
      if ( v18 == 2 )
      {
        v80 = *((_DWORD *)MDEV + 5) <= 1u;
        *(_QWORD *)MDEV = *(_QWORD *)a7;
        *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
        if ( !v80 )
        {
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v126 = *(struct PDEV **)MDEV;
          ++*((_DWORD *)v126 + 3);
          ++*((_DWORD *)v126 + 2);
          TrackObjectReferenceIncrement(
            1u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v126 + 443));
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
        }
      }
      goto LABEL_109;
    }
    v136 = 0LL;
    v135 = 0LL;
    hsem = 0LL;
    Resource = 0LL;
    v40 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v131 = v40;
    if ( v40 )
    {
      *(_QWORD *)v40 = 1LL;
      *((_QWORD *)v40 + 1) = 0LL;
      *((_QWORD *)v40 + 2) = 0LL;
    }
    else
    {
      v40 = 0LL;
      v131 = 0LL;
    }
    if ( v40 )
    {
      v41 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
      v134 = v41;
      if ( v41 )
      {
        *(_QWORD *)v41 = 1LL;
        *((_QWORD *)v41 + 1) = 0LL;
        *((_QWORD *)v41 + 2) = 0LL;
      }
      else
      {
        v41 = 0LL;
        v134 = 0LL;
      }
      if ( !v41 )
      {
LABEL_122:
        if ( v131 )
          MULTIDEVLOCKOBJ::`scalar deleting destructor'(v131);
        goto LABEL_124;
      }
      if ( *((_DWORD *)MDEV + 5) )
      {
        do
          DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v24++ + 5));
        while ( v24 < *((_DWORD *)MDEV + 5) );
      }
      if ( !a7 )
      {
LABEL_63:
        if ( v37 )
          goto LABEL_69;
        if ( a7 && *((_DWORD *)a7 + 5) == 1 )
        {
          *(_QWORD *)a7 = *((_QWORD *)a7 + 5);
          *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 6);
        }
        if ( *((_DWORD *)MDEV + 5) == 1 )
        {
          *(_QWORD *)MDEV = *((_QWORD *)MDEV + 5);
          *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 6);
          goto LABEL_69;
        }
        v109 = (struct PDEV *)*((_QWORD *)MDEV + 3);
        v143[2] = MulEnableDriver;
        v143[0] = 1LL;
        v143[1] = 0LL;
        v110 = hCreateHDEV(
                 (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                 (struct _DRV_NAMES *)v143,
                 (struct _devicemodeW *)MDEV,
                 v109,
                 0,
                 0,
                 1,
                 0,
                 2u,
                 &v142);
        *(_QWORD *)MDEV = v110;
        if ( v110 )
        {
          if ( !a7 )
          {
LABEL_82:
            v58 = *(struct PDEV **)MDEV;
            if ( *((_DWORD *)MDEV + 5) == 1 )
            {
              *(_QWORD *)v129 = *((_QWORD *)v58 + 226);
              if ( *((struct PDEV **)v58 + 3) != v58 )
                *((_QWORD *)v58 + 3) = v58;
              *((_QWORD *)v58 + 221) = *((_QWORD *)v58 + 358);
              XEPALOBJ::apalResetColorTable((XEPALOBJ *)v129);
            }
            else
            {
              DrvSetSharedDevLock(MDEV);
              v122 = DrvSetSharedPalette(MDEV);
              v123 = v122;
              if ( (*((_DWORD *)v58 + 543) & 0x100) == 0 && v122 && (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
                DrvRealizeHalftonePaletteWrap(v123, 1LL);
            }
LABEL_86:
            v59 = (struct _ERESOURCE *)hsem;
            if ( hsem )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", hsem);
              ExReleaseResourceAndLeaveCriticalRegion(v59);
              PsLeavePriorityRegion();
              EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
              if ( ghsemHT )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
              if ( ghsemSprite )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
                PsLeavePriorityRegion();
              }
              v60 = Resource;
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", Resource);
              if ( v60 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v60);
                PsLeavePriorityRegion();
              }
            }
            v61 = (HDEV *)v136;
            if ( v136 )
            {
              GreIncrementDisplaySettingsUniqueness(v22, v42, v43, v44);
              if ( v61 != v144 )
                Win32FreePool((__int64)v61);
            }
            if ( v37 )
            {
              v124 = WdLogNewEntry5_WdError(v22, v42, v43);
              WdLogEvent5_WdError(v124);
              DrvBackoutMDEV(MDEV, v125);
              Win32FreePool((__int64)MDEV);
              *a8 = 0LL;
              if ( a7 )
                DrvEnableMDEV((__int64 *)a7, 0LL, 0LL);
              ++gcFailedModeChanges;
              v18 = -1;
            }
            else
            {
              if ( a7 )
              {
                for ( i = 0; i < *((_DWORD *)a7 + 5); *(_DWORD *)(v64 + 160) &= ~1u )
                {
                  v63 = i++;
                  v64 = *(_QWORD *)(*((_QWORD *)a7 + 7 * v63 + 5) + 2576LL);
                }
              }
              for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
                *((_DWORD *)j + 40) &= ~4u;
              for ( k = 0; k < *((_DWORD *)MDEV + 5); ++k )
              {
                v67 = 56LL * k;
                v68 = *(_QWORD *)((char *)MDEV + v67 + 40);
                v69 = *(_QWORD *)(v68 + 2592);
                *(_DWORD *)(*(_QWORD *)(v68 + 2576) + 160LL) |= 1u;
                v70 = *(_DWORD *)((char *)MDEV + v67 + 56);
                *(_DWORD *)(v69 + 76) = v70;
                v71 = *(_DWORD *)((char *)MDEV + v67 + 60);
                *(_DWORD *)(v69 + 80) = v71;
                if ( !v70 && !v71 )
                  *(_DWORD *)(*(_QWORD *)(v68 + 2576) + 160LL) |= 4u;
              }
              v140 = *(struct PDEV **)MDEV;
              vGetDeviceCaps((struct PDEVOBJ *)&v140, gpGdiDevCaps);
            }
LABEL_109:
            if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
            {
              DrvEnableMDEV((__int64 *)MDEV, 0LL, 0LL);
              if ( !v18 )
              {
                for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
                {
                  v73 = *((_DWORD *)MDEV + 5);
                  v74 = 0;
                  for ( n = (HDEV)*((_QWORD *)a7 + 7 * m + 5); v74 < v73; ++v74 )
                  {
                    if ( *((_QWORD *)n + 322) == *(_QWORD *)(*((_QWORD *)MDEV + 7 * v74 + 5) + 2576LL) )
                      break;
                  }
                  if ( v74 == v73 )
                    DrvDisableDisplay(n, 1);
                }
              }
              DrvDestroyMDEV(a7);
            }
            DrvReleaseChangeDisplaySettingLocks();
            if ( v134 )
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v134);
            goto LABEL_122;
          }
          v111 = (struct _ERESOURCE *)*((_QWORD *)v110 + 6);
          EngAcquireSemaphore((HSEMAPHORE)v111);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v111, 11LL);
          EngAcquireSemaphore(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          EngAcquireSemaphore(ghsemPalette);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 14LL);
          EngAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
          EngAcquireSemaphore(ghsemRFONTList);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
          GreAcquireHmgrSemaphore(v113, v112, v114);
          v115 = *(struct PDEV **)MDEV;
          if ( v130[0] )
          {
            if ( (unsigned int)bDynamicModeChange(*((struct PDEV **)a7 + 5), v115) == 1 )
            {
              v117 = *(_QWORD *)MDEV;
              *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
              *(_QWORD *)a7 = v117;
              *((_QWORD *)a7 + 5) = v117;
              if ( !v38 )
                v117 = (__int64)v39;
              v39 = (HDEV)v117;
              goto LABEL_234;
            }
          }
          else if ( (unsigned int)bDynamicModeChange(*(struct PDEV **)a7, v115) == 1 )
          {
            v117 = *(_QWORD *)a7;
            *(_QWORD *)a7 = *(_QWORD *)MDEV;
            *(_QWORD *)MDEV = v117;
LABEL_234:
            GreReleaseHmgrSemaphore(v117, v116, v118);
            EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
            if ( ghsemRFONTList )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
            if ( ghsemPublicPFT )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
            if ( ghsemPalette )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
            if ( ghsemDwmState )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v111);
            if ( v111 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v111);
              PsLeavePriorityRegion();
            }
            goto LABEL_69;
          }
          v37 = 1;
          goto LABEL_234;
        }
LABEL_230:
        v37 = 1;
        goto LABEL_69;
      }
      v136 = (struct _UNICODE_STRING *)DrvDisableDirectDrawForModeChange(a7, MDEV, v144);
      if ( !v136 )
        goto LABEL_230;
      v45 = v134;
      MULTIDEVLOCKOBJ::vInit(v134, a7);
      MULTIDEVLOCKOBJ::vInit(v131, MDEV);
      v22 = (__int64)v131;
      if ( (*(_DWORD *)v131 & 1) == 0 || (*(_DWORD *)v45 & 1) == 0 )
      {
        v37 = 1;
        goto LABEL_46;
      }
      v46 = *(struct _ERESOURCE **)(*(_QWORD *)a7 + 64LL);
      hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
      Resource = v46;
      EngAcquireSemaphore((HSEMAPHORE)v46);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", Resource, 4LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      EngAcquireSemaphore(ghsemHT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
      EngAcquireSemaphore(hsem);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
      MULTIDEVLOCKOBJ::vLock(v45);
      MULTIDEVLOCKOBJ::vLock(v131);
      v47 = ((__int64 (*)(void))IsGreHideSpritesSupported)();
      v43 = 0LL;
      if ( v47 >= 0 )
      {
        GreHideSprites(*(_QWORD *)a7, 1LL);
        v43 = 0LL;
      }
      v42 = *((unsigned int *)MDEV + 5);
      v48 = *((_DWORD *)a7 + 5);
      if ( (_DWORD)v42 == 1 )
      {
        if ( v48 != 1 )
        {
          v101 = 0;
          if ( v48 )
          {
            while ( 1 )
            {
              v102 = v101;
              if ( *((_QWORD *)a7 + 7 * v101 + 5) == *((_QWORD *)MDEV + 5) )
                break;
              if ( ++v101 >= v48 )
                goto LABEL_45;
            }
            CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5), v101);
            v38 = CloneHDEV;
            if ( CloneHDEV )
            {
              v42 = 56 * v102;
              *(_QWORD *)((char *)a7 + v42 + 40) = CloneHDEV;
              v22 = *((_QWORD *)MDEV + 5);
              *(_QWORD *)((char *)a7 + v42 + 48) = v22;
              v39 = (HDEV)*((_QWORD *)MDEV + 5);
            }
            else
            {
              v37 = 1;
            }
            goto LABEL_192;
          }
        }
      }
      else if ( v48 == 1 )
      {
        v22 = 0LL;
        if ( (_DWORD)v42 )
        {
          v43 = *((_QWORD *)a7 + 5);
          while ( 1 )
          {
            v104 = (unsigned int)v22;
            if ( *((_QWORD *)MDEV + 7 * (unsigned int)v22 + 5) == v43 )
              break;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= (unsigned int)v42 )
              goto LABEL_191;
          }
          v106 = DrvCreateCloneHDEV(*((HDEV *)a7 + 5), v42);
          v38 = v106;
          if ( !v106 )
          {
            v37 = 1;
            goto LABEL_69;
          }
          v22 = 56 * v104;
          v129[0] = 1;
          *(_QWORD *)((char *)MDEV + v22 + 40) = v106;
          *(_QWORD *)((char *)MDEV + v22 + 48) = *((_QWORD *)a7 + 5);
          v39 = (HDEV)*((_QWORD *)a7 + 5);
        }
LABEL_191:
        v130[0] = 1;
LABEL_192:
        v52 = 0;
        if ( v38 )
        {
          v135 = (PERESOURCE)*((_QWORD *)v38 + 6);
          v105 = v135;
          EngAcquireSemaphore((HSEMAPHORE)v135);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v105, 11LL);
          v52 = 0;
        }
        if ( v37 )
        {
LABEL_47:
          v44 = 0x10000LL;
          if ( v39 )
          {
            v139 = v39;
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v139) )
            {
              if ( ((unsigned int)v44 & (_DWORD)v39[532]) == 0 )
              {
                v22 = (unsigned int)-((unsigned int)bDynamicProcessAllDriverRealizations(v39, 0LL, 1LL) != 0);
                v37 &= v22;
              }
            }
          }
          if ( v37 )
          {
LABEL_69:
            if ( a7 )
            {
              if ( !v37 && v38 && v39 )
              {
                v137 = v38;
                v138 = (__int64)v39;
                if ( v129[0] )
                {
                  v119 = *((_QWORD *)v39 + 319);
                  *((_QWORD *)v38 + 319) = v119;
                  if ( v119 )
                    *(_QWORD *)(v119 + 48) = v38;
                  *((_QWORD *)v38 + 225) = *((_QWORD *)v39 + 225);
                  DrvTransferGdiObjects(v38, v39, v43);
                  *((_QWORD *)v39 + 319) = 0LL;
                  *((_QWORD *)v39 + 225) = 0LL;
                  _m_prefetchw(v39 + 10);
                  do
                    v120 = *((_DWORD *)v39 + 10);
                  while ( v120 != _InterlockedCompareExchange((volatile signed __int32 *)v39 + 10, v120 | 0x80000, v120) );
                  _m_prefetchw(v38 + 10);
                  do
                    v121 = *((_DWORD *)v38 + 10);
                  while ( v121 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v38 + 10,
                                    v121 & 0xFFF7FFFF,
                                    v121) );
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v138, 1);
                  (*((void (__fastcall **)(_QWORD, HDEV))v38 + 337))(*((_QWORD *)v38 + 225), v38);
                }
                else
                {
                  *((_QWORD *)v38 + 319) = 0LL;
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v137, 1);
                }
              }
              *(_QWORD *)v130 = *(_QWORD *)a7;
              if ( (*(_DWORD *)(*(_QWORD *)v130 + 40LL) & 0x20000) != 0 )
                PDEVOBJ::bDisabled((PDEVOBJ *)v130, 1);
              if ( (int)IsGreHideSpritesSupported(v22, v42, v43, v44) >= 0 )
              {
                v56 = MDEV;
                if ( v37 )
                  v56 = a7;
                GreHideSprites(*(_QWORD *)v56, 0LL);
              }
              v57 = v135;
              if ( v135 )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v135);
                ExReleaseResourceAndLeaveCriticalRegion(v57);
                PsLeavePriorityRegion();
              }
              MULTIDEVLOCKOBJ::vUnlock(v131);
              MULTIDEVLOCKOBJ::vUnlock(v134);
            }
            if ( v37 )
              goto LABEL_86;
            goto LABEL_82;
          }
          v53 = *((unsigned int *)MDEV + 5);
          v54 = *((_DWORD *)a7 + 5);
          if ( (_DWORD)v53 != 1 )
          {
            if ( v54 != 1 && (_DWORD)v53 )
            {
              do
              {
                v43 = *((unsigned int *)a7 + 5);
                v138 = 56LL * v52;
                v42 = *(_QWORD *)((char *)MDEV + v138 + 40);
                v107 = 0;
                if ( (_DWORD)v43 )
                {
                  v108 = *(_QWORD *)(v42 + 2576);
                  while ( 1 )
                  {
                    v137 = (HDEV)v107;
                    v53 = *((_QWORD *)a7 + 7 * v107 + 5);
                    if ( v108 == *(_QWORD *)(v53 + 2576) )
                      break;
                    if ( ++v107 >= (unsigned int)v43 )
                      goto LABEL_221;
                  }
                  v43 = 1LL;
                  if ( (*(_DWORD *)(v42 + 2128) & 0x10000) != 0 )
                    v43 = (*(_DWORD *)(v53 + 2128) & 0x10000) == 0;
                  if ( v42 != v53 )
                  {
                    if ( (unsigned int)bDynamicModeChange((struct PDEV *)v53, (struct PDEV *)v42) == 1 )
                    {
                      v42 = 56LL * (_QWORD)v137;
                      v43 = v138;
                      v53 = *((_QWORD *)a7 + 7 * (_QWORD)v137 + 5);
                      *((_QWORD *)a7 + 7 * (_QWORD)v137 + 5) = *(_QWORD *)((char *)MDEV + v138 + 40);
                      *(_QWORD *)((char *)MDEV + v43 + 40) = v53;
                    }
                    else
                    {
                      v37 = 1;
                    }
                  }
                }
LABEL_221:
                ++v52;
              }
              while ( v52 < *((_DWORD *)MDEV + 5) );
            }
            goto LABEL_53;
          }
          v55 = (struct PDEV *)*((_QWORD *)MDEV + 5);
          if ( v54 == 1 )
          {
            if ( (unsigned int)bDynamicModeChange(*((struct PDEV **)a7 + 5), v55) == 1 )
            {
              v53 = *((_QWORD *)a7 + 5);
              *((_QWORD *)a7 + 5) = *((_QWORD *)MDEV + 5);
              *((_QWORD *)MDEV + 5) = v53;
LABEL_53:
              GreReleaseHmgrSemaphore(v53, v42, v43);
              EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
              if ( ghsemRFONTList )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
              if ( ghsemPublicPFT )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
              if ( ghsemPalette )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
              if ( ghsemDriverMgmt )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
              v22 = (__int64)ghsemDwmState;
              if ( ghsemDwmState )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
                PsLeavePriorityRegion();
              }
              goto LABEL_63;
            }
          }
          else if ( (unsigned int)bDynamicModeChange(*(struct PDEV **)a7, v55) == 1 )
          {
            v53 = *(_QWORD *)a7;
            *(_QWORD *)a7 = *((_QWORD *)MDEV + 5);
            *((_QWORD *)MDEV + 5) = v53;
            if ( !v38 )
              v53 = (__int64)v39;
            v39 = (HDEV)v53;
            goto LABEL_53;
          }
          v37 = 1;
          goto LABEL_53;
        }
      }
LABEL_45:
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      EngAcquireSemaphore(ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
      GreAcquireHmgrSemaphore(v50, v49, v51);
LABEL_46:
      v52 = 0;
      goto LABEL_47;
    }
LABEL_124:
    v76 = a8;
LABEL_125:
    if ( v127 )
      Win32FreePool((__int64)v127);
    if ( !a6 || v18 )
    {
      if ( v18 == 2 )
      {
        v22 = *v76;
        if ( *v76 )
        {
          Win32FreePool(v22);
          *v76 = 0LL;
        }
      }
    }
    else if ( a7 )
    {
      Win32FreePool((__int64)a7);
    }
    v77 = WdLogNewEntry5_WdTrace(v22);
    *(_QWORD *)(v77 + 24) = v18;
    WdLogEvent5_WdTrace(v77);
    gbDeferredInvalidateDualView = 0;
    gbDeferredOrgMdev = 0LL;
    goto LABEL_132;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    v15 = 1;
    goto LABEL_15;
  }
  if ( v27 == 1 )
  {
    v15 = 1;
    gbDeferredInvalidateDualView = 1;
    gbDeferredOrgMdev = a7;
    goto LABEL_15;
  }
  DrvReleaseChangeDisplaySettingLocks();
  if ( v23 )
    Win32FreePool((__int64)v23);
  v96 = WdLogNewEntry5_WdTrace(v95);
  WdLogEvent5_WdTrace(v96);
  v18 = -6;
LABEL_132:
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(v78, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}
