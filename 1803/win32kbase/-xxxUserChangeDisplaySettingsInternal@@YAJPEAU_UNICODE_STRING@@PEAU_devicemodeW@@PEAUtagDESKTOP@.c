/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004C440
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C004C7F0 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettings @ 0x1C004BCC8 (DrvChangeDisplaySettings.c)
 *     DrvQueryMDEVPowerState @ 0x1C004C790 (DrvQueryMDEVPowerState.c)
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C006D7D4 (PowerDimUndimResend.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006DF60 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C006E560 (-TrackFullscreenMode@@YAXH@Z.c)
 *     SafeDisableMDEV @ 0x1C00A6C60 (SafeDisableMDEV.c)
 *     SafeEnableMDEV @ 0x1C00A6CB0 (SafeEnableMDEV.c)
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 *     DrvSetPruneFlag @ 0x1C00D5C30 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00D5D64 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  UNICODE_STRING *v9; // r12
  int v10; // ebx
  __int64 v12; // rdx
  void *v13; // r11
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  void *v17; // rdx
  int v18; // eax
  struct _MDEV *v19; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v20[32]; // [rsp+98h] [rbp-1h] BYREF
  char v22; // [rsp+100h] [rbp+67h] BYREF

  v9 = a1;
  v22 = 0;
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0(a1, &ChangeDisplayModeStart, 0LL);
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_9;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
  {
    if ( (a4 & 0x20) == 0
      || (v10 = DrvSetVideoParameters(
                  (_DWORD)v9,
                  *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL),
                  a6,
                  (_DWORD)a5,
                  1,
                  1),
          v10 < 0) )
    {
      v10 = -5;
    }
    goto LABEL_10;
  }
  if ( gbMDEVDisabled )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v16 = DrvSetVideoParameters((_DWORD)v9, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a6, (_DWORD)a5, 1, 1);
    goto LABEL_71;
  }
  LOBYTE(a1) = (a4 & 0x10000008) != 0;
  if ( ((unsigned __int8)a1 & ((a4 & 1) == 0)) != 0
    || (a1 = (struct _UNICODE_STRING *)(a4 & 0x60000000), (a4 & 0x10000000) != 0) && (_DWORD)a1
    || (a4 & 0x80000004) == 0x80000004 && (_DWORD)a1
    || (_DWORD)a1 == 1610612736
    || (a4 & 0x100) != 0 && a4 != 256
    || (a4 & 0x200) != 0 && a4 != 512 )
  {
LABEL_9:
    v10 = -4;
    goto LABEL_10;
  }
  if ( (gdwPUDFlags & 0x20000000) != 0
    && ((PVOID)PsGetCurrentProcess() != gpepCSRSS || !(unsigned int)IsRemoteConnection()) )
  {
    goto LABEL_64;
  }
  if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
    a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 56);
  if ( (PVOID)PsGetCurrentProcess() != gpepCSRSS )
  {
    if ( a3 == grpdeskRitInput )
      goto LABEL_22;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v16 = DrvSetVideoParameters((_DWORD)v9, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a6, (_DWORD)a5, 1, 0);
LABEL_71:
    v10 = v16;
    if ( v16 >= 0 )
      goto LABEL_10;
    goto LABEL_64;
  }
  if ( !a3 )
    a3 = grpdeskRitInput;
LABEL_22:
  if ( (a4 & 0x100) != 0 )
  {
    v12 = 0LL;
LABEL_75:
    v18 = DrvSetPruneFlag(v9, v12, (unsigned int)a6);
    goto LABEL_90;
  }
  if ( (a4 & 0x200) != 0 )
  {
    LOBYTE(v12) = 1;
    goto LABEL_75;
  }
  if ( (a4 & 0x10000002) != 0 )
    goto LABEL_28;
  if ( !CreateCachedMonitor() )
  {
LABEL_64:
    v10 = -1;
    goto LABEL_10;
  }
  SetPointer(0LL);
  if ( (int)IsFreeAllSpbsSupported() >= 0 )
    FreeAllSpbs();
LABEL_28:
  if ( qword_1C01A2338 && (int)IsStopFadeSupported() >= 0 )
    StopFade();
  if ( (int)IsbSetDevDragRectSupported() >= 0 )
    bSetDevDragRect(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
  if ( a3 )
    v13 = (void *)***((_QWORD ***)a3 + 1);
  else
    v13 = 0LL;
  v10 = DrvChangeDisplaySettings(
          v9,
          *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL),
          a2,
          v13,
          a6,
          a4 & 1,
          (a4 & 0x10000002) == 0,
          *(struct _MDEV **)(gpDispInfo + 16),
          &v19,
          -((a4 & 0x40) == 0),
          (unsigned __int8)a4 & 0x80,
          a4 & 0x20000000,
          a4 & 4,
          &v22,
          (__int64)a7);
  PushW32ThreadLock(a3, v20, CompositionObject::Release);
  if ( a3 )
    ObfReferenceObject(a3);
  if ( (a4 & 0x10000002) == 0 )
  {
    if ( v10 == 2 )
    {
      TrackFullscreenMode(a4 & 4);
      if ( (a4 & 0x40000000) != 0 )
      {
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
        xxxUserResetDisplayDevice();
      }
      v10 = 0;
      goto LABEL_39;
    }
    if ( v10 )
    {
      if ( v10 >= 0 )
        goto LABEL_39;
      xxxUserResetDisplayDevice();
      if ( !v22 )
        goto LABEL_39;
      v17 = a3 ? (void *)***((_QWORD ***)a3 + 1) : 0LL;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0LL,
                  2447LL,
                  2u,
                  v17,
                  0,
                  0LL,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 16),
                  &v19,
                  0LL,
                  0LL,
                  &v22,
                  0LL,
                  (__int64)a7) < 0 )
        goto LABEL_39;
      TrackFullscreenMode(0);
      if ( v22 )
        goto LABEL_39;
      v15 = 0LL;
      *(_QWORD *)(gpDispInfo + 16) = v19;
    }
    else
    {
      TrackFullscreenMode(a4 & 4);
      *(_QWORD *)(gpDispInfo + 16) = v19;
      PowerDimUndimResend();
      v15 = a4 & 4;
    }
    xxxResetDisplayDevice(a3, v15, 0LL);
LABEL_39:
    if ( a3 )
    {
      v14 = (_QWORD *)*((_QWORD *)a3 + 1);
      if ( (*(_DWORD *)(*v14 + 52LL) & 1) == 0 )
        xxxInternalInvalidate(v14[3], 1LL, 66693LL);
    }
    SetPointer(1LL);
    if ( (int)IszzzUpdateCursorImageSupported() >= 0 )
      zzzUpdateCursorImage();
  }
  PopAndFreeW32ThreadLock(v20);
  if ( v10 >= 0 && (a4 & 0x20) != 0 )
  {
    v18 = DrvSetVideoParameters((_DWORD)v9, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a6, (_DWORD)a5, 0, 0);
LABEL_90:
    v10 = v18;
  }
LABEL_10:
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0(a1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v10;
}
