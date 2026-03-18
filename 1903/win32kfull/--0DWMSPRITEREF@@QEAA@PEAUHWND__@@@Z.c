/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002A528
 * Callers:
 *     GreGetSprite @ 0x1C0009468 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C000A5A0 (GreWindowBeginLayoutUpdate.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00293A4 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C00296D4 (GreHintSpriteShape.c)
 *     GreForceClipRgnChange @ 0x1C0044764 (GreForceClipRgnChange.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1C0090F04 (GreIsWindowResizeInProgress.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C011FFF4 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C0125184 (GreWindowLayoutComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026CB00 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C026CC00 (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C026D1D8 (GreGetWindowResizeTelemetry.c)
 *     GreProtectSpriteContent @ 0x1C026D5D8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026DB34 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026DD6C (GreWindowResizeStarted.c)
 * Callees:
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C002A568 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  v3 = DWMSPRITEREF::hspLookupWindow(a2);
  if ( v3 )
  {
    LOBYTE(v4) = 15;
    *(_QWORD *)this = HmgLock(v3, v4);
  }
  return this;
}
