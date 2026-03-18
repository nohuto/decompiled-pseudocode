/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0030998
 * Callers:
 *     GreGetSprite @ 0x1C0009468 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C000A590 (GreWindowBeginLayoutUpdate.c)
 *     GreUpdateSpriteClipRgn @ 0x1C002F814 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C002FB44 (GreHintSpriteShape.c)
 *     GreForceClipRgnChange @ 0x1C0089134 (GreForceClipRgnChange.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1C00F7694 (GreIsWindowResizeInProgress.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00FAC24 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C0101904 (GreWindowLayoutComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026C3D0 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C026C4D0 (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C026CAA8 (GreGetWindowResizeTelemetry.c)
 *     GreProtectSpriteContent @ 0x1C026CEA8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026D404 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026D63C (GreWindowResizeStarted.c)
 * Callees:
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00309D8 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
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
