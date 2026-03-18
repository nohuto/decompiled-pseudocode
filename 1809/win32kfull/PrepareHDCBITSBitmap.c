/*
 * XREFs of PrepareHDCBITSBitmap @ 0x1C0106948
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C00AAA94 (xxxDrawMenuItem.c)
 *     NtUserBitBltSysBmp @ 0x1C01065C0 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AD88 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0230A0C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0020A38 (GetDpiCacheSlot.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C007B8B0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1C0106A90 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1)
{
  int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // esi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem();
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v4 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v5) & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot(96 * DCDpiScaleValue);
    }
  }
  v7 = 760LL * DpiCacheSlot;
  v8 = *(__int64 *)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + v7);
  if ( v8
    || (CreateDPIBitmapStrip(DpiCacheSlot), (v8 = *(__int64 *)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + v7)) != 0) )
  {
    v4 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v4, v8);
  }
  return v4;
}
