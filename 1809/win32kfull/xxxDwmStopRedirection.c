/*
 * XREFs of xxxDwmStopRedirection @ 0x1C00C6C60
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C02137E0 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     DwmAsyncDesktopFree @ 0x1C00C7968 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00C7A14 (DwmNotifyChildrenAddRemove.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 *     GreDwmShutdown @ 0x1C00ED5A4 (GreDwmShutdown.c)
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     StopFade @ 0x1C0152D60 (StopFade.c)
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 *     GreDxDwmShutdown @ 0x1C025BB34 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 i; // rsi
  __int64 v3; // rdx
  void *v4; // rax
  HSURF v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 j; // rbx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF
  char v15; // [rsp+78h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 32) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
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
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
          v4 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8), v3);
          DwmAsyncDesktopFree(v4);
        }
      }
      v5 = *(HSURF *)(ProcessWindowStation + 88);
      if ( v5 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v5, 1);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 32) &= ~0x200u;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsConsoleConnection() )
    {
      if ( gdwInAtomicOperation )
      {
        v6 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(j + 8) + 24LL);
          if ( v10 )
          {
            v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = v14;
            v14[1] = v10;
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
            xxxRedrawWindow((struct tagWND *)v10);
            ThreadUnlock1(v12, v11);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
