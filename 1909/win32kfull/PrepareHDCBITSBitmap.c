/*
 * XREFs of PrepareHDCBITSBitmap @ 0x1C00EAD38
 * Callers:
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00EAB30 (NtUserBitBltSysBmp.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243678 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0248EFC (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiCacheSlot @ 0x1C004A144 (GetDpiCacheSlot.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GreGetDCDpiScaleValue @ 0x1C00EAEB8 (GreGetDCDpiScaleValue.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C012AFC4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1, __int64 a2, __int64 a3)
{
  int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // esi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem((__int64)a1, a2, a3);
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v6 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9) & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot(96 * DCDpiScaleValue);
    }
  }
  v10 = 760LL * DpiCacheSlot;
  v11 = *(_QWORD *)((char *)&gOemBitmapSet + v10);
  if ( v11 || (CreateDPIBitmapStrip(DpiCacheSlot), (v11 = *(_QWORD *)((char *)&gOemBitmapSet + v10)) != 0) )
  {
    v6 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v6, v11);
  }
  return v6;
}
