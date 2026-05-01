/*
 * XREFs of ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x18021D57C
 * Callers:
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x18021BBEC (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Int.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0ViewHostItemEventArgsBase@@QEAA@XZ @ 0x18021D608 (--0ViewHostItemEventArgsBase@@QEAA@XZ.c)
 */

ViewHostItemEventArgs *__fastcall ViewHostItemEventArgs::ViewHostItemEventArgs(ViewHostItemEventArgs *this)
{
  ViewHostItemEventArgsBase::ViewHostItemEventArgsBase(this);
  *((_QWORD *)this + 10) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
  *((_QWORD *)this + 1) = &ViewHostItemEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
  *((_QWORD *)this + 1) = &ViewHostItemEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable';
  return this;
}
