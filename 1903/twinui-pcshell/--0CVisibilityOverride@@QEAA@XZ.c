/*
 * XREFs of ??0CVisibilityOverride@@QEAA@XZ @ 0x180122874
 * Callers:
 *     ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1801227D8 (--$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVis.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

CVisibilityOverride *__fastcall CVisibilityOverride::CVisibilityOverride(CVisibilityOverride *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  int UniqueContext; // eax
  CVisibilityOverride *result; // rax

  *(_QWORD *)this = &CWRLObjectWithSite::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `IVisibilityOverride'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  *((_DWORD *)this + 11) = 1;
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVisibilityOverride::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `IVisibilityOverride'};
  *((_QWORD *)this + 4) = &CVisibilityOverride::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  UniqueContext = SHTaskPoolGetUniqueContext(v2);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 12) = UniqueContext;
  *((_BYTE *)this + 52) = 0;
  InitializeSRWLock((PSRWLOCK)this + 9);
  *((_QWORD *)this + 10) = 0LL;
  result = this;
  *((_WORD *)this + 44) = 0;
  return result;
}
