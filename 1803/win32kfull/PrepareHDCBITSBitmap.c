/*
 * XREFs of PrepareHDCBITSBitmap @ 0x1C000D504
 * Callers:
 *     NtUserBitBltSysBmp @ 0x1C000D180 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02023B8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0202548 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0207838 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000C580 (GreGetDCDpiScaleValue.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1)
{
  unsigned int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem();
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v4 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot((unsigned int)(96 * DCDpiScaleValue));
    }
  }
  v5 = 760LL * DpiCacheSlot;
  v6 = *(__int64 *)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + v5);
  if ( v6
    || (CreateDPIBitmapStrip(DpiCacheSlot), (v6 = *(__int64 *)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + v5)) != 0) )
  {
    v4 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v4, v6);
  }
  return v4;
}
