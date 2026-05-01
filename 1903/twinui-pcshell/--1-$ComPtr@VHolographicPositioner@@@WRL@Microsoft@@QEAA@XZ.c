/*
 * XREFs of ??1?$ComPtr@VHolographicPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x1801FE61C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicPositioner_IHolographicPositioner__::_1_::dtor$2 @ 0x1801FCAAA (_Microsoft--WRL--Details--MakeAndInitialize_HolographicPositioner_IHolographicPosit_ea_1801FCAAA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180201DE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180201DE0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<HolographicPositioner>::~ComPtr<HolographicPositioner>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlAdapterOwner,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
