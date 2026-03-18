/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C0133E00
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C0133D20 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

char __fastcall GetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, _OWORD *a4)
{
  __int128 *MonitorWorkRect; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = GetMonitorWorkRect(&v15, a2);
  else
    MonitorWorkRect = GetMonitorRect(&v16, a2);
  v9 = *(_QWORD *)(a1 + 40);
  v17 = *MonitorWorkRect;
  LOBYTE(MonitorWorkRect) = *(_DWORD *)(v9 + 288) & 0xF;
  if ( (_BYTE)MonitorWorkRect != 2 )
  {
    MonitorWorkRect = (__int128 *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    *(_QWORD *)&v15 = MonitorWorkRect;
    if ( MonitorWorkRect )
    {
      if ( MonitorWorkRect != (__int128 *)a2 )
      {
        v12 = *(_QWORD *)(a2 + 40) + (a3 != 0 ? 44LL : 28LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10);
        LOBYTE(MonitorWorkRect) = PhysicalToLogicalDPIRect(&v17, v12, CurrentThreadDpiAwarenessContext, &v15);
      }
    }
  }
  *a4 = v17;
  return (char)MonitorWorkRect;
}
