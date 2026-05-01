/*
 * XREFs of ??1?$ComPtr@VHolographicViewHostItemLedger@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B91A4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicForegroundAssistant_IUnknown__::_1_::dtor$1 @ 0x1801B9006 (_Microsoft--WRL--Details--MakeAndInitialize_HolographicForegroundAssistant_IUnknown_ea_1801B9006.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicViewHostItemLedger_IUnknown__::_1_::dtor$1 @ 0x1801B9D7A (_Microsoft--WRL--Details--MakeAndInitialize_HolographicViewHostItemLedger_IUnknown__ea_1801B9D7A.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown__::_1_::dtor$1 @ 0x180259462 (_Microsoft--WRL--Details--MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown_ea_180259462.c)
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$5 @ 0x18025AE39 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B9820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801B9820.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<HolographicViewHostItemLedger>::~ComPtr<HolographicViewHostItemLedger>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
