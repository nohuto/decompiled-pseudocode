/*
 * XREFs of ??0CClassicWindowExternal@@QEAA@PEAUIClassicWindow@@@Z @ 0x18007DD74
 * Callers:
 *     ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x18007DD14 (--$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCCla.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

CClassicWindowExternal *__fastcall CClassicWindowExternal::CClassicWindowExternal(
        CClassicWindowExternal *this,
        struct IClassicWindow *a2)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((CClassicWindowExternal *)((char *)this + 16));
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::`vftable'{for `IClassicWindowContainer'};
  *v2 = &CClassicWindowExternal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CClassicWindowExternal::`vftable';
  *((_QWORD *)this + 1) = &CClassicWindowExternal::`vftable'{for `IClassicWindowContainer'};
  *v2 = &CClassicWindowExternal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 7);
  return this;
}
