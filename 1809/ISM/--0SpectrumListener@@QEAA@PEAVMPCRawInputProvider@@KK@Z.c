/*
 * XREFs of ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z @ 0x180058664
 * Callers:
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAKAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@AEAK1@Z @ 0x1800582EC (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAKAEAK@Details@WRL@Microsoft@@YA-AV-$ComPt.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?UseDdiForHands@@YA_NXZ @ 0x180058594 (-UseDdiForHands@@YA_NXZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18005ABA0 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x18005B14C (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
SpectrumListener *__fastcall SpectrumListener::SpectrumListener(
        SpectrumListener *this,
        struct MPCRawInputProvider *a2,
        int a3,
        const char *a4)
{
  int v4; // edi
  __int64 *v8; // rsi
  __int64 *v9; // r14
  char *v10; // r12
  wil::details::in1diag3 *v11; // rcx
  HRESULT v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *v14; // rcx
  MPCHeadUpdateListener *Instance; // rax
  __int64 v16; // r12
  struct MPCRawInputProvider *v17; // rdi
  struct MPCRawInputProvider *v18; // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rsi
  struct MPCRawInputProvider *v22; // rdi
  struct MPCRawInputProvider *v23; // rax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  HRESULT v26; // eax
  __int64 v27; // rcx
  wil::details::in1diag3 *v28; // rcx
  __int64 v29; // r14
  _DWORD *v30; // rdi
  _DWORD *v31; // rax
  _DWORD *v32; // rbx
  _DWORD *v33; // rsi
  int v34; // eax
  __int64 v36; // [rsp+28h] [rbp-99h] BYREF
  __int64 v37; // [rsp+30h] [rbp-91h] BYREF
  _BYTE v38[24]; // [rsp+38h] [rbp-89h]
  __int128 v39; // [rsp+50h] [rbp-71h]
  __int128 v40; // [rsp+60h] [rbp-61h]
  struct MPCRawInputProvider *v41; // [rsp+70h] [rbp-51h]
  struct MPCRawInputProvider *v42; // [rsp+78h] [rbp-49h]
  __int128 v43; // [rsp+80h] [rbp-41h]
  __int64 v44; // [rsp+90h] [rbp-31h]
  SpectrumListener *v45; // [rsp+98h] [rbp-29h]
  _DWORD *v46; // [rsp+A0h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-19h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-1h] BYREF
  HSTRING_HEADER v49; // [rsp+C8h] [rbp+7h] BYREF
  HSTRING v50; // [rsp+E0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v44 = -2LL;
  v4 = (int)a4;
  v45 = this;
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(
      Microsoft::WRL::Details::ModuleBase::module_,
      0LL);
  *(_QWORD *)this = &SpectrumListener::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 7) = v4;
  v8 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v9 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v10 = (char *)this + 64;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  v11 = retaddr;
  if ( !a2 )
  {
LABEL_47:
    wil::details::in1diag3::_FailFast_Unexpected(
      v11,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      a4);
    __debugbreak();
  }
  string = 0LL;
  v12 = WindowsCreateStringReference(L"Windows.UI.Input.Spatial.Internal.InputPriv", 0x2Bu, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
LABEL_49:
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)a2);
    goto LABEL_50;
  }
  a2 = (struct MPCRawInputProvider *)string;
  v13 = *v8;
  if ( *v8 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *v8 = 0LL;
  LODWORD(a2) = RoActivateInstance(a2, &v36);
  if ( (int)a2 >= 0 )
  {
    if ( *(_QWORD *)&GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v8 = v36;
    }
    else
    {
      LODWORD(a2) = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v36)(
                      v36,
                      &GUID_fb443535_ff9a_45e9_89fc_ae5955449664,
                      (char *)this + 32);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  v14 = retaddr;
  if ( (int)a2 < 0 )
    goto LABEL_49;
  Instance = MPCHeadUpdateListener::GetInstance();
  MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int64 *)this + 6);
  if ( UseDdiForHands() )
    goto LABEL_22;
  *(_QWORD *)&v39 = SpectrumListener::OnHandEventOccurred;
  DWORD2(v39) = 0;
  v16 = *v8;
  *(_QWORD *)v38 = this;
  *(_OWORD *)&v38[8] = v39;
  v17 = 0LL;
  *(_QWORD *)&v39 = 0LL;
  v18 = (struct MPCRawInputProvider *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  a2 = v18;
  if ( v18 )
  {
    *(_QWORD *)v18 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *((_DWORD *)v18 + 3) = 1;
    *(_QWORD *)v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::LegacyPrivHandEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)a2 + 1) = *(_OWORD *)v38;
    *((_QWORD *)a2 + 4) = *(_QWORD *)&v38[16];
    *(_QWORD *)a2 = off_18013BBD8;
    v17 = a2;
  }
  v41 = v17;
  *(_QWORD *)&v39 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, struct MPCRawInputProvider *, char *))(*(_QWORD *)v16 + 48LL))(
          v16,
          v17,
          (char *)this + 56);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_50:
    wil::details::in1diag3::FailFast_Hr(
      v20,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v19);
LABEL_51:
    wil::details::in1diag3::FailFast_Hr(
      v25,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v24);
LABEL_52:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    goto LABEL_53;
  }
  if ( v17 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(struct MPCRawInputProvider *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v10 = (char *)this + 64;
LABEL_22:
  *(_QWORD *)&v40 = SpectrumListener::OnPhraseDetected;
  DWORD2(v40) = 0;
  v21 = *v8;
  *(_QWORD *)v38 = this;
  *(_OWORD *)&v38[8] = v40;
  v22 = 0LL;
  *(_QWORD *)&v40 = 0LL;
  v23 = (struct MPCRawInputProvider *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  a2 = v23;
  if ( v23 )
  {
    *(_QWORD *)v23 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *((_DWORD *)v23 + 3) = 1;
    *(_QWORD *)v23 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)a2 + 1) = *(_OWORD *)v38;
    *((_QWORD *)a2 + 4) = *(_QWORD *)&v38[16];
    *(_QWORD *)a2 = off_18013BB38;
    v22 = a2;
  }
  v42 = v22;
  *(_QWORD *)&v40 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64, struct MPCRawInputProvider *, char *))(*(_QWORD *)v21 + 64LL))(
          v21,
          v22,
          v10);
  v25 = retaddr;
  if ( v24 < 0 )
    goto LABEL_51;
  if ( v22 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(struct MPCRawInputProvider *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v50 = 0LL;
  v26 = WindowsCreateStringReference(L"Windows.Mirage.Internal.GesturesPriv", 0x24u, &v49, &v50);
  if ( v26 < 0 )
    goto LABEL_52;
  a2 = (struct MPCRawInputProvider *)v50;
  v27 = *v9;
  if ( *v9 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  *v9 = 0LL;
  LODWORD(a2) = RoActivateInstance(a2, &v37);
  if ( (int)a2 >= 0 )
  {
    if ( *(_QWORD *)&GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v9 = v37;
    }
    else
    {
      LODWORD(a2) = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v37)(
                      v37,
                      &GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c,
                      (char *)this + 40);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
  }
  v28 = retaddr;
  if ( (int)a2 < 0 )
  {
LABEL_53:
    wil::details::in1diag3::FailFast_Hr(
      v28,
      (void *)0x2B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)a2);
    JUMPOUT(0x180058C17LL);
  }
  *(_QWORD *)&v43 = SpectrumListener::OnHomeGestureDetected;
  DWORD2(v43) = 0;
  v29 = *v9;
  *(_QWORD *)v38 = this;
  *(_OWORD *)&v38[8] = v43;
  v30 = 0LL;
  *(_QWORD *)&v43 = 0LL;
  v31 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v32 = v31;
  v33 = 0LL;
  if ( v31 )
  {
    *(_QWORD *)v31 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v31[3] = 1;
    *(_QWORD *)v31 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Mirage::Internal::IHomeGestureDetectedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v32 + 1) = *(_OWORD *)v38;
    *((_QWORD *)v32 + 4) = *(_QWORD *)&v38[16];
    *(_QWORD *)v32 = off_18013BC00;
    v30 = v32;
    v33 = v32;
  }
  v46 = v30;
  v34 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v29 + 48LL))(v29, v30, (char *)this + 72);
  if ( v34 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v34);
    goto LABEL_47;
  }
  if ( v33 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 16LL))(v30);
  *((_BYTE *)this + 88) = 1;
  return this;
}
