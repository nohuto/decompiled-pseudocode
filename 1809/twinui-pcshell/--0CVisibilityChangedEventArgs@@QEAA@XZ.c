/*
 * XREFs of ??0CVisibilityChangedEventArgs@@QEAA@XZ @ 0x18000E654
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18000E55C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x18014E1C0 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x18015C080 (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

CVisibilityChangedEventArgs *__fastcall CVisibilityChangedEventArgs::CVisibilityChangedEventArgs(
        CVisibilityChangedEventArgs *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((CVisibilityChangedEventArgs *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVisibilityChangedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &CVisibilityChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &CVisibilityChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
