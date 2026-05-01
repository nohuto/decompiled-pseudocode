/*
 * XREFs of ??0ViewSizePreferencesChangedEventArgs@@QEAA@XZ @ 0x1801BC964
 * Callers:
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewSizePreferencesChangedEventArgs@@AEAUSize@Foundation@Windows@@@Z @ 0x1801BBBB8 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Deta.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

ViewSizePreferencesChangedEventArgs *__fastcall ViewSizePreferencesChangedEventArgs::ViewSizePreferencesChangedEventArgs(
        ViewSizePreferencesChangedEventArgs *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((ViewSizePreferencesChangedEventArgs *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &ViewSizePreferencesChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &ViewSizePreferencesChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewSizePreferencesChangedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &ViewSizePreferencesChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &ViewSizePreferencesChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_BYTE *)this + 72) = 0;
  return this;
}
