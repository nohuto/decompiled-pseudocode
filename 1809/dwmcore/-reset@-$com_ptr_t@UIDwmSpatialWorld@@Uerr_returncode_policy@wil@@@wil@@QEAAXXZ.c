/*
 * XREFs of ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180157F88 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801589D8 (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTA.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158AE0 (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015E68C (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x18015ED20 (-ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F568 (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?OnSpatialLost@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@@Z @ 0x1801DB2D0 (-OnSpatialLost@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@@Z.c)
 *     ?OnSpatialPreRender@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@_K@Z @ 0x1801DB300 (-OnSpatialPreRender@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@_K@Z.c)
 *     ?OnSpatialReady@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@@Z @ 0x1801DB3F0 (-OnSpatialReady@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@@Z.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1801E10DC (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801E11F4 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     FlushAndWait @ 0x1801E185C (FlushAndWait.c)
 *     GetStagingTexture @ 0x1801E1A48 (GetStagingTexture.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1801FB898 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801FBB68 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18020073C (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180229BD0 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180229F80 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 *     ?ReadTexture@CColorKeyBitmap@@QEAAXXZ @ 0x18022A208 (-ReadTexture@CColorKeyBitmap@@QEAAXXZ.c)
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022DF34 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x18022F058 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022F7E4 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FBEC (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FE18 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x180230564 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
