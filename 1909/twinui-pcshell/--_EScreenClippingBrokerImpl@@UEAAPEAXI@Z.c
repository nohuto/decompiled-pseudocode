/*
 * XREFs of ??_EScreenClippingBrokerImpl@@UEAAPEAXI@Z @ 0x180400960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClippingBroker@@U?$CloakedIid@UIScreenClippingBrokerPrivate@@@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180400818 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClip.c)
 */

ScreenClippingBrokerImpl *__fastcall ScreenClippingBrokerImpl::`vector deleting destructor'(
        ScreenClippingBrokerImpl *this,
        char a2)
{
  volatile int *v4; // rdx

  *(_QWORD *)this = &ScreenClippingBrokerImpl::`vftable';
  *((_QWORD *)this + 1) = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>>'};
  *((_QWORD *)this + 5) = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>>'};
  *((_QWORD *)this + 6) = &ScreenClippingBrokerImpl::`vftable'{for `IScreenClippingBroker'};
  *((_QWORD *)this + 7) = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>'};
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>(
    (__int64)this,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
