/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C0135E10
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C000D5F0 (IsCurrentDesktopComposed.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v8;
      v8[1] = v5;
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      xxxRedrawWindow((struct tagWND *)v5, 0LL, 0LL, 133);
      ThreadUnlock1(v7, v6);
    }
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v2, v3);
  }
  return 0LL;
}
