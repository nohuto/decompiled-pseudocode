/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DF1A8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x1800DF08C (--0CDwmRenderThreadWatchdog@@QEAA@XZ.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x18015C5FC (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18015E160 (-ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801B7064 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x1801B74FC (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 *     ?OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z @ 0x18022A5A8 (-OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x18024A75C (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x18024F7BC (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024F8AC (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z @ 0x1802654B0 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
