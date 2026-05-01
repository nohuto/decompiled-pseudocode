/*
 * XREFs of ??0PenWorkspaceDiscoverBrokerFactory@@QEAA@XZ @ 0x1801DAFA8
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801DA7A0 (--$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

PenWorkspaceDiscoverBrokerFactory *__fastcall PenWorkspaceDiscoverBrokerFactory::PenWorkspaceDiscoverBrokerFactory(
        PenWorkspaceDiscoverBrokerFactory *this)
{
  PenWorkspaceDiscoverBrokerFactory *result; // rax

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellComponent,IClassFactory>::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellComponent,IClassFactory>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassFactory>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &PenWorkspaceDiscoverBrokerFactory::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 1) = &PenWorkspaceDiscoverBrokerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassFactory>'};
  result = this;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  return result;
}
