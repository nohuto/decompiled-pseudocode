/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640
 * Callers:
 *     ApplyPathsModality @ 0x1C003E2EC (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00494F4 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C004C198 (DrvChangeDisplaySettings.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015460 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C003DF70 (bDynamicProcessAllDriverRealizations.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C003E5A0 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C003F470 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0040A94 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0041314 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0047230 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvEnableMDEV @ 0x1C00476A0 (DrvEnableMDEV.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0052A70 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00546B0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0055AD0 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0055B00 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0055C18 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0055DD4 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0080238 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C008299C (DrvDestroyMDEV.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C008FAC8 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C008FE34 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C008FF68 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00913D0 (GreIncrementDisplaySettingsUniqueness.c)
 *     GreUpdateSharedDevCaps @ 0x1C0098DD0 (GreUpdateSharedDevCaps.c)
 *     DrvDisableMDEV @ 0x1C00A26D0 (DrvDisableMDEV.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A2BA0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0101370 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0102538 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C01025B8 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C010269C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01027A8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        HSEMAPHORE a3,
        void *a4,
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
  __int64 v23; // rax
  __int64 v24; // rax
  int PruneFlag; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _devicemodeW *v29; // rcx
  __int64 v30; // rax
  struct _MCGEN_TRACE_CONTEXT *v31; // rcx
  DWORD dmFields; // edi
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  struct _devicemodeW *v36; // r13
  int updated; // eax
  struct _MDEV *MDEV; // rdi
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  struct D3DKMT_GETPATHSMODALITY *v43; // r15
  __int64 *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  int v49; // r13d
  struct _MDEV *v50; // rax
  unsigned int v51; // r12d
  unsigned int v52; // r10d
  unsigned int v53; // r8d
  char *v54; // rcx
  signed __int64 v55; // rdx
  HDEV v56; // rbx
  int v57; // r13d
  HDEV v58; // r15
  MULTIDEVLOCKOBJ *v59; // rax
  MULTIDEVLOCKOBJ *v60; // rax
  __int64 i; // rdx
  __int64 v62; // r8
  MULTIDEVLOCKOBJ *v63; // r12
  HSEMAPHORE v64; // rax
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // edx
  __int64 v68; // r12
  HDEV CloneHDEV; // rax
  unsigned int v70; // ecx
  __int64 v71; // r12
  HSEMAPHORE v72; // r12
  int v73; // edx
  __int64 v74; // rcx
  int v75; // r8d
  HDEV v76; // rax
  __int64 v77; // rcx
  HDEV v78; // rcx
  int v79; // eax
  HDEV v80; // rdx
  unsigned int v81; // ebx
  unsigned int v82; // eax
  __int64 v83; // r12
  void *v84; // r9
  HDEV v85; // rax
  struct _ERESOURCE *v86; // r12
  int v87; // edx
  __int64 v88; // rcx
  int v89; // r8d
  HDEV v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  signed __int32 v95; // ett
  signed __int32 v96; // ett
  struct _MDEV *v97; // rcx
  struct _ERESOURCE *v98; // rbx
  PDEV *v99; // rbx
  HDEV v100; // rax
  HDEV v101; // r15
  struct _ERESOURCE *v102; // rbx
  HDEV *v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rcx
  wchar_t *j; // rax
  __int64 k; // r9
  __int64 v108; // rax
  int v109; // ecx
  int v110; // r10d
  __int64 v111; // rax
  unsigned int v112; // edx
  bool v113; // cc
  PDEV *v114; // rcx
  unsigned int m; // ebx
  unsigned int v116; // r8d
  unsigned int n; // edx
  __int64 v118; // rax
  int Src; // [rsp+20h] [rbp-E0h]
  int v121; // [rsp+30h] [rbp-D0h]
  struct _devicemodeW *v122; // [rsp+58h] [rbp-A8h] BYREF
  HSEMAPHORE hsem; // [rsp+60h] [rbp-A0h]
  int v124[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v125[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v126; // [rsp+78h] [rbp-88h] BYREF
  MULTIDEVLOCKOBJ *v127; // [rsp+80h] [rbp-80h]
  HDEV v128; // [rsp+88h] [rbp-78h] BYREF
  void *v129; // [rsp+90h] [rbp-70h]
  int v130; // [rsp+98h] [rbp-68h] BYREF
  MULTIDEVLOCKOBJ *v131; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING *v132; // [rsp+A8h] [rbp-58h]
  struct _ERESOURCE *v133; // [rsp+B0h] [rbp-50h]
  HDEV v134; // [rsp+B8h] [rbp-48h] BYREF
  HDEV v135; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  int v137; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v138; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v139)(unsigned int, unsigned int, struct tagDRVENABLEDATA *); // [rsp+E8h] [rbp-18h]
  HDEV v140[7]; // [rsp+F0h] [rbp-10h] BYREF

  v14 = 0LL;
  v15 = a10;
  p_DestinationString = 0LL;
  v18 = 0;
  v124[0] = a12;
  v129 = a4;
  LODWORD(v126) = a9 != 0;
  hsem = a3;
  v125[0] = a9;
  v122 = 0LL;
  v130 = 0;
  v127 = 0LL;
  v131 = 0LL;
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
      v23 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
      WdLogEvent5_WdAssertion(v23);
      v22 = 0LL;
    }
    if ( hsem )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
      WdLogEvent5_WdAssertion(v24);
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
      PruneFlag = v126;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v22 = 0LL;
    p_DestinationString = &DestinationString;
    v132 = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v122,
                  &v130,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v124[0],
                  0LL) < 0 )
      {
        v29 = v122;
        if ( v122 )
          Win32FreePool((__int64)v122);
        v30 = WdLogNewEntry5_WdTrace(v29);
        WdLogEvent5_WdTrace(v30);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_232;
      }
      dmFields = a2->dmFields;
      v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, v26, v28);
      v33[3] = PsGetCurrentProcess(v34);
      v33[4] = a2->dmPelsWidth;
      v33[5] = a2->dmPelsHeight;
      v33[6] = a2->dmBitsPerPel;
      v33[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v33);
      p_DestinationString = v132;
      v22 = 0LL;
      v35 = 1;
      if ( dmFields )
        v35 = a10;
      v15 = v35;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( a5 && a1 && a2 )
  {
    v36 = v122;
    if ( gProtocolType != -1 )
    {
      updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v122, v130, Src);
      v22 = 0LL;
      if ( updated < 0 )
      {
        v18 = -2;
        if ( updated == -1073741582 )
          v18 = -5;
        v22 = 0LL;
      }
    }
  }
  else
  {
    v36 = v122;
  }
  if ( !a6 || v18 )
    goto LABEL_221;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    v121 = v15;
    v51 = 0;
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             v36,
             v129,
             a11 != 0 ? 4 : 0,
             0LL,
             v125[0],
             v121,
             v124[0],
             (struct D3DKMT_GETPATHSMODALITY *)hsem);
    if ( MDEV )
      v18 = 0;
LABEL_63:
    v56 = 0LL;
    v128 = 0LL;
    v57 = 0;
    v125[0] = 0;
    v58 = 0LL;
    v124[0] = 0;
    *a8 = (__int64)MDEV;
    if ( v18 )
    {
      if ( v18 == 2 )
      {
        v113 = *((_DWORD *)MDEV + 5) <= 1u;
        *(_QWORD *)MDEV = *(_QWORD *)a7;
        *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
        if ( !v113 )
        {
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v114 = *(PDEV **)MDEV;
          ++*((_DWORD *)v114 + 3);
          PDEV::IncrementClientReferenceCount(v114);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        }
      }
      goto LABEL_206;
    }
    v132 = 0LL;
    v133 = 0LL;
    hsem = 0LL;
    v129 = 0LL;
    v59 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v127 = v59;
    if ( v59 )
    {
      *(_QWORD *)v59 = 1LL;
      *((_QWORD *)v59 + 1) = 0LL;
      *((_QWORD *)v59 + 2) = 0LL;
    }
    else
    {
      v59 = 0LL;
      v127 = 0LL;
    }
    if ( !v59 )
    {
LABEL_221:
      v44 = a8;
      goto LABEL_222;
    }
    v60 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v131 = v60;
    if ( v60 )
    {
      *(_QWORD *)v60 = 1LL;
      *((_QWORD *)v60 + 1) = 0LL;
      *((_QWORD *)v60 + 2) = 0LL;
    }
    else
    {
      v60 = 0LL;
      v131 = 0LL;
    }
    if ( !v60 )
    {
LABEL_219:
      if ( v127 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v127, i);
      goto LABEL_221;
    }
    if ( *((_DWORD *)MDEV + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 5 * v51++ + 4));
      while ( v51 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
    {
LABEL_133:
      if ( v57 )
        goto LABEL_151;
      if ( a7 && *((_DWORD *)a7 + 5) == 1 )
      {
        *(_QWORD *)a7 = *((_QWORD *)a7 + 4);
        *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 5);
      }
      if ( *((_DWORD *)MDEV + 5) == 1 )
      {
        *(_QWORD *)MDEV = *((_QWORD *)MDEV + 4);
        *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 5);
        goto LABEL_151;
      }
      v84 = (void *)*((_QWORD *)MDEV + 3);
      v139 = MulEnableDriver;
      v137 = 1;
      v138 = 0LL;
      v85 = hCreateHDEV(
              (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
              (struct _DRV_NAMES *)&v137,
              (struct _devicemodeW *)MDEV,
              v84,
              0,
              0,
              1,
              0,
              2u,
              &v135);
      *(_QWORD *)MDEV = v85;
      if ( !v85 )
        goto LABEL_140;
      if ( !a7 )
      {
LABEL_174:
        v99 = *(PDEV **)MDEV;
        if ( *((_DWORD *)MDEV + 5) == 1 )
        {
          *(_QWORD *)v124 = *((_QWORD *)v99 + 226);
          if ( *((PDEV **)v99 + 3) != v99 )
            *((_QWORD *)v99 + 3) = v99;
          *((_QWORD *)v99 + 221) = *((_QWORD *)v99 + 358);
          XEPALOBJ::apalResetColorTable((XEPALOBJ *)v124);
        }
        else
        {
          DrvSetSharedDevLock(MDEV);
          v100 = DrvSetSharedPalette(MDEV);
          v101 = v100;
          if ( (*((_DWORD *)v99 + 543) & 0x100) == 0 && v100 && (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
            DrvRealizeHalftonePaletteWrap(v101, 1LL);
        }
LABEL_182:
        v102 = (struct _ERESOURCE *)hsem;
        if ( hsem )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", hsem);
          GreReleaseSemaphoreInternal(v102);
          EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
          GreReleaseSemaphoreInternal(ghsemSprite);
          EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", v129);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)v129);
        }
        v103 = (HDEV *)v132;
        if ( v132 )
        {
          GreIncrementDisplaySettingsUniqueness();
          if ( v103 != v140 )
            Win32FreePool((__int64)v103);
        }
        if ( v57 )
        {
          v111 = WdLogNewEntry5_WdError();
          WdLogEvent5_WdError(v111);
          DrvBackoutMDEV(MDEV, v112);
          Win32FreePool((__int64)MDEV);
          *a8 = 0LL;
          if ( a7 )
            DrvEnableMDEV(a7, 0LL, 0LL);
          ++gcFailedModeChanges;
          v18 = -1;
        }
        else
        {
          if ( a7 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)a7 + 5); *(_DWORD *)(v105 + 160) &= ~1u )
            {
              v104 = (unsigned int)i;
              i = (unsigned int)(i + 1);
              v105 = *(_QWORD *)(*((_QWORD *)a7 + 5 * v104 + 4) + 2576LL);
            }
          }
          for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
            *((_DWORD *)j + 40) &= ~4u;
          for ( k = 0LL; (unsigned int)k < *((_DWORD *)MDEV + 5); k = (unsigned int)(k + 1) )
          {
            v62 = 5LL * (unsigned int)k;
            v108 = *((_QWORD *)MDEV + 5 * (unsigned int)k + 4);
            i = *(_QWORD *)(v108 + 2592);
            *(_DWORD *)(*(_QWORD *)(v108 + 2576) + 160LL) |= 1u;
            v109 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 12);
            *(_DWORD *)(i + 76) = v109;
            v110 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 13);
            *(_DWORD *)(i + 80) = v110;
            if ( !v109 && !v110 )
              *(_DWORD *)(*(_QWORD *)(v108 + 2576) + 160LL) |= 4u;
          }
          GreUpdateSharedDevCaps(*(_QWORD *)MDEV, i, v62, k);
        }
