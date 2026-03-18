/*
 * XREFs of ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800CD248
 * Callers:
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800CD10C (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPRENDERT.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801A9994 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1801A9F48 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTa.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1801AA9EC (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::CaptureBitsResponse(
        CaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        struct IRenderTargetResource *a4,
        struct CVisualTree *a5,
        float a6,
        const struct WICRect *a7,
        enum DXGI_FORMAT a8,
        unsigned __int64 a9)
{
  int v9; // edi
  __int128 v12; // xmm0

  v9 = 0;
  *((_DWORD *)this + 4) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResponseItem::`vftable';
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 3) = a2;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  *((_QWORD *)this + 5) = a4;
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  *((_QWORD *)this + 7) = a9;
  if ( a4 )
    (*(void (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)a4 + 8LL))(a4);
  *((_QWORD *)this + 6) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  *((_QWORD *)this + 8) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  *((float *)this + 24) = a6;
  *((_DWORD *)this + 26) = 3;
  v12 = (__int128)*a7;
  *((_DWORD *)this + 25) = a8;
  LOBYTE(v9) = a8 == DXGI_FORMAT_R16G16B16A16_FLOAT;
  *((_DWORD *)this + 27) = v9;
  *((_OWORD *)this + 5) = v12;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_Start);
  return this;
}
