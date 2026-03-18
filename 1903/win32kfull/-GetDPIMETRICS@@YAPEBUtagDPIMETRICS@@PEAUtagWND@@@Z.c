/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48
 * Callers:
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C024A69C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

const struct tagDPIMETRICS *__fastcall GetDPIMETRICS(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x8000000) != 0 )
      GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, 0LL, a3, a4) & 0xF) != 0 )
  {
    PsGetCurrentProcessWin32Process(v6, v5);
  }
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi();
}
