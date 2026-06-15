/*
 * XREFs of ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180047ED0
 * Callers:
 *     ??_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z @ 0x180068C20 (--_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x1800470E0 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180048010 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180048090 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063980 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

CSharedStreamGroupProxy *__fastcall CSharedStreamGroupProxy::`scalar deleting destructor'(
        CSharedStreamGroupProxy *this,
        char a2)
{
  CSharedStreamGroupProxy *v4; // rdi
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // r10

  *(_QWORD *)this = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
  v4 = (CSharedStreamGroupProxy *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 31) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 32) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  if ( *((_QWORD *)this + 12) )
    CBaseStreamGroupProxy::DisconnectFromSaDevice((CSharedStreamGroupProxy *)((char *)this + 8));
  CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(v4);
  v5 = *((_QWORD *)this + 55);
  if ( v5 )
  {
    *((_QWORD *)this + 55) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 54);
  if ( v6 )
    CoTaskMemFree(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  if ( *((__int64 *)this + 34) < 0
    && !ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *((_QWORD *)this + 34) + 12)) )
  {
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1C0);
  return this;
}
