/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8
 * Callers:
 *     GreWindowBeginLayoutUpdate @ 0x1C000799C (GreWindowBeginLayoutUpdate.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00746A8 (GreUpdateSpriteClipRgn.c)
 *     GreIsWindowResizeInProgress @ 0x1C0074940 (GreIsWindowResizeInProgress.c)
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     GreForceClipRgnChange @ 0x1C00A2FFC (GreForceClipRgnChange.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C0115F10 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C011D2A0 (GreWindowLayoutComplete.c)
 *     GreGetSprite @ 0x1C012B03C (GreGetSprite.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C02533E8 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C0253500 (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C0253B48 (GreGetWindowResizeTelemetry.c)
 *     GreProtectSpriteContent @ 0x1C0253F98 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C025450C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C025470C (GreWindowResizeStarted.c)
 * Callees:
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C0075E48 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v4; // rax
  __int64 v5; // rdx

  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  v4 = DWMSPRITEREF::hspLookupWindow(a2);
  if ( v4 )
  {
    LOBYTE(v5) = 15;
    *((_QWORD *)this + 4) = HmgLock(v4, v5);
  }
  return this;
}
