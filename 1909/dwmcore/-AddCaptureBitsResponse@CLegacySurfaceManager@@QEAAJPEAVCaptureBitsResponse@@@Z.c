/*
 * XREFs of ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800CD1F8
 * Callers:
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800CD10C (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERT.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801A9994 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
