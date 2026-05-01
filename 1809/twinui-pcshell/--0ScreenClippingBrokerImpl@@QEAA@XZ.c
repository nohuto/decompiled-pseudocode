/*
 * XREFs of ??0ScreenClippingBrokerImpl@@QEAA@XZ @ 0x18037B234
 * Callers:
 *     ?CreateScreenClippingBroker@@YAJAEAV?$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z @ 0x18037B838 (-CreateScreenClippingBroker@@YAJAEAV-$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

ScreenClippingBrokerImpl *__fastcall ScreenClippingBrokerImpl::ScreenClippingBrokerImpl(ScreenClippingBrokerImpl *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((ScreenClippingBrokerImpl *)((char *)this + 8));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::`vftable';
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::`vftable'{for `IScreenClippingBroker'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ScreenClippingBrokerImpl::`vftable';
  *v1 = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>>'};
  *((_QWORD *)this + 5) = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>>'};
  *((_QWORD *)this + 6) = &ScreenClippingBrokerImpl::`vftable'{for `IScreenClippingBroker'};
  *((_QWORD *)this + 7) = &ScreenClippingBrokerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
