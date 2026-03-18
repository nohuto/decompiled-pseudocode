/*
 * XREFs of ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18015AC08 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x18015AF1C (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180173C88 (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A2F84 (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x1801A3670 (-ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A3F1C (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x1801A524C (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B45D0 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801B57C4 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B600C (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B6510 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B6754 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801BC120 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     ?OnSceneLost@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801C61C0 (-OnSceneLost@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?OnSceneReady@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801C61E0 (-OnSceneReady@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801F5140 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 *     ?OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F54B0 (-OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x1801F5F8C (-SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z.c)
 *     ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801F6D30 (-OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 *     ?OnSceneLost@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F6E70 (-OnSceneLost@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801F804C (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801F8148 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801F8840 (-OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 *     ?OnSceneLost@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F8910 (-OnSceneLost@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?ProcessSetBitmapInterpolationMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETBITMAPINTERPOLATIONMODE@@@Z @ 0x1801F892C (-ProcessSetBitmapInterpolationMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagM.c)
 *     ?ProcessSetWrappingUMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE@@@Z @ 0x1801F8A7C (-ProcessSetWrappingUMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCEN.c)
 *     ?ProcessSetWrappingVMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGVMODE@@@Z @ 0x1801F8AA4 (-ProcessSetWrappingVMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCEN.c)
 *     ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1802044D0 (-OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180204500 (-OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18021A1B0 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18021A2C8 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021A79C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18021A910 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     FlushAndWait @ 0x18021AB14 (FlushAndWait.c)
 *     GetStagingTexture @ 0x18021AD08 (GetStagingTexture.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802228E0 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023E394 (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024DA3C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x18024E0AC (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E19C (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024EB68 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802561D0 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802565B0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 *     ?ReadTexture@CColorKeyBitmap@@QEAAXXZ @ 0x180256860 (-ReadTexture@CColorKeyBitmap@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
