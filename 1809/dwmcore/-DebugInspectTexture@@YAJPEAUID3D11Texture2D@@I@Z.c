/*
 * XREFs of ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8
 * Callers:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180090558 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800905E8 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x180090804 (-CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1801E10DC (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x1801FB744 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801FB7A4 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x1802024E0 (-ReadTexture@CD2DBitmap@@UEBAXXZ.c)
 *     ?ReadTexture@CHwTextureRenderTarget@@UEBAXXZ @ 0x1802033D0 (-ReadTexture@CHwTextureRenderTarget@@UEBAXXZ.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x180204B50 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180206750 (-ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180207410 (-ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180208460 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801E1680 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     GetStagingTexture @ 0x1801E1A48 (GetStagingTexture.c)
 */

__int64 __fastcall DebugInspectTexture(struct ID3D11Texture2D *a1, unsigned int a2)
{
  int StagingTexture; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp-19h] BYREF
  __int64 v10; // [rsp+48h] [rbp-11h] BYREF
  __int64 v11; // [rsp+50h] [rbp-9h] BYREF
  void *v12; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+7h]
  unsigned int v14[12]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v10 = 0LL;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v10);
  StagingTexture = GetStagingTexture(a1, &v10);
  v5 = StagingTexture;
  if ( StagingTexture >= 0 )
  {
    v6 = v10;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 80LL))(v10, v14);
    v11 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v11);
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 320LL))(v11, &v9);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v9 + 112LL))(
           v9,
           v6,
           a2,
           1LL,
           0,
           &v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      DebugInspectSysMemSurface(v12, v14[0], v14[1], (enum DXGI_FORMAT)v14[4], v13);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 120LL))(v9, v6, a2);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v9);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)StagingTexture);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v10);
  return v5;
}
