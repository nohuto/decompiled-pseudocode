/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C0112960
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsCurrentDesktopComposed @ 0x1C00C2030 (IsCurrentDesktopComposed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      v7[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v7;
      v7[1] = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      xxxRedrawWindow((struct tagWND *)v3, 0LL, 0LL, 133);
      ThreadUnlock1(v5, v4, v6);
    }
  }
  else
  {
    UserSetLastError(5LL, gpidLogon);
  }
  return 0LL;
}
