/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C0062C00
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01047F0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0108B80 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserSetDisplayConfig @ 0x1C0119360 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0127EB4 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C012AA50 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0046F60 (DrvQueryMDEVPowerState.c)
 *     LogDiagSDC @ 0x1C0047D78 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     xxxResetDisplayDevice @ 0x1C0062FC0 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C006354C (PowerDimUndimResend.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0063670 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063688 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     SafeEnableMDEV @ 0x1C00B7C00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00B7CE0 (SafeDisableMDEV.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00BFA80 (DrvSetDisplayConfigValidateParams.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C01043BC (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     LogDiagSDCAccessDenied @ 0x1C012C558 (LogDiagSDCAccessDenied.c)
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
  signed int v20; // ebx
  struct tagMONITOR *CachedMonitor; // rax
  int v22; // ecx
  void *v23; // rdx
  __int64 v24; // r12
  int v25; // eax
  char v26; // r10
  unsigned int v27; // edi
  _QWORD *v28; // rcx
  _DWORD *v30; // rax
  char v31; // dl
  _DWORD *v32; // rcx
  struct tagDESKTOP *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rax
  signed int v36; // eax
  void *v37; // rdx
  __int64 i; // rdx
  char v39; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v40[3]; // [rsp+89h] [rbp-18h] BYREF
  signed int v41; // [rsp+8Ch] [rbp-15h] BYREF
  int v42; // [rsp+90h] [rbp-11h] BYREF
  __int64 v43; // [rsp+98h] [rbp-9h]
  struct _MDEV *v44[7]; // [rsp+A0h] [rbp-1h] BYREF

  v44[0] = 0LL;
  v11 = (int)a2;
  v42 = 0;
  v12 = a1;
  v39 = 0;
  v43 = MEMORY[0xFFFFF78000000320];
  v40[0] = 0;
  v41 = 0;
  v13 = (struct tagDESKTOP *)a5;
  v16 = v43 * KeQueryTimeIncrement();
  v43 = v16;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v13 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 56);
  if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v13 )
      v13 = grpdeskRitInput;
  }
  else
  {
    v33 = grpdeskRitInput;
    if ( gbDesktopLocked )
      v33 = (struct tagDESKTOP *)gspdeskShouldBeForeground;
    if ( v13 != v33 )
    {
      if ( v33 && ObQueryNameInfo(v33) )
        v34 = ObQueryNameInfo(v33) + 8;
      else
        v34 = 0LL;
      if ( v13 )
      {
        if ( ObQueryNameInfo(v13) )
          v35 = ObQueryNameInfo(v13) + 8;
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      LogDiagSDCAccessDenied(v35, v34);
      v24 = (__int64)a2;
      v20 = -1073741790;
      v27 = 49;
      goto LABEL_35;
    }
    v11 = (int)a2;
  }
  LODWORD(v17) = a3;
  v18 = a3 & 0x10000;
  if ( ((a3 & 0x10000) != 0) != (a7 != 0) )
  {
    v20 = -1073741811;
    v27 = 1;
    goto LABEL_71;
  }
  v19 = a4 | 4;
  if ( !v18 )
    v19 = a4;
  v20 = DrvSetDisplayConfigValidateParams(a1, v11, a3, v19, a6);
  if ( v20 < 0 )
  {
    v27 = 1;
    goto LABEL_74;
  }
  v17 = a3;
  if ( v18 || gProtocolType && (a3 & 0x88F) == 0x88F || (v19 & 0xC01) != 0 )
    goto LABEL_13;
  v30 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v31 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  v32 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( !v31 )
    v32 = DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( *v32 == 3 )
  {
    v12 = a1;
    v24 = (__int64)a2;
    v36 = xxxDispBrokerSetDisplayConfig(a1, a2, a3, v19, a6 != 0);
    v27 = v41;
    v20 = v36;
    goto LABEL_34;
  }
  if ( v31 )
    v30 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( *v30 != 2 )
  {
LABEL_13:
    if ( (a3 & 0x80) == 0 )
    {
LABEL_21:
      if ( v13 )
        v23 = (void *)***((_QWORD ***)v13 + 1);
      else
        v23 = 0LL;
      v24 = (__int64)a2;
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
              v44,
              (unsigned int *)&v42,
              &v41,
              &v39,
              v40,
              a10);
      v20 = v25;
      if ( (a3 & 0x80) != 0 )
      {
        if ( v25 >= 0 )
          goto LABEL_25;
        if ( v40[0] && !v18 && !a7 )
        {
          if ( v13 )
            v37 = (void *)***((_QWORD ***)v13 + 1);
          else
            v37 = 0LL;
          v25 = DrvSetDisplayConfig(
                  0,
                  0LL,
                  2447LL,
                  0x102u,
                  v37,
                  0,
                  0LL,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 16),
                  v44,
                  0LL,
                  0LL,
                  &v39,
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
          if ( v39 == v26 )
          {
            *(struct _MDEV **)(gpDispInfo + 16) = v44[0];
            PowerDimUndimResend();
            v20 = xxxResetDisplayDevice(v13, 0LL, (v19 >> 4) & 1);
            v27 = 36;
            if ( v20 < 0 )
              goto LABEL_29;
            goto LABEL_28;
          }
          if ( (v19 & 4) != 0 )
          {
LABEL_28:
            v27 = v41;
LABEL_29:
            if ( v13 )
            {
              v28 = (_QWORD *)*((_QWORD *)v13 + 1);
              if ( (*(_DWORD *)(*v28 + 64LL) & 1) == 0 )
                xxxInternalInvalidate(v28[3], 1LL, 66693LL);
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
      v27 = v41;
LABEL_33:
      v12 = a1;
LABEL_34:
      v16 = v43;
LABEL_35:
      LODWORD(v17) = a3;
      goto LABEL_36;
    }
    if ( gbMDEVDisabled )
    {
      v27 = 27;
      v20 = -1073741823;
      goto LABEL_71;
    }
    if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
    {
      CachedMonitor = CreateCachedMonitor();
      v22 = v41;
      if ( !CachedMonitor )
        v22 = 16;
      v41 = v22;
      SetPointer(0LL);
      FreeAllSpbs();
      if ( qword_1C0215870 )
        StopFade();
      bSetDevDragRect(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
      v17 = a3;
      goto LABEL_21;
    }
    v27 = 28;
    v20 = -1073741823;
LABEL_74:
    v24 = (__int64)a2;
    goto LABEL_33;
  }
  v27 = v41;
  v20 = -1073741790;
LABEL_71:
  v24 = (__int64)a2;
  v12 = a1;
  v16 = v43;
LABEL_36:
  if ( a8 )
    *a8 = v27 - 27 <= 1;
  if ( a9 )
    *a9 = v39;
  if ( v20 >= 0 && v27 == 29 )
    v20 = -1073741266;
  LogDiagSDC(v12, v24, v17, v20, v42, v27, v16, v39);
  return (unsigned int)v20;
}
