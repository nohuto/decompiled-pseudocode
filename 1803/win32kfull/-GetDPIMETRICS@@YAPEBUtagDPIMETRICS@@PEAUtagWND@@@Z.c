/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000CED4
 * Callers:
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C00EBA98 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     MNDrawArrow @ 0x1C0208444 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C020881C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 */

const struct tagDPIMETRICS *__fastcall GetDPIMETRICS(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v6; // rcx

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v2 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
    if ( (*(_DWORD *)(v2 + 288) & 0xF) != 0
      || (v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v3 + 8) + 52LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v6) + 284);
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  }
  WindowDpiLastNotify = 96;
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
}
