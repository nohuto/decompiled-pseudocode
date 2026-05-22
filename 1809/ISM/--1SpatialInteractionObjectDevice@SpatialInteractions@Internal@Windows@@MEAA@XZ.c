/*
 * XREFs of ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800BBC80
 * Callers:
 *     ??_GSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAAPEAXI@Z @ 0x1800BBE10 (--_GSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAAPEAXI@Z.c)
 *     ??_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800BC580 (--_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A83BC (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?clear@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800BC364 (-clear@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *Ptr; // rcx
  const struct std::nothrow_t *v4; // rdx
  _BYTE *v5; // r8
  char *v6; // rcx
  PVOID v7; // rcx
  PVOID v8; // rcx
  PVOID v9; // rcx
  const char *v10; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  this->Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IInspectable'};
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  this[3].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = this + 24;
  AcquireSRWLockExclusive(this + 24);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0xF2,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)(this[18].Ptr != 0LL),
    (unsigned __int16 *)"Not all SpatialObjects have been deleted.",
    v10);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Ptr = this[19].Ptr;
  if ( Ptr )
  {
    v4 = (const struct std::nothrow_t *)(((char *)this[21].Ptr - (char *)Ptr) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      v5 = (_BYTE *)*(Ptr - 1);
      v6 = (char *)((char *)Ptr - v5);
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v4);
        JUMPOUT(0x1800BBE06LL);
      }
      Ptr = v5;
    }
    operator delete(Ptr, v4);
    this[19].Ptr = 0LL;
    this[20].Ptr = 0LL;
    this[21].Ptr = 0LL;
  }
  std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::clear(&this[17]);
  operator delete(this[17].Ptr, (const struct std::nothrow_t *)0x30);
  v7 = this[15].Ptr;
  if ( v7 )
  {
    this[15].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = this[14].Ptr;
  if ( v8 )
  {
    this[14].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
  std::wstring::~wstring((__int64)&this[10]);
  v9 = this[9].Ptr;
  if ( v9 )
  {
    this[9].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>((__int64)this);
}
