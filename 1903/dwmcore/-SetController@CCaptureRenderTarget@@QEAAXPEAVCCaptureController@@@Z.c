/*
 * XREFs of ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30
 * Callers:
 *     ?DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A6DB0 (-DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x1801CEDF4 (--1CCaptureController@@EEAA@XZ.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18024EEA8 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18024F3E0 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER@@@Z @ 0x18024F780 (-ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDER.c)
 * Callees:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801CEEC4 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801CF2CC (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::SetController(CCaptureRenderTarget *this, struct CCaptureController *a2)
{
  CCaptureController *v4; // rcx

  v4 = (CCaptureController *)*((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = a2;
  if ( v4 )
    CCaptureController::RemoveRenderTarget(v4, this);
  if ( a2 )
    CCaptureController::AddRenderTarget(a2, this);
}
