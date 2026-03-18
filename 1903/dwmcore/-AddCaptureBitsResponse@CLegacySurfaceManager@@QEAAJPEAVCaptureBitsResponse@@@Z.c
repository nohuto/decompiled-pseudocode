/*
 * XREFs of ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800CD308
 * Callers:
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800CD21C (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERT.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801AB254 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddCaptureBitsResponse(
        CLegacySurfaceManager *this,
        struct CaptureBitsResponse *a2)
{
  _QWORD *v3; // rcx

  *((_QWORD *)this + 26) = a2;
  (**(void (__fastcall ***)(struct CaptureBitsResponse *))a2)(a2);
  v3 = (_QWORD *)*((_QWORD *)this + 26);
  if ( v3[7] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    *((_BYTE *)this + 220) = 1;
  }
  return 0LL;
}
