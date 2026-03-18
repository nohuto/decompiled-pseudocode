/*
 * XREFs of PrepareHDCBITSBitmap @ 0x1C000BBD8
 * Callers:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C000B9D0 (NtUserBitBltSysBmp.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243DB8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000BD58 (GreGetDCDpiScaleValue.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C008C884 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1, __int64 a2)
{
  unsigned int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // esi
  __int64 v5; // rbx
  __int64 v6; // rdi
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem(a1, a2);
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v5 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot((unsigned int)(96 * DCDpiScaleValue));
    }
  }
  v6 = 760LL * DpiCacheSlot;
  if ( *(_QWORD *)((char *)&gOemBitmapSet + v6)
    || (CreateDPIBitmapStrip(DpiCacheSlot), *(_QWORD *)((char *)&gOemBitmapSet + v6)) )
  {
    v5 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v5);
  }
  return v5;
}
