/*
 * XREFs of UserGetMonitorDC @ 0x1C003C430
 * Callers:
 *     hdcOpenDCW @ 0x1C003BC90 (hdcOpenDCW.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     _ReleaseDC @ 0x1C003C4F0 (_ReleaseDC.c)
 *     GetMonitorDC @ 0x1C003C510 (GetMonitorDC.c)
 *     LookupDC @ 0x1C003DA80 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C003DAC8 (MonitorFromHdev.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  int v3; // edx
  __int64 DCEx; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  MonitorDC = 0LL;
  v1 = MonitorFromHdev();
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
        MonitorDC = GetMonitorDC(v6, v1, 1LL);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v7, v8);
      }
    }
  }
  return MonitorDC;
}
