/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C00A6D60
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A26F0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A34A0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00A61B0 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 *     NtUserSetDisplayConfig @ 0x1C00B8EC0 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0004 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00D40C0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004B498 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     LogDiagSDC @ 0x1C004B714 (LogDiagSDC.c)
 *     DrvQueryMDEVPowerState @ 0x1C004C790 (DrvQueryMDEVPowerState.c)
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C006D7D4 (PowerDimUndimResend.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006DF60 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C006E560 (-TrackFullscreenMode@@YAXH@Z.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C0079FAC (DrvSetDisplayConfigValidateParams.c)
 *     SafeDisableMDEV @ 0x1C00A6C60 (SafeDisableMDEV.c)
 *     SafeEnableMDEV @ 0x1C00A6CB0 (SafeEnableMDEV.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        __int64 a10)
{
  unsigned int v11; // r13d
  struct tagDESKTOP *v12; // rdi
  __int64 v13; // rcx
  int v15; // r14d
  signed int v16; // ebx
  __int64 v17; // r15
  int v18; // esi
  unsigned int v19; // esi
  int v20; // r13d
  struct tagMONITOR *CachedMonitor; // rax
  int v22; // ecx
  unsigned int v23; // esi
  void *v24; // rdx
  int v25; // eax
  void *v26; // rdx
  __int64 i; // rdx
  _QWORD *v28; // rcx
  char v29; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v30[3]; // [rsp+89h] [rbp-18h] BYREF
  int v31; // [rsp+8Ch] [rbp-15h] BYREF
  int v32; // [rsp+90h] [rbp-11h] BYREF
  struct _MDEV *v33; // [rsp+98h] [rbp-9h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-1h]

  v33 = 0LL;
  v11 = a3;
  v32 = 0;
  v29 = 0;
  v34 = MEMORY[0xFFFFF78000000320];
  v30[0] = 0;
  v31 = 0;
  v12 = (struct tagDESKTOP *)a5;
  v34 *= KeQueryTimeIncrement();
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v12 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 56);
  if ( (PVOID)PsGetCurrentProcess(v13) == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v12 )
      v12 = grpdeskRitInput;
  }
  else if ( v12 != grpdeskRitInput )
  {
    return 3221225506LL;
  }
  v15 = v11 & 0x10000;
  if ( ((v11 & 0x10000) != 0) == (a7 != 0) )
  {
    v19 = a4 | 4;
    if ( !v15 )
      v19 = a4;
    v16 = DrvSetDisplayConfigValidateParams(a1, a2, v11, v19, a6);
    if ( v16 < 0 )
      goto LABEL_13;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      10733637LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01743A4,
      0,
      3);
    v20 = v11 & 0x80;
    if ( v20 )
    {
      if ( gbMDEVDisabled )
      {
        v18 = 27;
LABEL_20:
        v17 = (__int64)a2;
        v16 = -1073741823;
LABEL_57:
        v11 = a3;
        goto LABEL_58;
      }
      if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
      {
        v18 = 28;
        goto LABEL_20;
      }
      CachedMonitor = CreateCachedMonitor();
      v22 = v31;
      if ( !CachedMonitor )
        v22 = 16;
      v31 = v22;
      SetPointer(0LL);
      FreeAllSpbs();
      if ( qword_1C01A2338 )
        StopFade();
      bSetDevDragRect(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
    }
    v23 = v19 | 0x40;
    if ( v12 )
      v24 = (void *)***((_QWORD ***)v12 + 1);
    else
      v24 = 0LL;
    v17 = (__int64)a2;
    v25 = DrvSetDisplayConfig(
            a1,
            a2,
            a3,
            v23 | 0x100,
            v24,
            a6,
            a7,
            0LL,
            *(struct _MDEV **)(gpDispInfo + 16),
            &v33,
            (unsigned int *)&v32,
            &v31,
            &v29,
            v30,
            a10);
    v16 = v25;
    if ( !v20 )
    {
      v18 = v31;
      goto LABEL_57;
    }
    if ( v25 >= 0 )
      goto LABEL_42;
    if ( v30[0] && !v15 && !a7 )
    {
      if ( v12 )
        v26 = (void *)***((_QWORD ***)v12 + 1);
      else
        v26 = 0LL;
      v25 = DrvSetDisplayConfig(
              0,
              0LL,
              2447LL,
              0x102u,
              v26,
              0,
              0LL,
              0LL,
              *(struct _MDEV **)(gpDispInfo + 16),
              &v33,
              0LL,
              0LL,
              &v29,
              0LL,
              a10);
    }
    if ( v25 >= 0 )
    {
LABEL_42:
      v16 = v25;
      if ( (v23 & 0x200) != 0 )
      {
        *((_WORD *)gpsi + 3499) = gdmLogPixels;
        for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
          *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
      }
      TrackFullscreenMode(0);
      if ( !v29 )
      {
        *(_QWORD *)(gpDispInfo + 16) = v33;
        PowerDimUndimResend();
        v16 = xxxResetDisplayDevice((__int64)v12, 0, (v23 >> 4) & 1);
        v18 = 36;
        if ( v16 < 0 )
          goto LABEL_52;
        goto LABEL_51;
      }
      if ( (v23 & 4) != 0 )
      {
LABEL_51:
        v18 = v31;
LABEL_52:
        if ( v12 )
        {
          v28 = (_QWORD *)*((_QWORD *)v12 + 1);
          if ( (*(_DWORD *)(*v28 + 52LL) & 1) == 0 )
            xxxInternalInvalidate(v28[3], 1LL, 66693LL);
        }
        SetPointer(1LL);
        zzzUpdateCursorImage();
        goto LABEL_57;
      }
      if ( (unsigned int)SafeDisableMDEV(1u) )
        SafeEnableMDEV(1u);
    }
    xxxUserResetDisplayDevice();
    goto LABEL_51;
  }
  v16 = -1073741811;
LABEL_13:
  v17 = (__int64)a2;
  v18 = 1;
LABEL_58:
  if ( a8 )
    *a8 = (unsigned int)(v18 - 27) <= 1;
  if ( a9 )
    *a9 = v29;
  if ( v16 >= 0 && v18 == 29 )
    v16 = -1073741266;
  LogDiagSDC(a1, v17, v11, v16, v32, v18, v34, v29);
  return (unsigned int)v16;
}