LABEL_206:
        if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
        {
          DrvEnableMDEV(MDEV, 0LL, 0LL);
          if ( !v18 )
          {
            for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
            {
              v116 = *((_DWORD *)MDEV + 5);
              for ( n = 0; n < v116; ++n )
              {
                if ( *(_QWORD *)(*((_QWORD *)a7 + 5 * m + 4) + 2576LL) == *(_QWORD *)(*((_QWORD *)MDEV + 5 * n + 4)
                                                                                    + 2576LL) )
                  break;
              }
              if ( n == v116 )
                DrvDisableDisplay(*((HDEV *)a7 + 5 * m + 4), 1);
            }
          }
          DrvDestroyMDEV(a7);
        }
        DrvReleaseChangeDisplaySettingLocks();
        if ( v131 )
          MULTIDEVLOCKOBJ::`scalar deleting destructor'(v131, i);
        goto LABEL_219;
      }
      v86 = (struct _ERESOURCE *)*((_QWORD *)v85 + 6);
      EngAcquireSemaphore((HSEMAPHORE)v86);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v86, 11LL);
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      EngAcquireSemaphore(ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 14LL);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
      GreAcquireHmgrSemaphore(v88, v87, v89);
      v90 = *(HDEV *)MDEV;
      if ( v125[0] )
      {
        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v90) == 1 )
        {
          v92 = *(_QWORD *)MDEV;
          *(_QWORD *)MDEV = *((_QWORD *)a7 + 4);
          *(_QWORD *)a7 = v92;
          *((_QWORD *)a7 + 4) = v92;
          if ( !v56 )
            v92 = (__int64)v58;
          v58 = (HDEV)v92;
          goto LABEL_150;
        }
      }
      else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v90) == 1 )
      {
        v92 = *(_QWORD *)a7;
        *(_QWORD *)a7 = *(_QWORD *)MDEV;
        *(_QWORD *)MDEV = v92;
LABEL_150:
        GreReleaseHmgrSemaphore(v92, v91, v93);
        EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
        EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
        EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
        EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v86);
        GreReleaseSemaphoreInternal(v86);
        goto LABEL_151;
      }
      v57 = 1;
      goto LABEL_150;
    }
    v132 = (struct _UNICODE_STRING *)DrvDisableDirectDrawForModeChange(a7, MDEV, v140);
    if ( !v132 )
    {
LABEL_140:
      v57 = 1;
      goto LABEL_151;
    }
    v63 = v131;
    MULTIDEVLOCKOBJ::vInit(v131, a7);
    MULTIDEVLOCKOBJ::vInit(v127, MDEV);
    if ( (*(_DWORD *)v127 & 1) == 0 || (*(_DWORD *)v63 & 1) == 0 )
    {
      v57 = 1;
      goto LABEL_103;
    }
    v64 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 64LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    v129 = v64;
    EngAcquireSemaphore(v64);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v129, 4LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v63);
    MULTIDEVLOCKOBJ::vLock(v127);
    v65 = IsGreHideSpritesSupported();
    v62 = 0LL;
    if ( v65 >= 0 )
    {
      GreHideSprites(*(_QWORD *)a7, 1LL);
      v62 = 0LL;
    }
    i = *((unsigned int *)MDEV + 5);
    v66 = *((_DWORD *)a7 + 5);
    if ( (_DWORD)i == 1 )
    {
      if ( v66 == 1 )
        goto LABEL_98;
      v67 = 0;
      if ( !v66 )
        goto LABEL_98;
      while ( 1 )
      {
        v68 = v67;
        if ( *((_QWORD *)a7 + 5 * v67 + 4) == *((_QWORD *)MDEV + 4) )
          break;
        if ( ++v67 >= v66 )
          goto LABEL_98;
      }
      CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 4), v67);
      v128 = CloneHDEV;
      v56 = CloneHDEV;
      if ( CloneHDEV )
      {
        i = 5 * v68;
        *((_QWORD *)a7 + i + 4) = CloneHDEV;
        *((_QWORD *)a7 + i + 5) = *((_QWORD *)MDEV + 4);
        v58 = (HDEV)*((_QWORD *)MDEV + 4);
      }
      else
      {
        v57 = 1;
      }
    }
    else
    {
      if ( v66 != 1 )
        goto LABEL_98;
      v70 = 0;
      if ( (_DWORD)i )
      {
        v62 = *((_QWORD *)a7 + 4);
        while ( 1 )
        {
          v71 = v70;
          if ( *((_QWORD *)MDEV + 5 * v70 + 4) == v62 )
            break;
          if ( ++v70 >= (unsigned int)i )
            goto LABEL_94;
        }
        v76 = DrvCreateCloneHDEV(*((HDEV *)a7 + 4), i);
        v128 = v76;
        v56 = v76;
        if ( !v76 )
        {
          v57 = 1;
          goto LABEL_151;
        }
        v77 = 5 * v71;
        *((_QWORD *)MDEV + v77 + 4) = v76;
        *((_QWORD *)MDEV + v77 + 5) = *((_QWORD *)a7 + 4);
        v58 = (HDEV)*((_QWORD *)a7 + 4);
        v124[0] = 1;
      }
LABEL_94:
      v125[0] = 1;
    }
    if ( v56 )
    {
      v133 = (struct _ERESOURCE *)*((_QWORD *)v56 + 6);
      v72 = (HSEMAPHORE)v133;
      EngAcquireSemaphore((HSEMAPHORE)v133);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v72, 11LL);
    }
    if ( v57 )
    {
LABEL_103:
      if ( v58 )
      {
        v134 = v58;
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v134) )
        {
          if ( ((_DWORD)v58[532] & 0x10000) == 0 )
            v57 = (unsigned int)bDynamicProcessAllDriverRealizations((__int64)v58, 0LL, 1) != 0 ? v57 : 0;
        }
      }
      if ( v57 )
      {
LABEL_151:
        if ( a7 )
        {
          if ( !v57 && v56 && v58 )
          {
            v128 = v56;
            v126 = (__int64)v58;
            if ( v124[0] )
            {
              v94 = *((_QWORD *)v58 + 319);
              *((_QWORD *)v56 + 319) = v94;
              if ( v94 )
                *(_QWORD *)(v94 + 48) = v56;
              *((_QWORD *)v56 + 225) = *((_QWORD *)v58 + 225);
              DrvTransferGdiObjects(v56, v58, v62);
              *((_QWORD *)v58 + 319) = 0LL;
              *((_QWORD *)v58 + 225) = 0LL;
              _m_prefetchw(v58 + 10);
              do
                v95 = *((_DWORD *)v58 + 10);
              while ( v95 != _InterlockedCompareExchange((volatile signed __int32 *)v58 + 10, v95 | 0x80000, v95) );
              _m_prefetchw(v56 + 10);
              do
                v96 = *((_DWORD *)v56 + 10);
              while ( v96 != _InterlockedCompareExchange((volatile signed __int32 *)v56 + 10, v96 & 0xFFF7FFFF, v96) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v126, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)&v128, *((struct DHPDEV__ **)v56 + 225), v56);
            }
            else
            {
              *((_QWORD *)v56 + 319) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)&v128, 1);
            }
          }
          *(_QWORD *)v125 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(*(_QWORD *)v125 + 40LL) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)v125, 1);
          if ( (int)IsGreHideSpritesSupported() >= 0 )
          {
            v97 = MDEV;
            if ( v57 )
              v97 = a7;
            GreHideSprites(*(_QWORD *)v97, 0LL);
          }
          v98 = v133;
          if ( v133 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v133);
            GreReleaseSemaphoreInternal(v98);
          }
          MULTIDEVLOCKOBJ::vUnlock(v127);
          MULTIDEVLOCKOBJ::vUnlock(v131);
        }
        if ( v57 )
          goto LABEL_182;
        goto LABEL_174;
      }
      v78 = (HDEV)*((unsigned int *)MDEV + 5);
      v79 = *((_DWORD *)a7 + 5);
      if ( (_DWORD)v78 != 1 )
      {
        if ( v79 != 1 && (_DWORD)v78 )
        {
          v81 = 0;
          do
          {
            v62 = *((unsigned int *)a7 + 5);
            i = *((_QWORD *)MDEV + 5 * v81 + 4);
            v126 = 5LL * v81;
            v82 = 0;
            if ( (_DWORD)v62 )
            {
              while ( 1 )
              {
                v83 = v82;
                v78 = (HDEV)*((_QWORD *)a7 + 5 * v82 + 4);
                if ( *(_QWORD *)(i + 2576) == *((_QWORD *)v78 + 322) )
                  break;
                if ( ++v82 >= (unsigned int)v62 )
                  goto LABEL_130;
              }
              v62 = 1LL;
              if ( (*(_DWORD *)(i + 2128) & 0x10000) != 0 )
                v62 = ((_DWORD)v78[532] & 0x10000) == 0;
              if ( (HDEV)i != v78 )
              {
                if ( (unsigned int)bDynamicModeChange(v78, (HDEV)i) == 1 )
                {
                  v62 = v126;
                  i = 5 * v83;
                  v78 = (HDEV)*((_QWORD *)a7 + 5 * v83 + 4);
                  *((_QWORD *)a7 + 5 * v83 + 4) = *((_QWORD *)MDEV + v126 + 4);
                  *((_QWORD *)MDEV + v62 + 4) = v78;
                }
                else
                {
                  v57 = 1;
                }
              }
            }
LABEL_130:
            ++v81;
          }
          while ( v81 < *((_DWORD *)MDEV + 5) );
          v56 = v128;
        }
        goto LABEL_132;
      }
      v80 = (HDEV)*((_QWORD *)MDEV + 4);
      if ( v79 == 1 )
      {
        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v80) == 1 )
        {
          v78 = (HDEV)*((_QWORD *)a7 + 4);
          *((_QWORD *)a7 + 4) = *((_QWORD *)MDEV + 4);
          *((_QWORD *)MDEV + 4) = v78;
LABEL_132:
          GreReleaseHmgrSemaphore((__int64)v78, i, v62);
          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
          goto LABEL_133;
        }
      }
      else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v80) == 1 )
      {
        v78 = *(HDEV *)a7;
        *(_QWORD *)a7 = *((_QWORD *)MDEV + 4);
        *((_QWORD *)MDEV + 4) = v78;
        if ( !v56 )
          v78 = v58;
        v58 = v78;
        goto LABEL_132;
      }
      v57 = 1;
      goto LABEL_132;
    }
LABEL_98:
    EngAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    EngAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
    GreAcquireHmgrSemaphore(v74, v73, v75);
    goto LABEL_103;
  }
  v39 = CheckAndNotifyDualView(p_DestinationString, a7);
  if ( v39 )
  {
    v40 = v39 - 1;
    if ( v40 )
    {
      if ( v40 != 1 )
      {
        DrvReleaseChangeDisplaySettingLocks();
        if ( v36 )
          Win32FreePool((__int64)v36);
        v42 = WdLogNewEntry5_WdTrace(v41);
        WdLogEvent5_WdTrace(v42);
        v18 = -6;
        goto LABEL_232;
      }
      v15 = 1;
      gbDeferredOrgMdev = a7;
      gbDeferredInvalidateDualView = 1;
    }
    else
    {
      v15 = 1;
    }
  }
  v43 = (struct D3DKMT_GETPATHSMODALITY *)hsem;
  if ( (a13 & 1) == 0 || !(unsigned int)DrvUpdateDisplayModeInMdev(a7, (struct D3DKMT_GETPATHSMODALITY *)hsem) )
  {
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      v49 = gdmLogPixels;
      v50 = DrvCreateMDEV(p_DestinationString, v122, v129, a11 != 0 ? 4 : 0, a7, v125[0], v15, v124[0], v43);
      v51 = 0;
      MDEV = v50;
      if ( v50 )
      {
        v52 = *((_DWORD *)v50 + 5);
        v18 = 2;
        if ( v52 == *((_DWORD *)a7 + 5) && v49 == gdmLogPixels )
        {
          v53 = 0;
          if ( v52 )
          {
            v54 = (char *)v50 + 32;
            v55 = a7 - v50;
            do
            {
              if ( *(_QWORD *)v54 != *(_QWORD *)&v54[v55]
                || *((_DWORD *)v54 + 8) != *(_DWORD *)&v54[v55 + 32]
                || *((_QWORD *)v50 + 5 * v53 + 6) != *((_QWORD *)a7 + 5 * v53 + 6)
                || *((_QWORD *)v50 + 5 * v53 + 7) != *((_QWORD *)a7 + 5 * v53 + 7) )
              {
                v18 = 0;
              }
              ++v53;
              v54 += 40;
            }
            while ( v53 < v52 );
          }
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        DrvEnableMDEV(a7, 0LL, 0LL);
      }
    }
    else
    {
      v51 = 0;
    }
    goto LABEL_63;
  }
  v44 = a8;
  *a8 = (__int64)a7;
  DrvReleaseChangeDisplaySettingLocks();
  v18 = 3;
  v48 = WdLogNewEntry5_WdEvent(v46, v45, v47);
  WdLogEvent5_WdEvent(v48);
LABEL_222:
  if ( v122 )
    Win32FreePool((__int64)v122);
  if ( !a6 || v18 )
  {
    if ( v18 == 2 )
    {
      v22 = *v44;
      if ( *v44 )
      {
        Win32FreePool(v22);
        *v44 = 0LL;
      }
    }
  }
  else if ( a7 )
  {
    Win32FreePool((__int64)a7);
  }
  v118 = WdLogNewEntry5_WdTrace(v22);
  *(_QWORD *)(v118 + 24) = v18;
  WdLogEvent5_WdTrace(v118);
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_232:
  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    McTemplateK0(v31, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}
