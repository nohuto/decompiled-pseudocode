/*
 * XREFs of ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x1800CD748
 * Callers:
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800CD21C (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERT.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801AB254 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CaptureBitsResponse::operator new()
{
  LPVOID result; // rax
  __int64 v1; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x90uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v1);
  return result;
}
