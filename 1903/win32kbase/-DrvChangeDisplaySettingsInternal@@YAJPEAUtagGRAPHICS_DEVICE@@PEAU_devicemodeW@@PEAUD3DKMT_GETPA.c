/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C
 * Callers:
 *     ApplyPathsModality @ 0x1C0044F44 (ApplyPathsModality.c)
 *     DrvChangeDisplaySettings @ 0x1C004BEDC (DrvChangeDisplaySettings.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00A67FC (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022730 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C003FAA4 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0044778 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0044864 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0044894 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     DrvEnableMDEV @ 0x1C00449AC (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0044C70 (DrvDisableMDEV.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0045290 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0045EDC (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0046348 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C004791C (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00479C0 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C00485E8 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00486E4 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C0048854 (DrvDestroyMDEV.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00493E4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0049738 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C004ABB4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C004D5D8 (DrvUpdateDisplayDriverParameters.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00571F4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicModeChange @ 0x1C00572B0 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00581D0 (bDynamicProcessAllDriverRealizations.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00A5750 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00A67C4 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B8DF0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0129C60 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0129FCC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C012AE40 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C012AEC0 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C012AFA0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C012B0AC (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
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
  __int64 v87; // rax
  DWORD dmFields; // edi
  _QWORD *v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  int v92; // eax
  int updated; // eax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rax
  unsigned int v99; // edx
  __int64 v100; // r15
  HDEV CloneHDEV; // rax
  __int64 v102; // r15
  PERESOURCE v103; // r15
  HDEV v104; // rax
  unsigned int v105; // eax
  __int64 v106; // r9
  void *v107; // r9
  HDEV v108; // rax
  struct _ERESOURCE *v109; // r15
  int v110; // edx
  int v111; // ecx
  int v112; // r8d
  struct PDEV *v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rax
  signed __int32 v118; // ett
  signed __int32 v119; // ett
  HDEV v120; // rax
  HDEV v121; // r15
  __int64 v122; // rax
  unsigned int v123; // edx
  struct PDEV *v124; // rdx
  int Src; // [rsp+20h] [rbp-E0h]
  struct _devicemodeW *v126; // [rsp+58h] [rbp-A8h] BYREF
  HSEMAPHORE hsem; // [rsp+60h] [rbp-A0h]
  int v128[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v129[2]; // [rsp+70h] [rbp-90h] BYREF
  MULTIDEVLOCKOBJ *v130; // [rsp+78h] [rbp-88h]
  int v131; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE Resource; // [rsp+88h] [rbp-78h]
  MULTIDEVLOCKOBJ *v133; // [rsp+90h] [rbp-70h]
  PERESOURCE v134; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *v135; // [rsp+A0h] [rbp-60h]
  HDEV v136; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v137; // [rsp+B0h] [rbp-50h] BYREF
  HDEV v138; // [rsp+B8h] [rbp-48h] BYREF
  struct PDEV *v139; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  HDEV v141; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v142[3]; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v143[7]; // [rsp+F8h] [rbp-8h] BYREF

  v14 = 0LL;
  v15 = a10;
  p_DestinationString = 0LL;
  v18 = 0;
  v128[0] = a12;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v134 = a4;
  LODWORD(Resource) = a9 != 0;
  hsem = a3;
  v129[0] = a9;
  v126 = 0LL;
  v131 = 0;
  v130 = 0LL;
  v133 = 0LL;
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
    v135 = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v126,
                  &v131,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v128[0],
                  0LL) < 0 )
      {
        if ( v126 )
          Win32FreePool((__int64)v126);
        v87 = ((__int64 (*)(void))WdLogNewEntry5_WdTrace)();
        WdLogEvent5_WdTrace(v87);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_132;
      }
      dmFields = a2->dmFields;
      v89 = (_QWORD *)WdLogNewEntry5_WdEvent(v85, v84, v86);
      v89[3] = PsGetCurrentProcess(v91, v90);
      v89[4] = a2->dmPelsWidth;
      v89[5] = a2->dmPelsHeight;
      v89[6] = a2->dmBitsPerPel;
      v89[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v89);
      p_DestinationString = v135;
      v22 = 0LL;
      v92 = 1;
      if ( dmFields )
        v92 = a10;
      v15 = v92;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( !a5 || !a1 || !a2 )
  {
    v23 = v126;
LABEL_7:
    v24 = 0;
    goto LABEL_8;
  }
  v23 = v126;
  if ( gProtocolType == -1 )
    goto LABEL_7;
  updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v126, v131, Src);
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
             v134,
             a11 != 0 ? 4 : 0,
             0LL,
             v129[0],
             v15,
             v128[0],
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
      v98 = WdLogNewEntry5_WdEvent(v96, v95, v97);
      WdLogEvent5_WdEvent(v98);
      goto LABEL_125;
    }
    if ( (unsigned int)DrvDisableMDEV((HDEV *)a7, 0LL, 0LL) )
    {
      v29 = gdmLogPixels;
      v30 = DrvCreateMDEV(p_DestinationString, v126, v134, a11 != 0 ? 4 : 0, a7, v129[0], v15, v128[0], v28);
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
    v129[0] = 0;
    v38 = 0LL;
    v128[0] = 0;
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
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v124 = *(struct PDEV **)MDEV;
          ++*((_DWORD *)v124 + 3);
          ++*((_DWORD *)v124 + 2);
          TrackObjectReferenceIncrement(
            1u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v124 + 443));
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
        }
      }
      goto LABEL_109;
    }
    v135 = 0LL;
    v134 = 0LL;
    hsem = 0LL;
    Resource = 0LL;
    v40 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v130 = v40;
    if ( v40 )
    {
      *(_QWORD *)v40 = 1LL;
      *((_QWORD *)v40 + 1) = 0LL;
      *((_QWORD *)v40 + 2) = 0LL;
    }
    else
    {
      v40 = 0LL;
      v130 = 0LL;
    }
    if ( v40 )
    {
      v41 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
      v133 = v41;
      if ( v41 )
      {
        *(_QWORD *)v41 = 1LL;
        *((_QWORD *)v41 + 1) = 0LL;
        *((_QWORD *)v41 + 2) = 0LL;
      }
      else
      {
        v41 = 0LL;
        v133 = 0LL;
      }
      if ( !v41 )
      {
LABEL_122:
        if ( v130 )
          MULTIDEVLOCKOBJ::`scalar deleting destructor'(v130);
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
        v107 = (void *)*((_QWORD *)MDEV + 3);
        v142[2] = MulEnableDriver;
        v142[0] = 1LL;
        v142[1] = 0LL;
        v108 = hCreateHDEV(
                 (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                 (struct _DRV_NAMES *)v142,
                 (struct _devicemodeW *)MDEV,
                 v107,
                 0,
                 0,
                 1,
                 0,
                 2u,
                 &v141);
        *(_QWORD *)MDEV = v108;
        if ( v108 )
        {
          if ( !a7 )
          {
LABEL_82:
            v58 = *(struct PDEV **)MDEV;
            if ( *((_DWORD *)MDEV + 5) == 1 )
            {
              *(_QWORD *)v128 = *((_QWORD *)v58 + 226);
              if ( *((struct PDEV **)v58 + 3) != v58 )
                *((_QWORD *)v58 + 3) = v58;
              *((_QWORD *)v58 + 221) = *((_QWORD *)v58 + 358);
              XEPALOBJ::apalResetColorTable((XEPALOBJ *)v128);
            }
            else
            {
              DrvSetSharedDevLock(MDEV);
              v120 = DrvSetSharedPalette(MDEV);
              v121 = v120;
              if ( (*((_DWORD *)v58 + 543) & 0x100) == 0 && v120 && (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
                DrvRealizeHalftonePaletteWrap(v121, 1LL);
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
            v61 = (HDEV *)v135;
            if ( v135 )
            {
              GreIncrementDisplaySettingsUniqueness(v22, v42, v43, v44);
              if ( v61 != v143 )
                Win32FreePool((__int64)v61);
            }
            if ( v37 )
            {
              v122 = WdLogNewEntry5_WdError(v22, v42, v43);
              WdLogEvent5_WdError(v122);
              DrvBackoutMDEV(MDEV, v123);
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
              v139 = *(struct PDEV **)MDEV;
              vGetDeviceCaps((struct PDEVOBJ *)&v139, gpGdiDevCaps);
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
            if ( v133 )
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v133);
            goto LABEL_122;
          }
          v109 = (struct _ERESOURCE *)*((_QWORD *)v108 + 6);
          EngAcquireSemaphore((HSEMAPHORE)v109);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v109, 11LL);
          EngAcquireSemaphore(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 14LL);
          EngAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
          EngAcquireSemaphore(ghsemRFONTList);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
          GreAcquireHmgrSemaphore(v111, v110, v112);
          v113 = *(struct PDEV **)MDEV;
          if ( v129[0] )
          {
            if ( (unsigned int)bDynamicModeChange(*((struct PDEV **)a7 + 5), v113) == 1 )
            {
              v115 = *(_QWORD *)MDEV;
              *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
              *(_QWORD *)a7 = v115;
              *((_QWORD *)a7 + 5) = v115;
              if ( !v38 )
                v115 = (__int64)v39;
              v39 = (HDEV)v115;
              goto LABEL_234;
            }
          }
          else if ( (unsigned int)bDynamicModeChange(*(struct PDEV **)a7, v113) == 1 )
          {
            v115 = *(_QWORD *)a7;
            *(_QWORD *)a7 = *(_QWORD *)MDEV;
            *(_QWORD *)MDEV = v115;
LABEL_234:
            GreReleaseHmgrSemaphore(v115, v114, v116);
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
              ExReleaseResourceAndLeaveCriticalRegion(ghsemPalette);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
            if ( ghsemDwmState )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v109);
            if ( v109 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v109);
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
      v135 = (struct _UNICODE_STRING *)DrvDisableDirectDrawForModeChange(a7, MDEV, v143);
      if ( !v135 )
        goto LABEL_230;
      v45 = v133;
      MULTIDEVLOCKOBJ::vInit(v133, a7);
      MULTIDEVLOCKOBJ::vInit(v130, MDEV);
      v22 = (__int64)v130;
      if ( (*(_DWORD *)v130 & 1) == 0 || (*(_DWORD *)v45 & 1) == 0 )
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
      MULTIDEVLOCKOBJ::vLock(v130);
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
          v99 = 0;
          if ( v48 )
          {
            while ( 1 )
            {
              v100 = v99;
              if ( *((_QWORD *)a7 + 7 * v99 + 5) == *((_QWORD *)MDEV + 5) )
                break;
              if ( ++v99 >= v48 )
                goto LABEL_45;
            }
            CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5), v99);
            v38 = CloneHDEV;
            if ( CloneHDEV )
            {
              v42 = 56 * v100;
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
            v102 = (unsigned int)v22;
            if ( *((_QWORD *)MDEV + 7 * (unsigned int)v22 + 5) == v43 )
              break;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= (unsigned int)v42 )
              goto LABEL_191;
          }
          v104 = DrvCreateCloneHDEV(*((HDEV *)a7 + 5), v42);
          v38 = v104;
          if ( !v104 )
          {
            v37 = 1;
            goto LABEL_69;
          }
          v22 = 56 * v102;
          v128[0] = 1;
          *(_QWORD *)((char *)MDEV + v22 + 40) = v104;
          *(_QWORD *)((char *)MDEV + v22 + 48) = *((_QWORD *)a7 + 5);
          v39 = (HDEV)*((_QWORD *)a7 + 5);
        }
LABEL_191:
        v129[0] = 1;
LABEL_192:
        v52 = 0;
        if ( v38 )
        {
          v134 = (PERESOURCE)*((_QWORD *)v38 + 6);
          v103 = v134;
          EngAcquireSemaphore((HSEMAPHORE)v134);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v103, 11LL);
          v52 = 0;
        }
        if ( v37 )
        {
LABEL_47:
          v44 = 0x10000LL;
          if ( v39 )
          {
            v138 = v39;
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v138) )
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
                v136 = v38;
                v137 = (__int64)v39;
                if ( v128[0] )
                {
                  v117 = *((_QWORD *)v39 + 319);
                  *((_QWORD *)v38 + 319) = v117;
                  if ( v117 )
                    *(_QWORD *)(v117 + 48) = v38;
                  *((_QWORD *)v38 + 225) = *((_QWORD *)v39 + 225);
                  DrvTransferGdiObjects(v38, v39, v43);
                  *((_QWORD *)v39 + 319) = 0LL;
                  *((_QWORD *)v39 + 225) = 0LL;
                  _m_prefetchw(v39 + 10);
                  do
                    v118 = *((_DWORD *)v39 + 10);
                  while ( v118 != _InterlockedCompareExchange((volatile signed __int32 *)v39 + 10, v118 | 0x80000, v118) );
                  _m_prefetchw(v38 + 10);
                  do
                    v119 = *((_DWORD *)v38 + 10);
                  while ( v119 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v38 + 10,
                                    v119 & 0xFFF7FFFF,
                                    v119) );
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v137, 1);
                  (*((void (__fastcall **)(_QWORD, HDEV))v38 + 337))(*((_QWORD *)v38 + 225), v38);
                }
                else
                {
                  *((_QWORD *)v38 + 319) = 0LL;
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v136, 1);
                }
              }
              *(_QWORD *)v129 = *(_QWORD *)a7;
              if ( (*(_DWORD *)(*(_QWORD *)v129 + 40LL) & 0x20000) != 0 )
                PDEVOBJ::bDisabled((PDEVOBJ *)v129, 1);
              if ( (int)IsGreHideSpritesSupported(v22, v42, v43, v44) >= 0 )
              {
                v56 = MDEV;
                if ( v37 )
                  v56 = a7;
                GreHideSprites(*(_QWORD *)v56, 0LL);
              }
              v57 = v134;
              if ( v134 )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v134);
                ExReleaseResourceAndLeaveCriticalRegion(v57);
                PsLeavePriorityRegion();
              }
              MULTIDEVLOCKOBJ::vUnlock(v130);
              MULTIDEVLOCKOBJ::vUnlock(v133);
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
                v137 = 56LL * v52;
                v42 = *(_QWORD *)((char *)MDEV + v137 + 40);
                v105 = 0;
                if ( (_DWORD)v43 )
                {
                  v106 = *(_QWORD *)(v42 + 2576);
                  while ( 1 )
                  {
                    v136 = (HDEV)v105;
                    v53 = *((_QWORD *)a7 + 7 * v105 + 5);
                    if ( v106 == *(_QWORD *)(v53 + 2576) )
                      break;
                    if ( ++v105 >= (unsigned int)v43 )
                      goto LABEL_221;
                  }
                  v43 = 1LL;
                  if ( (*(_DWORD *)(v42 + 2128) & 0x10000) != 0 )
                    v43 = (*(_DWORD *)(v53 + 2128) & 0x10000) == 0;
                  if ( v42 != v53 )
                  {
                    if ( (unsigned int)bDynamicModeChange((struct PDEV *)v53, (struct PDEV *)v42) == 1 )
                    {
                      v42 = 56LL * (_QWORD)v136;
                      v43 = v137;
                      v53 = *((_QWORD *)a7 + 7 * (_QWORD)v136 + 5);
                      *((_QWORD *)a7 + 7 * (_QWORD)v136 + 5) = *(_QWORD *)((char *)MDEV + v137 + 40);
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
                ExReleaseResourceAndLeaveCriticalRegion(ghsemPalette);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
              if ( ghsemDriverMgmt )
              {
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
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
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
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
    if ( v126 )
      Win32FreePool((__int64)v126);
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
  v94 = ((__int64 (*)(void))WdLogNewEntry5_WdTrace)();
  WdLogEvent5_WdTrace(v94);
  v18 = -6;
LABEL_132:
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(v78, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}
