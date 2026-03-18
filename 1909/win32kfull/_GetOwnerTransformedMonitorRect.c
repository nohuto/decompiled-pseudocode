/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C015D2B8
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C015D1C0 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C001461C (GetMonitorWorkRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

char __fastcall GetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, _OWORD *a4)
{
  __int128 *MonitorWorkRect; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = GetMonitorWorkRect(&v16, a2);
  else
    MonitorWorkRect = GetMonitorRect(&v17, a2);
  v9 = *(_QWORD *)(a1 + 40);
  v18 = *MonitorWorkRect;
  LOBYTE(MonitorWorkRect) = *(_DWORD *)(v9 + 288) & 0xF;
  if ( (_BYTE)MonitorWorkRect != 2 )
  {
    MonitorWorkRect = (__int128 *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    *(_QWORD *)&v16 = MonitorWorkRect;
    if ( MonitorWorkRect )
    {
      if ( MonitorWorkRect != (__int128 *)a2 )
      {
        v13 = *(_QWORD *)(a2 + 40) + (a3 != 0 ? 44LL : 28LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12);
        LOBYTE(MonitorWorkRect) = PhysicalToLogicalDPIRect(&v18, v13, CurrentThreadDpiAwarenessContext, &v16);
      }
    }
  }
  *a4 = v18;
  return (char)MonitorWorkRect;
}
