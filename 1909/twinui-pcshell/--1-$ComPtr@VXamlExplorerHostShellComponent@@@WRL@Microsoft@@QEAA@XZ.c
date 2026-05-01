/*
 * XREFs of ??1?$ComPtr@VXamlExplorerHostShellComponent@@@WRL@Microsoft@@QEAA@XZ @ 0x180225D88
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicForegroundAssistant_IUnknown__::_1_::dtor$1 @ 0x180225BF6 (_Microsoft--WRL--Details--MakeAndInitialize_HolographicForegroundAssistant_IUnknown_ea_180225BF6.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown__::_1_::dtor$1 @ 0x1802CF5F6 (_Microsoft--WRL--Details--MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown_ea_1802CF5F6.c)
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$5 @ 0x1802D1529 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$5.c)
 *     _XamlExplorerHostShellComponent::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1802D1915 (_XamlExplorerHostShellComponent--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2ED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800B2ED0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlExplorerHostShellComponent>::~ComPtr<XamlExplorerHostShellComponent>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
