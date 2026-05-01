/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopComponent@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D4444
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopDataSourceComponent_IUnknown__::_1_::dtor$1 @ 0x1802D4309 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopDataSourceComponent_IUnkn_ea_1802D4309.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopComponent_IUnknown__::_1_::dtor$1 @ 0x18037D349 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopComponent_IUnknown__--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D4650 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1802D4650.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopComponent>::~ComPtr<CVirtualDesktopComponent>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
