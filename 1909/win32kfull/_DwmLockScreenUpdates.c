/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C011A2F0
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018C40 (IsCurrentDesktopComposed.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct tagWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v5 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      v9 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v9;
      v10 = v5;
      if ( v5 )
        HMLockObject(v5);
      xxxRedrawWindow(v5, 0LL, 0LL, 133);
      ThreadUnlock1(v7, v6, v8);
    }
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v2, v3);
  }
  return 0LL;
}
