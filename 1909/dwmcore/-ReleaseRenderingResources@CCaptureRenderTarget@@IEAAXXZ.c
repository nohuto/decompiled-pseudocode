/*
 * XREFs of ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E1EC
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ @ 0x1801A00A0 (-ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ.c)
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x1801A5780 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 *     ?ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR@@@Z @ 0x1801A58D4 (-ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILC.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18024D798 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x18024DF64 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x18024DFC4 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTAR.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E19C (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E5F8 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18015D2A0 (-_Destroy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     ?_Destroy@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@0@Z @ 0x1801A1950 (-_Destroy@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@UDXGIR.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18024E830 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseRenderingResources(CCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  (*(void (__fastcall **)(CCaptureRenderTarget *))(*(_QWORD *)this + 368LL))(this);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 560);
  if ( *((_QWORD *)this + 60) )
  {
    v3 = 0;
    if ( (__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3 )
    {
      v4 = 0LL;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 60) + 56LL))(
          *((_QWORD *)this + 60),
          *(_QWORD *)(*((_QWORD *)this + 67) + 8 * v4));
        v4 = ++v3;
      }
      while ( v3 < (unsigned __int64)((__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3) );
    }
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Destroy(
    v2,
    *((__int64 **)this + 64),
    *((__int64 **)this + 65));
  *((_QWORD *)this + 65) = *((_QWORD *)this + 64);
  std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Destroy(
    v5,
    *((_QWORD *)this + 53),
    *((_QWORD *)this + 54));
  *((_QWORD *)this + 54) = *((_QWORD *)this + 53);
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 32LL))(v6, (char *)this + 80);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 17);
  }
  *((_DWORD *)this + 112) = -1;
  v7 = *((_QWORD *)this + 57);
  *((_QWORD *)this + 57) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 58) = 0LL;
  CCaptureRenderTarget::CDeviceManager::NotifyDeviceInvalid((CCaptureRenderTarget *)((char *)this + 392));
}
