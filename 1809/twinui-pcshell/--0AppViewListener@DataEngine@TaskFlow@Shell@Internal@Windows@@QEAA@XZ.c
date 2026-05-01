/*
 * XREFs of ??0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1801AD184
 * Callers:
 *     ??$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1801AD01C (--$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEA.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006294C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??0AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18008E5C4 (--0AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)((char *)this + 32));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener'};
  *((_QWORD *)this + 4) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoCache((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)((char *)this + 112));
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
