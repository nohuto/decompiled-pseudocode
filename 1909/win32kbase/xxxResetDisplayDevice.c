/*
 * XREFs of xxxResetDisplayDevice @ 0x1C0062FC0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0046FBC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062C00 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C012AF30 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ReferenceDwmApiPort @ 0x1C003EA50 (ReferenceDwmApiPort.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00632C4 (-ResetSystemColors@@YAXXZ.c)
 *     DestroyMonitorDCs @ 0x1C0063360 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C0063410 (SnapshotMonitorRects.c)
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int16 v6; // r14
  int updated; // esi
  PVOID v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  _BYTE v12[32]; // [rsp+40h] [rbp-38h] BYREF
  int CurrentProcessSessionId; // [rsp+88h] [rbp+10h] BYREF
  char v14; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v6 = *((_WORD *)gpsi + 3498);
  memset(v12, 0, 24);
  if ( !a2 )
  {
    if ( a1 && (v3 = *(_QWORD *)(a1 + 264)) != 0 )
      *(_QWORD *)(a1 + 264) = 0LL;
    else
      v3 = SnapshotMonitorRects();
    if ( v3 )
      PushW32ThreadLock(v3, v12, Win32FreePool);
  }
  DestroyMonitorDCs();
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  updated = UpdateUserScreen();
  if ( updated < 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  }
  else
  {
    if ( (int)IsRecreateTouchInjectionDevicesSupported() >= 0 )
      RecreateTouchInjectionDevices();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    if ( (int)IszzzResetSharedDesktopsSupported() >= 0 )
      zzzResetSharedDesktops(a1, v6 != *((_WORD *)gpsi + 3498), a3);
    ResetSystemColors();
    if ( (int)IsCreateBitmapStripSupported() >= 0 )
      CreateBitmapStrip();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      v8 = ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange(v8);
    }
    if ( (int)IsCalcWindowsFullScreenSupported() >= 0 )
      CalcWindowsFullScreen(a1);
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 264);
      if ( v9 )
      {
        Win32FreePool(v9);
        *(_QWORD *)(a1 + 264) = 0LL;
      }
    }
    if ( a3 && (int)IsIAMKeyAcquiredSupported() >= 0 && (unsigned int)IAMKeyAcquired(a1) )
    {
      if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
        McTemplateK0(v11, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
      *(_QWORD *)(a1 + 264) = v3;
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL, 1LL);
      if ( (int)IsxxxBroadcastDisplaySettingsChangeSupported() >= 0 )
        xxxBroadcastDisplaySettingsChange(a1, 0LL, 2LL);
      if ( v3 )
        PopW32ThreadLock(v12);
    }
    else
    {
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL, 0LL);
      if ( (int)IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported() >= 0 )
        xxxDesktopsRecalcAndBroadcastDisplayChange(a1, v3, v6, 0LL);
      if ( v3 )
        PopAndFreeAlwaysW32ThreadLock(v12);
    }
    if ( (int)IsHandleDisplayChangeForInactiveDesktopsSupported() >= 0 )
      HandleDisplayChangeForInactiveDesktops(a1, 1LL);
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112) && (int)IsQueueNotifyMessageSupported() >= 0 )
      QueueNotifyMessage(*(_QWORD *)(gpqForeground + 112), 31LL, 0LL);
    if ( !a3 )
      CacheRotationInfo();
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  }
  return (unsigned int)updated;
}
