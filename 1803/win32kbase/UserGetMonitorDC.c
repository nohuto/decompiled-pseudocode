/*
 * XREFs of UserGetMonitorDC @ 0x1C0045330
 * Callers:
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 *     _ReleaseDC @ 0x1C00453F0 (_ReleaseDC.c)
 *     LookupDC @ 0x1C0045410 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C0045458 (MonitorFromHdev.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  struct tagMONITOR *v1; // rdi
  __int64 v2; // rax
  int v3; // edx
  __int64 DCEx; // rsi
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d

  MonitorDC = 0LL;
  v1 = (struct tagMONITOR *)MonitorFromHdev();
  if ( v1 )
  {
    v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v2 + 8) + 24LL), 0LL, 0x800003u);
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
