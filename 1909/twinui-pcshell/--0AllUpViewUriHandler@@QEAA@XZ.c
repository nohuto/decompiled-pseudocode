/*
 * XREFs of ??0AllUpViewUriHandler@@QEAA@XZ @ 0x180361BCC
 * Callers:
 *     ??$MakeAndInitialize@VAllUpViewUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180361B54 (--$MakeAndInitialize@VAllUpViewUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006C414 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$CloakedIid@UIConfigureWindow.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CWRLObjectWithSite@@QEAA@XZ @ 0x180141D78 (--0CWRLObjectWithSite@@QEAA@XZ.c)
 */

AllUpViewUriHandler *__fastcall AllUpViewUriHandler::AllUpViewUriHandler(AllUpViewUriHandler *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  AllUpViewUriHandler *result; // rax

  CWRLObjectWithSite::CWRLObjectWithSite(this);
  v3 = (_QWORD *)(v2 + 24);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>(v2 + 24);
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>::`vftable';
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IExecuteCommand,IObjectWithSelection>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSelection>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &AllUpViewUriHandler::`vftable';
  *v3 = &AllUpViewUriHandler::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 4) = &AllUpViewUriHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSelection>'};
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  return result;
}
