/*
 * XREFs of ??0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z @ 0x1800AFE20
 * Callers:
 *     ??$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA?AV?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@AEAPEBGAEA_N@Z @ 0x1800AF278 (--$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA-AV-$ComPtr@VStateChangedEventArg.c)
 * Callees:
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180079934 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18012C1FC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWindowSnappingEvents@@VFtmBas.c)
 */

StateChangedEventArgsImpl *__fastcall StateChangedEventArgsImpl::StateChangedEventArgsImpl(
        StateChangedEventArgsImpl *this,
        const unsigned __int16 *a2,
        char a3)
{
  _QWORD *v5; // rdi
  const WCHAR *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v5 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowSnappingEvents,Microsoft::WRL::FtmBase>((char *)this + 8);
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *v5 = &Microsoft::WRL::RuntimeClass<Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &StateChangedEventArgsImpl::`vftable';
  *v5 = &StateChangedEventArgsImpl::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &StateChangedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((HSTRING *)this + 8, &v7);
  *((_BYTE *)this + 72) = a3;
  return this;
}
