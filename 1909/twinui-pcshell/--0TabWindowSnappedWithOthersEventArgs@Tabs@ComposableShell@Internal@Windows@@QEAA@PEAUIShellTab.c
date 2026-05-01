/*
 * XREFs of ??0TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIShellTab@1234@PEAU?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@4@@Z @ 0x18028288C
 * Callers:
 *     ??$MakeOrThrow@VTabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@PEAU?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@5@@wil@@YA?AV?$ComPtr@VTabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAU?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@8@@Z @ 0x180281FC8 (--$MakeOrThrow@VTabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUI.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::TabWindowSnappedWithOthersEventArgs(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // rdi

  v6 = a1 + 2;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 2));
  a1[7] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = &Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::`vftable';
  a1[1] = &Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    a1 + 8,
    a2);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    a1 + 9,
    a3);
  return a1;
}
