/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C01557D8
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C01556E0 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

char __fastcall GetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, __m128i *a4)
{
  __m128i *MonitorWorkRect; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v15; // [rsp+20h] [rbp-58h] BYREF
  __m128i v16; // [rsp+30h] [rbp-48h] BYREF
  __m128i v17; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = GetMonitorWorkRect(&v15, a2);
  else
    MonitorWorkRect = GetMonitorRect(&v16, a2);
  v9 = *(_QWORD *)(a1 + 40);
  v17 = *MonitorWorkRect;
  LOBYTE(MonitorWorkRect) = *(_DWORD *)(v9 + 288) & 0xF;
  if ( (_BYTE)MonitorWorkRect != 2 )
  {
    MonitorWorkRect = (__m128i *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    v15.m128i_i64[0] = (__int64)MonitorWorkRect;
    if ( MonitorWorkRect )
    {
      if ( MonitorWorkRect != (__m128i *)a2 )
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
