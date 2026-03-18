/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C01060C4 (_ServerFixupMenuDC.c)
 *     MNDrawArrow @ 0x1C0231664 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0231A54 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
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
      || (v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v3 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, 0LL) & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v6) + 284);
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  }
  WindowDpiLastNotify = 96;
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
}
