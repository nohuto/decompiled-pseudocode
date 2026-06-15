/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_fd84fb861bda8361cc33008a6db9ede3_@@$0?0PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplayWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVHolographicDisplay@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@234@@234@@Foundation@Windows@@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@3@PEAUIHolographicDisplay@673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801190A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::HolographicDisplay *,Windows::Graphics::Holographic::IHolographicDisplay *>>::*)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase>,_lambda_fd84fb861bda8361cc33008a6db9ede3_,-1,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
