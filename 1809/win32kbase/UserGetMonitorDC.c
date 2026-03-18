/*
 * XREFs of UserGetMonitorDC @ 0x1C00451E8
 * Callers:
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     _ReleaseDC @ 0x1C0029EE0 (_ReleaseDC.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     LookupDC @ 0x1C00452A0 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C00452E8 (MonitorFromHdev.c)
 */

__int64 __fastcall UserGetMonitorDC(__int64 a1)
{
  __int64 MonitorDC; // rbx
  struct tagMONITOR *v2; // rdi
  __int64 v3; // rax
  int v4; // edx
  __int64 DCEx; // rsi
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8

  MonitorDC = 0LL;
  v2 = (struct tagMONITOR *)MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
    if ( v3 )
    {
      DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v3 + 8) + 24LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v4, v6);
        v7 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v7, v2, 1);
        ReleaseDC(DCEx, v8, v9);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v10, v11);
      }
    }
  }
  return MonitorDC;
}
