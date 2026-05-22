/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVLegacyPrivHandEventArgs@23456@@Foundation@Windows@@V_lambda_0cbb146c2d3d41874b738ae12f2d5a0c_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUILegacyPrivHandEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVLegacyPrivHandEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUILegacyPrivHandEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUILegacyPrivHandEventArgs@56783@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800598D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::LegacyPrivHandEventArgs *,Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::LegacyPrivHandEventArgs *>,_lambda_0cbb146c2d3d41874b738ae12f2d5a0c_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
