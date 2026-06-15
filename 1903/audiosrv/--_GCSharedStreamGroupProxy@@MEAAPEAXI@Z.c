/*
 * XREFs of ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x18004B448
 * Callers:
 *     ??_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z @ 0x18006BC90 (--_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18004B8F0 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18004BAE0 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18004BB70 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

CSharedStreamGroupProxy *__fastcall CSharedStreamGroupProxy::`scalar deleting destructor'(
        CSharedStreamGroupProxy *this,
        char a2)
{
  CSharedStreamGroupProxy *v4; // rdi
  __int64 v5; // rcx
  void *v6; // rcx
  volatile signed __int32 *v7; // rcx

  *(_QWORD *)this = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
  v4 = (CSharedStreamGroupProxy *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 31) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 32) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  if ( *((_QWORD *)this + 12) )
    CBaseStreamGroupProxy::DisconnectFromSaDevice((CSharedStreamGroupProxy *)((char *)this + 8));
  CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(v4);
  v5 = *((_QWORD *)this + 199);
  if ( v5 )
  {
    *((_QWORD *)this + 199) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 198);
  if ( v6 )
    CoTaskMemFree(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  if ( *((__int64 *)this + 34) < 0 )
  {
    v7 = (volatile signed __int32 *)(2LL * *((_QWORD *)this + 34));
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x640);
  return this;
}
