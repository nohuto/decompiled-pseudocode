/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x1C000BAC8
 * Callers:
 *     NtUserGetOemBitmapSize @ 0x1C000B7D0 (NtUserGetOemBitmapSize.c)
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C000B9D0 (NtUserBitBltSysBmp.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243DB8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0246684 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C000BB28 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(int a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  struct OEMBITMAPSET *v4; // rbx

  v2 = a1;
  v3 = a2;
  if ( !a2 )
    v3 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 284);
  v4 = (struct OEMBITMAPSET *)((char *)&gOemBitmapSet + 760 * (unsigned int)GetDpiCacheSlot(v3));
  EnsureOemBitmapInfoForDpiSlot(v4, v3);
  return (char *)v4 + 8 * v2 + 16;
}
