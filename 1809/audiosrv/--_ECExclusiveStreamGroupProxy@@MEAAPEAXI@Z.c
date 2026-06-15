/*
 * XREFs of ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800E25E0
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z @ 0x180068C10 (--_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180048090 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800E206C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::`vector deleting destructor'(
        CExclusiveStreamGroupProxy *this,
        char a2)
{
  CBaseStreamGroupProxy *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable'{for `IInspectable'};
  v4 = (CExclusiveStreamGroupProxy *)((char *)this + 8);
  *(_QWORD *)v4 = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 31) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 32) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  CBaseStreamGroupProxy::DisconnectFromSaDevice(v4);
  v5 = *((_QWORD *)this + 64);
  if ( v5 )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
