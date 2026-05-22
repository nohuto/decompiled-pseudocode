/*
 * XREFs of ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x18004F7FC
 * Callers:
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x18004F450 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall MPCSpatialGestureRecognizerHandler::RegisterSpatialEventHandlers(
        MPCSpatialGestureRecognizerHandler *this)
{
  __int64 v2; // r14
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r14
  _DWORD *v9; // rbx
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // r14
  _DWORD *v15; // rbx
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // r14
  _DWORD *v21; // rbx
  _DWORD *v22; // rax
  _DWORD *v23; // rdi
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // r14
  _DWORD *v27; // rbx
  _DWORD *v28; // rax
  _DWORD *v29; // rdi
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  __int64 v32; // r14
  _DWORD *v33; // rbx
  _DWORD *v34; // rax
  _DWORD *v35; // rdi
  int v36; // eax
  wil::details::in1diag3 *v37; // rcx
  __int64 v38; // r14
  _DWORD *v39; // rbx
  _DWORD *v40; // rax
  _DWORD *v41; // rdi
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  __int64 v44; // r14
  _DWORD *v45; // rdi
  _DWORD *v46; // rax
  _DWORD *v47; // rbx
  int v48; // eax
  __int128 v49; // [rsp+20h] [rbp-59h]
  __int128 v50; // [rsp+20h] [rbp-59h]
  __int128 v51; // [rsp+20h] [rbp-59h]
  __int128 v52; // [rsp+20h] [rbp-59h]
  __int128 v53; // [rsp+20h] [rbp-59h]
  __int128 v54; // [rsp+20h] [rbp-59h]
  __int128 v55; // [rsp+20h] [rbp-59h]
  __int128 v56; // [rsp+20h] [rbp-59h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 2);
  *(_QWORD *)&v49 = this;
  *((_QWORD *)&v49 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted;
  v3 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v5 + 1) = v49;
    *(_QWORD *)v5 = off_18013B868;
    v3 = v5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v2 + 144LL))(v2, v3, (char *)this + 40);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_59;
  if ( v3 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  v8 = *((_QWORD *)this + 2);
  *(_QWORD *)&v50 = this;
  *((_QWORD *)&v50 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationUpdated;
  v9 = 0LL;
  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v10[3] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v11 + 1) = v50;
    *(_QWORD *)v11 = off_18013B8B8;
    v9 = v11;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v8 + 160LL))(v8, v9, (char *)this + 48);
  v13 = retaddr;
  if ( v12 < 0 )
    goto LABEL_60;
  if ( v9 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  v14 = *((_QWORD *)this + 2);
  *(_QWORD *)&v51 = this;
  *((_QWORD *)&v51 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCompleted;
  v15 = 0LL;
  v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v16[3] = 1;
    *(_QWORD *)v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v17 + 1) = v51;
    *(_QWORD *)v17 = off_18013B890;
    v15 = v17;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v14 + 176LL))(v14, v15, (char *)this + 56);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_61;
  if ( v15 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
  v20 = *((_QWORD *)this + 2);
  *(_QWORD *)&v52 = this;
  *((_QWORD *)&v52 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCanceled;
  v21 = 0LL;
  v22 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v22;
  if ( v22 )
  {
    *(_QWORD *)v22 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v22[3] = 1;
    *(_QWORD *)v22 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v23 + 1) = v52;
    *(_QWORD *)v23 = off_18013B7F0;
    v21 = v23;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v20 + 192LL))(v20, v21, (char *)this + 64);
  v25 = retaddr;
  if ( v24 < 0 )
    goto LABEL_62;
  if ( v21 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 16LL))(v21);
  v26 = *((_QWORD *)this + 2);
  *(_QWORD *)&v53 = this;
  *((_QWORD *)&v53 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationStarted;
  v27 = 0LL;
  v28 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v28;
  if ( v28 )
  {
    *(_QWORD *)v28 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v28[3] = 1;
    *(_QWORD *)v28 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v29 + 1) = v53;
    *(_QWORD *)v29 = off_18013B7C8;
    v27 = v29;
  }
  v30 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v26 + 208LL))(v26, v27, (char *)this + 72);
  v31 = retaddr;
  if ( v30 < 0 )
    goto LABEL_63;
  if ( v27 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 16LL))(v27);
  v32 = *((_QWORD *)this + 2);
  *(_QWORD *)&v54 = this;
  *((_QWORD *)&v54 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationUpdated;
  v33 = 0LL;
  v34 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v35 = v34;
  if ( v34 )
  {
    *(_QWORD *)v34 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v34[3] = 1;
    *(_QWORD *)v34 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v35 + 1) = v54;
    *(_QWORD *)v35 = off_18013B840;
    v33 = v35;
  }
  v36 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v32 + 224LL))(v32, v33, (char *)this + 80);
  v37 = retaddr;
  if ( v36 < 0 )
    goto LABEL_64;
  if ( v33 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v33 + 16LL))(v33);
  v38 = *((_QWORD *)this + 2);
  *(_QWORD *)&v55 = this;
  *((_QWORD *)&v55 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted;
  v39 = 0LL;
  v40 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v41 = v40;
  if ( v40 )
  {
    *(_QWORD *)v40 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v40[3] = 1;
    *(_QWORD *)v40 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v41 + 1) = v55;
    *(_QWORD *)v41 = off_18013B818;
    v39 = v41;
  }
  v42 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v38 + 240LL))(v38, v39, (char *)this + 88);
  v43 = retaddr;
  if ( v42 < 0 )
  {
LABEL_65:
    wil::details::in1diag3::FailFast_Hr(
      v43,
      (void *)0x4C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v42);
    JUMPOUT(0x18004FEADLL);
  }
  if ( v39 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 16LL))(v39);
  v44 = *((_QWORD *)this + 2);
  *(_QWORD *)&v56 = this;
  *((_QWORD *)&v56 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCanceled;
  v45 = 0LL;
  v46 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v47 = v46;
  if ( v46 )
  {
    *(_QWORD *)v46 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v46[3] = 1;
    *(_QWORD *)v46 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v47 + 1) = v56;
    *(_QWORD *)v47 = off_18013B7A0;
    v45 = v47;
  }
  v48 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v44 + 256LL))(v44, v45, (char *)this + 96);
  if ( v48 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v48);
LABEL_59:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
LABEL_60:
    wil::details::in1diag3::FailFast_Hr(
      v13,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v12);
LABEL_61:
    wil::details::in1diag3::FailFast_Hr(
      v19,
      (void *)0x47,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v18);
LABEL_62:
    wil::details::in1diag3::FailFast_Hr(
      v25,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v24);
LABEL_63:
    wil::details::in1diag3::FailFast_Hr(
      v31,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v30);
LABEL_64:
    wil::details::in1diag3::FailFast_Hr(
      v37,
      (void *)0x4B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v36);
    goto LABEL_65;
  }
  if ( v45 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v45 + 16LL))(v45);
}
