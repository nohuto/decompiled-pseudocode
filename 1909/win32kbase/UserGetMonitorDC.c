/*
 * XREFs of UserGetMonitorDC @ 0x1C003A380
 * Callers:
 *     hdcOpenDCW @ 0x1C0039EC0 (hdcOpenDCW.c)
 * Callees:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 *     _ReleaseDC @ 0x1C003A440 (_ReleaseDC.c)
 *     LookupDC @ 0x1C003A460 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C003A4A8 (MonitorFromHdev.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  struct tagMONITOR *v1; // rdi
  __int64 v2; // rax
  int v3; // edx
  __int64 DCEx; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  MonitorDC = 0LL;
  v1 = (struct tagMONITOR *)MonitorFromHdev();
  if ( v1 )
  {
    v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v2 + 8) + 24LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v5);
        v6 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v6, v1, 1);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v7, v8);
      }
    }
  }
  return MonitorDC;
}
