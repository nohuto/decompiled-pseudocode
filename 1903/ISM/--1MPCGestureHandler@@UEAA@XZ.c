/*
 * XREFs of ??1MPCGestureHandler@@UEAA@XZ @ 0x18008D11C
 * Callers:
 *     ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x18008D300 (--_EMPCGestureHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18008D280 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800E7464 (--1ManipulationInjector@@QEAA@XZ.c)
 */

void __fastcall MPCGestureHandler::~MPCGestureHandler(MPCGestureHandler *this)
{
  int v2; // eax
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &MPCGestureHandler::`vftable';
  if ( *((_QWORD *)this + 111) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 112) + 56LL))(*((_QWORD *)this + 112));
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        57LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        (const char *)(unsigned int)v2);
  }
  v3 = (__int64 *)*((_QWORD *)this + 115);
  if ( v3 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 116);
    if ( v3 != v4 )
    {
      do
        wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v3++);
      while ( v3 != v4 );
      v3 = (__int64 *)*((_QWORD *)this + 115);
    }
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 117) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 115) = 0LL;
    *((_QWORD *)this + 116) = 0LL;
    *((_QWORD *)this + 117) = 0LL;
  }
  if ( *((_QWORD *)this + 113) )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(this);
  v5 = *((_QWORD *)this + 112);
  if ( v5 )
  {
    *((_QWORD *)this + 112) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 111);
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x620);
  ManipulationInjector::~ManipulationInjector((MPCGestureHandler *)((char *)this + 80));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>((__int64)this);
}
