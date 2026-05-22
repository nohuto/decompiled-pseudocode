/*
 * XREFs of ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800EAC1C
 * Callers:
 *     ??_ESpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EB6F0 (--_ESpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EB750 (--_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAAPEAXI@Z @ 0x1800EB7E0 (--_GSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F494 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800DC3E0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?clear@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800F0228 (-clear@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this)
{
  RTL_SRWLOCK *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  const char *v6; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (RTL_SRWLOCK *)((char *)this + 192);
  AcquireSRWLockExclusive((PSRWLOCK)this + 24);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x101,
    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)(*((_QWORD *)this + 18) != 0LL),
    (void *)"Not all SpatialObjects have been deleted.",
    v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 21) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::clear((char *)this + 136);
  std::_Deallocate<16,0>(*((void **)this + 17), (const struct std::nothrow_t *)0x30);
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 14);
  std::wstring::_Tidy_deallocate((__int64)this + 80);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>((__int64)this);
}
