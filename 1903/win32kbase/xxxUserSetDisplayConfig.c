/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C0062520
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C005A854 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0107160 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0108170 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C010B4F0 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserSetDisplayConfig @ 0x1C011BCD0 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012A664 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C012D200 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00493A0 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C00493CC (-TrackFullscreenMode@@YAXH@Z.c)
 *     DrvQueryMDEVPowerState @ 0x1C004B960 (DrvQueryMDEVPowerState.c)
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 *     PowerDimUndimResend @ 0x1C00623F8 (PowerDimUndimResend.c)
 *     LogDiagSDC @ 0x1C00628E0 (LogDiagSDC.c)
 *     xxxResetDisplayDevice @ 0x1C00639B0 (xxxResetDisplayDevice.c)
 *     SafeEnableMDEV @ 0x1C00BAC60 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00BAD40 (SafeDisableMDEV.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00C1880 (DrvSetDisplayConfigValidateParams.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C0106D2C (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     LogDiagSDCAccessDenied @ 0x1C012ED08 (LogDiagSDCAccessDenied.c)
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
  int v11; // ebx
  unsigned int v12; // r14d
  struct tagDESKTOP *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r8
  int v18; // r14d
  unsigned int v19; // edi
  int v20; // ebx
  struct tagMONITOR *CachedMonitor; // rax
  int v22; // ecx
  void *v23; // rdx
  int v24; // r12d
  int v25; // eax
  char v26; // r10
  struct _MDEV *v27; // rcx
  int v28; // edi
  _QWORD *v29; // rcx
  _DWORD *v31; // rax
  char v32; // dl
  _DWORD *v33; // rcx
  struct tagDESKTOP *v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rax
  int v37; // eax
  void *v38; // rdx
  __int64 i; // rdx
  char v40; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v41[3]; // [rsp+89h] [rbp-18h] BYREF
  int v42; // [rsp+8Ch] [rbp-15h] BYREF
  unsigned int v43; // [rsp+90h] [rbp-11h] BYREF
  __int64 v44; // [rsp+98h] [rbp-9h]
  struct _MDEV *v45[7]; // [rsp+A0h] [rbp-1h] BYREF

  v45[0] = 0LL;
  v11 = (int)a2;
  v43 = 0;
  v12 = a1;
  v40 = 0;
  v44 = MEMORY[0xFFFFF78000000320];
  v41[0] = 0;
  v42 = 0;
  v13 = (struct tagDESKTOP *)a5;
  v16 = v44 * KeQueryTimeIncrement();
  v44 = v16;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v13 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 56);
  if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v13 )
      v13 = grpdeskRitInput;
  }
  else
  {
    v34 = grpdeskRitInput;
    if ( gbDesktopLocked )
      v34 = (struct tagDESKTOP *)gspdeskShouldBeForeground;
    if ( v13 != v34 )
    {
      if ( v34 && ObQueryNameInfo(v34) )
        v35 = ObQueryNameInfo(v34) + 8;
      else
        v35 = 0LL;
      if ( v13 )
      {
        if ( ObQueryNameInfo(v13) )
          v36 = ObQueryNameInfo(v13) + 8;
        else
          v36 = 0LL;
      }
      else
      {
        v36 = 0LL;
      }
      LogDiagSDCAccessDenied(v36, v35);
      v24 = (int)a2;
      v20 = -1073741790;
      v28 = 49;
      goto LABEL_35;
    }
    v11 = (int)a2;
  }
  LODWORD(v17) = a3;
  v18 = a3 & 0x10000;
  if ( ((a3 & 0x10000) != 0) != (a7 != 0) )
  {
    v20 = -1073741811;
    v28 = 1;
    goto LABEL_71;
  }
  v19 = a4 | 4;
  if ( !v18 )
    v19 = a4;
  v20 = DrvSetDisplayConfigValidateParams(a1, v11, a3, v19, a6);
  if ( v20 < 0 )
  {
    v28 = 1;
    goto LABEL_74;
  }
  v17 = a3;
  if ( v18 || gProtocolType && (a3 & 0x88F) == 0x88F || (v19 & 0xC01) != 0 )
    goto LABEL_13;
  v31 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v32 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  v33 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( !v32 )
    v33 = DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( *v33 == 3 )
  {
    v12 = a1;
    v24 = (int)a2;
    v37 = xxxDispBrokerSetDisplayConfig(a1, a2, a3, v19, a6 != 0);
    v28 = v42;
    v20 = v37;
    goto LABEL_34;
  }
  if ( v32 )
    v31 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( *v31 != 2 )
  {
LABEL_13:
    if ( (a3 & 0x80) == 0 )
    {
LABEL_21:
      if ( v13 )
        v23 = (void *)***((_QWORD ***)v13 + 1);
      else
        v23 = 0LL;
      v24 = (int)a2;
      v25 = DrvSetDisplayConfig(
              a1,
              a2,
              v17,
              v19 | 0x140,
              v23,
              a6,
              a7,
              0LL,
              *(struct _MDEV **)(gpDispInfo + 16),
              v45,
              &v43,
              &v42,
              &v40,
              v41,
              a10);
      v20 = v25;
      if ( (a3 & 0x80) != 0 )
      {
        if ( v25 >= 0 )
          goto LABEL_25;
        if ( v41[0] && !v18 && !a7 )
        {
          if ( v13 )
            v38 = (void *)***((_QWORD ***)v13 + 1);
          else
            v38 = 0LL;
          v25 = DrvSetDisplayConfig(
                  0,
                  0LL,
                  2447LL,
                  0x102u,
                  v38,
                  0,
                  0LL,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 16),
                  v45,
                  0LL,
                  0LL,
                  &v40,
                  0LL,
                  a10);
        }
        if ( v25 >= 0 )
        {
LABEL_25:
          v20 = v25;
          if ( (v19 & 0x200) != 0 )
          {
            *((_WORD *)gpsi + 3499) = gdmLogPixels;
            for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
              *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
          }
          TrackFullscreenMode(0);
          if ( v40 == v26 )
          {
            v27 = v45[0];
            *(struct _MDEV **)(gpDispInfo + 16) = v45[0];
            PowerDimUndimResend((__int64)v27);
            v20 = xxxResetDisplayDevice(v13, 0LL, (v19 >> 4) & 1);
            v28 = 36;
            if ( v20 < 0 )
              goto LABEL_29;
            goto LABEL_28;
          }
          if ( (v19 & 4) != 0 )
          {
LABEL_28:
            v28 = v42;
LABEL_29:
            if ( v13 )
            {
              v29 = (_QWORD *)*((_QWORD *)v13 + 1);
              if ( (*(_DWORD *)(*v29 + 64LL) & 1) == 0 )
                xxxInternalInvalidate(v29[3], 1LL, 66693LL);
            }
            SetPointer(1LL);
            zzzUpdateCursorImage();
            goto LABEL_33;
          }
          if ( (unsigned int)SafeDisableMDEV(1LL) )
            SafeEnableMDEV(1LL);
        }
        xxxUserResetDisplayDevice();
        goto LABEL_28;
      }
      v28 = v42;
LABEL_33:
      v12 = a1;
LABEL_34:
      v16 = v44;
LABEL_35:
      LODWORD(v17) = a3;
      goto LABEL_36;
    }
    if ( gbMDEVDisabled )
    {
      v28 = 27;
      v20 = -1073741823;
      goto LABEL_71;
    }
    if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
    {
      CachedMonitor = CreateCachedMonitor();
      v22 = v42;
      if ( !CachedMonitor )
        v22 = 16;
      v42 = v22;
      SetPointer(0LL);
      FreeAllSpbs();
      if ( qword_1C0218870 )
        StopFade();
      bSetDevDragRect(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
      v17 = a3;
      goto LABEL_21;
    }
    v28 = 28;
    v20 = -1073741823;
LABEL_74:
    v24 = (int)a2;
    goto LABEL_33;
  }
  v28 = v42;
  v20 = -1073741790;
LABEL_71:
  v24 = (int)a2;
  v12 = a1;
  v16 = v44;
LABEL_36:
  if ( a8 )
    *a8 = (unsigned int)(v28 - 27) <= 1;
  if ( a9 )
    *a9 = v40;
  if ( v20 >= 0 && v28 == 29 )
    v20 = -1073741266;
  LogDiagSDC(v12, v24, v17, v20, v43, v28, v16, v40);
  return (unsigned int)v20;
}
