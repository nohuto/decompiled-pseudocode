/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C0049150
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0003800 (DrvDisplayConfigSetDeviceInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1610 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2074 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00E3750 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 *     NtUserSetDisplayConfig @ 0x1C00F1220 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0101D60 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C0046FB0 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0049674 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C00496A0 (-TrackFullscreenMode@@YAXH@Z.c)
 *     DrvQueryMDEVPowerState @ 0x1C004B930 (DrvQueryMDEVPowerState.c)
 *     LogDiagSDC @ 0x1C004C614 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     PowerDimUndimResend @ 0x1C0099C10 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00A6220 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A62F0 (SafeDisableMDEV.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00AFBC0 (DrvSetDisplayConfigValidateParams.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C00E1164 (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
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
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v12; // r15
  ULONG TimeIncrement; // eax
  __int64 v14; // rcx
  struct tagDESKTOP *v15; // rsi
  PVOID CurrentProcess; // rax
  char v17; // r12
  int v18; // r14d
  unsigned int v19; // edi
  __int64 v20; // rdx
  int v21; // ebx
  struct tagMONITOR *CachedMonitor; // rax
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // r8
  int v30; // edi
  _QWORD *v31; // rcx
  unsigned int v32; // esi
  _DWORD *v34; // rax
  _DWORD *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 i; // rdx
  char v39; // [rsp+88h] [rbp-19h] BYREF
  int v40; // [rsp+8Ch] [rbp-15h] BYREF
  __int64 v41; // [rsp+90h] [rbp-11h] BYREF
  __int64 v42; // [rsp+98h] [rbp-9h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-1h]
  int v45; // [rsp+F0h] [rbp+4Fh]
  __int64 v46; // [rsp+F8h] [rbp+57h] BYREF

  v45 = (int)a2;
  v42 = 0LL;
  LODWORD(v41) = 0;
  v12 = a2;
  LOBYTE(v46) = 0;
  v43 = MEMORY[0xFFFFF78000000320];
  v39 = 0;
  v40 = 0;
  TimeIncrement = KeQueryTimeIncrement();
  v15 = (struct tagDESKTOP *)a5;
  v43 *= TimeIncrement;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v15 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v14);
  v17 = a6;
  if ( CurrentProcess == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v15 )
      v15 = grpdeskRitInput;
  }
  else if ( v15 != grpdeskRitInput )
  {
    return 3221225506LL;
  }
  v18 = a3 & 0x10000;
  if ( ((a3 & 0x10000) != 0) != (a7 != 0) )
  {
    v21 = -1073741811;
LABEL_56:
    v30 = 1;
    goto LABEL_34;
  }
  v19 = a4 | 4;
  if ( !v18 )
    v19 = a4;
  v21 = DrvSetDisplayConfigValidateParams(a1, (_DWORD)v12, a3, v19, a6);
  if ( v21 < 0 )
    goto LABEL_56;
  if ( !v18 && (!gProtocolType || (a3 & 0x88F) != 0x88F) )
  {
    v34 = DispBroker::DispBrokerClient::s_pSessionBroker;
    LOBYTE(v20) = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
    v35 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
    if ( !(_BYTE)v20 )
      v35 = DispBroker::DispBrokerClient::s_pSessionBroker;
    if ( *v35 == 3 )
    {
      v32 = a1;
      v36 = xxxDispBrokerSetDisplayConfig(a1, v12, a3, v19, v17 != 0);
      v30 = v40;
      v21 = v36;
      goto LABEL_35;
    }
    if ( (_BYTE)v20 )
      v34 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
    if ( *v34 == 2 )
    {
      v21 = -1073741790;
LABEL_79:
      v30 = v40;
      goto LABEL_34;
    }
  }
  if ( (a3 & 0x80) == 0 )
  {
LABEL_21:
    if ( v15 )
      v24 = ***((_QWORD ***)v15 + 1);
    else
      v24 = 0LL;
    v25 = DrvSetDisplayConfig(
            a1,
            v45,
            a3,
            v19 | 0x140,
            v24,
            v17,
            a7,
            0LL,
            *(struct _MDEV **)(gpDispInfo + 16),
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v46,
            (__int64)&v39,
            a10);
    v28 = 0LL;
    v21 = v25;
    if ( (a3 & 0x80) == 0 )
    {
      LODWORD(v12) = v45;
      goto LABEL_79;
    }
    if ( v25 >= 0 )
      goto LABEL_25;
    if ( v39 && !v18 && !a7 )
    {
      if ( v15 )
        v37 = ***((_QWORD ***)v15 + 1);
      else
        v37 = 0LL;
      v25 = DrvSetDisplayConfig(
              0,
              0,
              2447,
              258,
              v37,
              0,
              0LL,
              0LL,
              *(struct _MDEV **)(gpDispInfo + 16),
              (__int64)&v42,
              0LL,
              0LL,
              (__int64)&v46,
              0LL,
              a10);
      v28 = 0LL;
    }
    if ( v25 >= 0 )
    {
LABEL_25:
      v21 = v25;
      if ( (v19 & 0x200) != 0 )
      {
        *((_WORD *)gpsi + 3499) = gdmLogPixels;
        for ( i = gppiList; i; i = *(_QWORD *)(i + 384) )
          *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
      }
      TrackFullscreenMode(0);
      if ( (_BYTE)v46 == v29 )
      {
        *(_QWORD *)(gpDispInfo + 16) = v42;
        PowerDimUndimResend();
        v21 = xxxResetDisplayDevice((__int64)v15, 0, (v19 >> 4) & 1);
        v30 = 36;
        if ( v21 < 0 )
          goto LABEL_29;
        goto LABEL_28;
      }
      if ( (v19 & 4) != 0 )
      {
LABEL_28:
        v30 = v40;
LABEL_29:
        if ( v15 )
        {
          v31 = (_QWORD *)*((_QWORD *)v15 + 1);
          if ( (*(_DWORD *)(*v31 + 64LL) & 1) == 0 )
            xxxInternalInvalidate(v31[3], 1LL, 66693LL);
        }
        SetPointer(1LL);
        zzzUpdateCursorImage();
        goto LABEL_33;
      }
      if ( (unsigned int)SafeDisableMDEV(1LL) )
        SafeEnableMDEV(1LL);
    }
    xxxUserResetDisplayDevice(v27, v26, v28);
    goto LABEL_28;
  }
  if ( gbMDEVDisabled )
  {
    v30 = 27;
  }
  else
  {
    if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16), v20, 0LL) )
    {
      CachedMonitor = CreateCachedMonitor();
      v23 = v40;
      if ( !CachedMonitor )
        v23 = 16;
      v40 = v23;
      SetPointer(0LL);
      FreeAllSpbs();
      if ( qword_1C01CFE10 )
        StopFade();
      bSetDevDragRect(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
      goto LABEL_21;
    }
    v30 = 28;
  }
  v21 = -1073741823;
LABEL_33:
  LODWORD(v12) = v45;
LABEL_34:
  v32 = a1;
LABEL_35:
  if ( a8 )
    *a8 = (unsigned int)(v30 - 27) <= 1;
  if ( a9 )
    *a9 = v46;
  if ( v21 >= 0 && v30 == 29 )
    v21 = -1073741266;
  LogDiagSDC(v32, (_DWORD)v12, a3, v21, v41, v30, v43, v46);
  return (unsigned int)v21;
}
