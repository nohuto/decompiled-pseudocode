/*
 * XREFs of ??0TabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18024B1E8
 * Callers:
 *     ??$MakeAndInitialize@VTabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabDroppedEventArgs@2345@AEAUShellTabGroupId@2345@AEAUShellTabId@2345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAUITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@AEAUShellTabGroupId@4567@AEAUShellTabId@4567@AEAH@Z @ 0x18024AD4C (--$MakeAndInitialize@VTabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabDroppedEve.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *__fastcall Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::TabDroppedEventArgs(
        Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  memset_0((char *)this + 64, 0, 0x20uLL);
  *((_DWORD *)this + 24) = 0;
  return this;
}
