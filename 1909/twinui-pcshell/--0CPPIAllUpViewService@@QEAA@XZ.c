/*
 * XREFs of ??0CPPIAllUpViewService@@QEAA@XZ @ 0x180362FCC
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x180362E98 (--$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@W.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006C414 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$CloakedIid@UIConfigureWindow.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CWRLObjectWithSite@@QEAA@XZ @ 0x180141D78 (--0CWRLObjectWithSite@@QEAA@XZ.c)
 */

CPPIAllUpViewService *__fastcall CPPIAllUpViewService::CPPIAllUpViewService(CPPIAllUpViewService *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  CPPIAllUpViewService *result; // rax

  CWRLObjectWithSite::CWRLObjectWithSite(this);
  v3 = (_QWORD *)(v2 + 24);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>(v2 + 24);
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable';
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable'{for `IPPIAllUpViewService'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPPIAllUpViewInvoker>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPPIAllUpViewService::`vftable';
  *v3 = &CPPIAllUpViewService::`vftable'{for `IPPIAllUpViewService'};
  *((_QWORD *)this + 4) = &CPPIAllUpViewService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPPIAllUpViewInvoker>'};
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}
