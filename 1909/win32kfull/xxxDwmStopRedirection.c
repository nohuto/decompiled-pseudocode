/*
 * XREFs of xxxDwmStopRedirection @ 0x1C015F2D0
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C022B030 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     DwmNotifyChildrenAddRemove @ 0x1C000FC74 (DwmNotifyChildrenAddRemove.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     _GetProcessWindowStation @ 0x1C007D1B0 (_GetProcessWindowStation.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     GreDwmShutdown @ 0x1C015F160 (GreDwmShutdown.c)
 *     DwmAsyncDesktopFree @ 0x1C015F520 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C015F5CC (zzzDecomposeDesktop.c)
 *     ChangeComposableCursor @ 0x1C01CC3EC (ChangeComposableCursor.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C0274B54 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDwmStopRedirection(__int64 a1, __int64 a2)
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v3; // edi
  __int64 i; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // rax
  HSURF v8; // rdx
  __int64 v9; // rcx
  __int64 j; // rbx
  struct tagWND *v11; // rsi
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  struct tagWND *v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+78h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL, a2);
  v3 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 32) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    if ( gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(0LL);
      gbScreenCaptureSoftwareCursorEnabled = 0;
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(i + 8) + 64LL) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 0);
          v7 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8), v5, v6);
          DwmAsyncDesktopFree(v7);
        }
      }
      v8 = *(HSURF *)(ProcessWindowStation + 88);
      if ( v8 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v8, 1);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 32) &= ~0x200u;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( gdwInAtomicOperation )
      {
        v9 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v9);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v11 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v11 )
          {
            v17 = 0LL;
            v18 = 0LL;
            v19 = 0LL;
            v17 = *(_QWORD *)(gptiCurrent + 408LL);
            *(_QWORD *)(gptiCurrent + 408LL) = &v17;
            v18 = v11;
            HMLockObject(v11);
            v12 = 0;
            if ( g_pDwmState )
              v12 = gfDwmDeviceBitmapsEnabled;
            xxxRedrawWindow(v11, 0LL, 0LL, v12 != 0 ? 645 : 66181);
            ThreadUnlock1(v14, v13, v15);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
