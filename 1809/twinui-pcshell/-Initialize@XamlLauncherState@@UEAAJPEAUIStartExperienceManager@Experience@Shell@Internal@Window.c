/*
 * XREFs of ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1802A2C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180299884 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVCortanaExper.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802998D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_1802998D0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18029991C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVStartExperie.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__int_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_ @ 0x1802A2020 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802A2020.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__int_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_ @ 0x1802A2094 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802A2094.c)
 *     ?PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ @ 0x1802A4E50 (-PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1803AC400 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GetAssignedAccessTypeForUser @ 0x1803B24E0 (GetAssignedAccessTypeForUser.c)
 *     GetSidStringFromToken @ 0x1803B25E0 (GetSidStringFromToken.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall XamlLauncherState::Initialize(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a3,
        struct IRealmActivationHistory *a4,
        struct IXamlLauncherStateCallback *a5)
{
  struct Windows::Internal::Shell::Experience::IStartExperienceManager *v9; // rax
  _OWORD *v10; // r13
  __int64 *v11; // r12
  struct IRealmActivationHistory *v12; // rax
  bool v13; // bl
  __int64 v14; // rcx
  _OWORD *v15; // rsi
  _OWORD *v16; // rax
  _OWORD *v17; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  _OWORD *v20; // rdi
  _OWORD *v21; // rax
  _OWORD *v22; // rbx
  int v23; // eax
  _OWORD *v24; // rsi
  _OWORD *v25; // rax
  _OWORD *v26; // rbx
  int v27; // eax
  _OWORD *v28; // rdi
  _OWORD *v29; // rax
  _OWORD *v30; // rbx
  int v31; // eax
  _OWORD *v32; // rsi
  _OWORD *v33; // rax
  _OWORD *v34; // rbx
  int v35; // eax
  __int64 v36; // rdi
  void *v37; // rax
  int v38; // eax
  _OWORD *v39; // rsi
  _OWORD *v40; // rax
  _OWORD *v41; // rbx
  int v42; // eax
  _OWORD *v43; // rdi
  _OWORD *v44; // rax
  _OWORD *v45; // rbx
  int v46; // eax
  __int64 v47; // rsi
  void *v48; // rax
  __int64 v49; // rbx
  int v50; // eax
  _OWORD *v51; // rdi
  _OWORD *v52; // rax
  _OWORD *v53; // rbx
  int v54; // eax
  _OWORD *v55; // rax
  _OWORD *v56; // rbx
  int v57; // eax
  _OWORD *v58; // r12
  _OWORD *v59; // rax
  _OWORD *v60; // rbx
  int v61; // eax
  _OWORD *v62; // r15
  _OWORD *v63; // rax
  _OWORD *v64; // rbx
  int v65; // eax
  __int64 v66; // r14
  void *v67; // rax
  int v68; // eax
  _OWORD *v69; // rdi
  _OWORD *v70; // rax
  _OWORD *v71; // rbx
  int v72; // eax
  _OWORD *v73; // rsi
  _OWORD *v74; // rbx
  int v75; // eax
  _BYTE StringSid_8[24]; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD *v78; // [rsp+40h] [rbp-C8h]
  _OWORD *v79; // [rsp+48h] [rbp-C0h]
  _OWORD *v80; // [rsp+50h] [rbp-B8h]
  __int64 v81; // [rsp+58h] [rbp-B0h]
  _OWORD *v82; // [rsp+60h] [rbp-A8h]
  _OWORD *v83; // [rsp+68h] [rbp-A0h]
  _OWORD *v84; // [rsp+70h] [rbp-98h]
  _OWORD *v85; // [rsp+78h] [rbp-90h]
  _OWORD *v86; // [rsp+80h] [rbp-88h]
  _BYTE v87[24]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v88[24]; // [rsp+A0h] [rbp-68h]
  _BYTE v89[24]; // [rsp+B8h] [rbp-50h]
  _BYTE v90[24]; // [rsp+D0h] [rbp-38h]
  _BYTE v91[24]; // [rsp+E8h] [rbp-20h]
  _BYTE v92[24]; // [rsp+100h] [rbp-8h]
  _BYTE v93[24]; // [rsp+118h] [rbp+10h]
  _BYTE v94[24]; // [rsp+130h] [rbp+28h]
  _BYTE v95[24]; // [rsp+148h] [rbp+40h]
  _BYTE v96[24]; // [rsp+160h] [rbp+58h]
  _BYTE v97[24]; // [rsp+178h] [rbp+70h]
  _BYTE v98[24]; // [rsp+190h] [rbp+88h]
  _BYTE v99[24]; // [rsp+1A8h] [rbp+A0h]
  __int128 v100; // [rsp+1C0h] [rbp+B8h]
  __int128 v101; // [rsp+1D0h] [rbp+C8h]
  __int128 v102; // [rsp+1E0h] [rbp+D8h]
  __int128 v103; // [rsp+1F0h] [rbp+E8h]
  __int64 v104; // [rsp+200h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]
  struct Windows::Internal::Shell::Experience::IStartExperienceManager *v107; // [rsp+250h] [rbp+148h] BYREF
  __int64 v108; // [rsp+260h] [rbp+158h] BYREF

  v104 = -2LL;
  *((_DWORD *)this + 240) = GetCurrentThreadId();
  v9 = (struct Windows::Internal::Shell::Experience::IStartExperienceManager *)*((_QWORD *)this + 7);
  v10 = 0LL;
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IStartExperienceManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = (struct Windows::Internal::Shell::Experience::IStartExperienceManager *)*((_QWORD *)this + 7);
    }
    v107 = v9;
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v107);
  }
  v11 = (__int64 *)((char *)this + 64);
  v107 = (XamlLauncherState *)((char *)this + 64);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 8, (__int64)a3);
  v12 = (struct IRealmActivationHistory *)*((_QWORD *)this + 9);
  if ( v12 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IRealmActivationHistory *))(*(_QWORD *)a4 + 8LL))(a4);
      v12 = (struct IRealmActivationHistory *)*((_QWORD *)this + 9);
    }
    v108 = (__int64)v12;
    *((_QWORD *)this + 9) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v108);
  }
  *((_QWORD *)this + 13) = a5;
  memset(StringSid_8, 0, sizeof(StringSid_8));
  v13 = (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, (LPWSTR *)StringSid_8) >= 0
     && (unsigned int)GetAssignedAccessTypeForUser(*(_QWORD *)StringSid_8, 0LL) == 2;
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(StringSid_8);
  *((_BYTE *)this + 938) = v13;
  v14 = *((_QWORD *)this + 122);
  if ( v14 )
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(v14 + 16), *v11);
  *(_QWORD *)&v103 = XamlLauncherState::OnStartShown;
  DWORD2(v103) = 0;
  *(_QWORD *)StringSid_8 = (char *)this - 24;
  *(_OWORD *)&StringSid_8[8] = v103;
  v15 = 0LL;
  v86 = 0LL;
  v16 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v16);
    v17[1] = *(_OWORD *)StringSid_8;
    *((_QWORD *)v17 + 4) = *(_QWORD *)&StringSid_8[16];
    *(_QWORD *)v17 = off_1803E9420;
    v15 = v17;
    v86 = v17;
  }
  *(_QWORD *)&v103 = v15;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 152LL))(
          *((_QWORD *)this + 7),
          v15,
          (char *)this + 112);
  v19 = v18;
  if ( v18 >= 0 )
  {
    *(_QWORD *)&v102 = XamlLauncherState::OnStartHidden;
    DWORD2(v102) = 0;
    *(_QWORD *)v99 = (char *)this - 24;
    *(_OWORD *)&v99[8] = v102;
    v20 = 0LL;
    v85 = 0LL;
    v21 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v21;
    if ( v21 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v21);
      v22[1] = *(_OWORD *)v99;
      *((_QWORD *)v22 + 4) = *(_QWORD *)&v99[16];
      *(_QWORD *)v22 = off_1803E9420;
      v20 = v22;
      v85 = v22;
    }
    *(_QWORD *)&v102 = v20;
    v23 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 168LL))(
            *((_QWORD *)this + 7),
            v20,
            (char *)this + 120);
    v19 = v23;
    if ( v23 >= 0 )
    {
      *(_QWORD *)v99 = XamlLauncherState::OnStartDestroyed;
      *(_DWORD *)&v99[8] = 0;
      *(_QWORD *)v98 = (char *)this - 24;
      *(_OWORD *)&v98[8] = *(_OWORD *)v99;
      v24 = 0LL;
      v84 = 0LL;
      v25 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v26 = v25;
      if ( v25 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v25);
        v26[1] = *(_OWORD *)v98;
        *((_QWORD *)v26 + 4) = *(_QWORD *)&v98[16];
        *(_QWORD *)v26 = off_1803E9420;
        v24 = v26;
        v84 = v26;
      }
      *(_QWORD *)v99 = v24;
      v27 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 184LL))(
              *((_QWORD *)this + 7),
              v24,
              (char *)this + 128);
      v19 = v27;
      if ( v27 >= 0 )
      {
        *(_QWORD *)v98 = XamlLauncherState::OnStartExitTransitionToCortanaCompleted;
        *(_DWORD *)&v98[8] = 0;
        *(_QWORD *)v97 = (char *)this - 24;
        *(_OWORD *)&v97[8] = *(_OWORD *)v98;
        v28 = 0LL;
        v83 = 0LL;
        v29 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v30 = v29;
        if ( v29 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v29);
          v30[1] = *(_OWORD *)v97;
          *((_QWORD *)v30 + 4) = *(_QWORD *)&v97[16];
          *(_QWORD *)v30 = off_1803E9420;
          v28 = v30;
          v83 = v30;
        }
        *(_QWORD *)v98 = v28;
        v31 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 232LL))(
                *((_QWORD *)this + 7),
                v28,
                (char *)this + 136);
        v19 = v31;
        if ( v31 >= 0 )
        {
          *(_QWORD *)v97 = XamlLauncherState::OnStartFailedToGetForeground;
          *(_DWORD *)&v97[8] = 0;
          *(_QWORD *)v96 = (char *)this - 24;
          *(_OWORD *)&v96[8] = *(_OWORD *)v97;
          v32 = 0LL;
          v82 = 0LL;
          v33 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
          v34 = v33;
          if ( v33 )
          {
            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v33);
            v34[1] = *(_OWORD *)v96;
            *((_QWORD *)v34 + 4) = *(_QWORD *)&v96[16];
            *(_QWORD *)v34 = off_1803E9420;
            v32 = v34;
            v82 = v34;
          }
          *(_QWORD *)v97 = v32;
          v35 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 248LL))(
                  *((_QWORD *)this + 7),
                  v32,
                  (char *)this + 144);
          v19 = v35;
          if ( v35 >= 0 )
          {
            *(_QWORD *)v96 = XamlLauncherState::OnStartLaunchResult;
            *(_DWORD *)&v96[8] = 0;
            *(_QWORD *)v87 = (char *)this - 24;
            *(_OWORD *)&v87[8] = *(_OWORD *)v96;
            v36 = 0LL;
            v81 = 0LL;
            v37 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
            if ( v37 )
            {
              v36 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__int_::___Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_(
                      (__int64)v37,
                      (__int64)v87);
              v81 = v36;
            }
            *(_QWORD *)v96 = v36;
            v38 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 264LL))(
                    *((_QWORD *)this + 7),
                    v36,
                    (char *)this + 152);
            v19 = v38;
            if ( v38 >= 0 )
            {
              *(_QWORD *)&v101 = XamlLauncherState::OnCortanaShown;
              DWORD2(v101) = 0;
              *(_QWORD *)v95 = (char *)this - 24;
              *(_OWORD *)&v95[8] = v101;
              v39 = 0LL;
              v80 = 0LL;
              v40 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
              v41 = v40;
              if ( v40 )
              {
                Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>((__int64)v40);
                v41[1] = *(_OWORD *)v95;
                *((_QWORD *)v41 + 4) = *(_QWORD *)&v95[16];
                *(_QWORD *)v41 = off_1803E93D0;
                v39 = v41;
                v80 = v41;
              }
              *(_QWORD *)&v101 = v39;
              v42 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)*v11 + 168LL))(
                      *v11,
                      v39,
                      (char *)this + 160);
              v19 = v42;
              if ( v42 >= 0 )
              {
                *(_QWORD *)v95 = XamlLauncherState::OnCortanaHidden;
                *(_DWORD *)&v95[8] = 0;
                *(_QWORD *)v94 = (char *)this - 24;
                *(_OWORD *)&v94[8] = *(_OWORD *)v95;
                v43 = 0LL;
                v79 = 0LL;
                v44 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                v45 = v44;
                if ( v44 )
                {
                  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v44);
                  v45[1] = *(_OWORD *)v94;
                  *((_QWORD *)v45 + 4) = *(_QWORD *)&v94[16];
                  *(_QWORD *)v45 = off_1803E9470;
                  v43 = v45;
                  v79 = v45;
                }
                *(_QWORD *)v95 = v43;
                v46 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)*v11 + 184LL))(
                        *v11,
                        v43,
                        (char *)this + 168);
                v19 = v46;
                if ( v46 >= 0 )
                {
                  *(_QWORD *)v94 = XamlLauncherState::OnCortanaDestroyed;
                  *(_DWORD *)&v94[8] = 0;
                  *(_QWORD *)v93 = (char *)this - 24;
                  *(_OWORD *)&v93[8] = *(_OWORD *)v94;
                  v47 = 0LL;
                  v108 = 0LL;
                  v48 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                  v49 = (__int64)v48;
                  if ( v48 )
                  {
                    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v48);
                    *(_OWORD *)(v49 + 16) = *(_OWORD *)v93;
                    *(_QWORD *)(v49 + 32) = *(_QWORD *)&v93[16];
                    *(_QWORD *)v49 = off_1803E9470;
                    v47 = v49;
                    v108 = v49;
                  }
                  *(_QWORD *)v94 = v47;
                  v50 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)*v11 + 200LL))(
                          *v11,
                          v47,
                          (char *)this + 176);
                  v19 = v50;
                  if ( v50 >= 0 )
                  {
                    *(_QWORD *)v93 = XamlLauncherState::OnCortanaDismissRequested;
                    *(_DWORD *)&v93[8] = 0;
                    *(_QWORD *)v92 = (char *)this - 24;
                    *(_OWORD *)&v92[8] = *(_OWORD *)v93;
                    v51 = 0LL;
                    v78 = 0LL;
                    v52 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                    v53 = v52;
                    if ( v52 )
                    {
                      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v52);
                      v53[1] = *(_OWORD *)v92;
                      *((_QWORD *)v53 + 4) = *(_QWORD *)&v92[16];
                      *(_QWORD *)v53 = off_1803E9470;
                      v51 = v53;
                      v78 = v53;
                    }
                    *(_QWORD *)v93 = v51;
                    v54 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)*v11 + 296LL))(
                            *v11,
                            v51,
                            (char *)this + 184);
                    v19 = v54;
                    if ( v54 >= 0 )
                    {
                      *(_QWORD *)v92 = XamlLauncherState::OnCortanaFailedToGetForeground;
                      *(_DWORD *)&v92[8] = 0;
                      *(_QWORD *)v91 = (char *)this - 24;
                      *(_OWORD *)&v91[8] = *(_OWORD *)v92;
                      v55 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                      v56 = v55;
                      if ( v55 )
                      {
                        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v55);
                        v56[1] = *(_OWORD *)v91;
                        *((_QWORD *)v56 + 4) = *(_QWORD *)&v91[16];
                        *(_QWORD *)v56 = off_1803E9470;
                        v10 = v56;
                      }
                      *(_QWORD *)v92 = v10;
                      v57 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)*v11 + 248LL))(
                              *v11,
                              v10,
                              (char *)this + 192);
                      v19 = v57;
                      if ( v57 >= 0 )
                      {
                        *(_QWORD *)v91 = XamlLauncherState::OnCortanaTransitionRequested;
                        *(_DWORD *)&v91[8] = 0;
                        *(_QWORD *)v90 = (char *)this - 24;
                        *(_OWORD *)&v90[8] = *(_OWORD *)v91;
                        v58 = 0LL;
                        v59 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                        v60 = v59;
                        if ( v59 )
                        {
                          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v59);
                          v60[1] = *(_OWORD *)v90;
                          *((_QWORD *)v60 + 4) = *(_QWORD *)&v90[16];
                          *(_QWORD *)v60 = off_1803E9470;
                          v58 = v60;
                        }
                        *(_QWORD *)v91 = v58;
                        v61 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 8) + 312LL))(
                                *((_QWORD *)this + 8),
                                v58,
                                (char *)this + 200);
                        v19 = v61;
                        if ( v61 >= 0 )
                        {
                          *(_QWORD *)v90 = XamlLauncherState::OnCortanaAppTransitionCompleted;
                          *(_DWORD *)&v90[8] = 0;
                          *(_QWORD *)v89 = (char *)this - 24;
                          *(_OWORD *)&v89[8] = *(_OWORD *)v90;
                          v62 = 0LL;
                          v63 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                          v64 = v63;
                          if ( v63 )
                          {
                            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v63);
                            v64[1] = *(_OWORD *)v89;
                            *((_QWORD *)v64 + 4) = *(_QWORD *)&v89[16];
                            *(_QWORD *)v64 = off_1803E9470;
                            v62 = v64;
                          }
                          *(_QWORD *)v90 = v62;
                          v65 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 8) + 328LL))(
                                  *((_QWORD *)this + 8),
                                  v62,
                                  (char *)this + 208);
                          v19 = v65;
                          if ( v65 >= 0 )
                          {
                            *(_QWORD *)v89 = XamlLauncherState::OnCortanaLaunchResult;
                            *(_DWORD *)&v89[8] = 0;
                            *(_QWORD *)v87 = (char *)this - 24;
                            *(_OWORD *)&v87[8] = *(_OWORD *)v89;
                            v66 = 0LL;
                            v67 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                            if ( v67 )
                              v66 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__int_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_(
                                      (__int64)v67,
                                      (__int64)v87);
                            *(_QWORD *)v89 = v66;
                            v68 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**(_QWORD **)v107 + 344LL))(
                                    *(_QWORD *)v107,
                                    v66,
                                    (char *)this + 216);
                            v19 = v68;
                            if ( v68 >= 0 )
                            {
                              *(_QWORD *)&v100 = XamlLauncherState::OnCortanaDeviceLocked;
                              DWORD2(v100) = 0;
                              *(_QWORD *)v88 = *(_QWORD *)StringSid_8;
                              *(_OWORD *)&v88[8] = v100;
                              v69 = 0LL;
                              v70 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                              v71 = v70;
                              if ( v70 )
                              {
                                Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v70);
                                v71[1] = *(_OWORD *)v88;
                                *((_QWORD *)v71 + 4) = *(_QWORD *)&v88[16];
                                *(_QWORD *)v71 = off_1803E9470;
                                v69 = v71;
                              }
                              *(_QWORD *)&v100 = v69;
                              v72 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**(_QWORD **)v107 + 360LL))(
                                      *(_QWORD *)v107,
                                      v69,
                                      (char *)this + 224);
                              v19 = v72;
                              if ( v72 >= 0 )
                              {
                                *(_QWORD *)v88 = XamlLauncherState::OnCortanaDeviceUnlocked;
                                *(_DWORD *)&v88[8] = 0;
                                *(_QWORD *)v87 = *(_QWORD *)StringSid_8;
                                *(_OWORD *)&v87[8] = *(_OWORD *)v88;
                                v73 = 0LL;
                                v74 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                                a5 = 0LL;
                                if ( v74 )
                                {
                                  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v74);
                                  v74[1] = *(_OWORD *)v87;
                                  *((_QWORD *)v74 + 4) = *(_QWORD *)&v87[16];
                                  *(_QWORD *)v74 = off_1803E9470;
                                  v73 = v74;
                                  a5 = (struct IXamlLauncherStateCallback *)v74;
                                }
                                *(_QWORD *)v88 = v73;
                                v75 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**(_QWORD **)v107 + 376LL))(
                                        *(_QWORD *)v107,
                                        v73,
                                        (char *)this + 232);
                                v19 = v75;
                                if ( v75 >= 0 )
                                {
                                  XamlLauncherState::PrepareStartReadinessListener(*(XamlLauncherState **)StringSid_8);
                                  v19 = 0;
                                }
                                else
                                {
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)0x66,
                                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                    (const char *)(unsigned int)v75);
                                }
                                if ( a5 )
                                {
                                  *(_QWORD *)v88 = 0LL;
                                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v73 + 16LL))(v73);
                                }
                                v47 = v108;
                              }
                              else
                              {
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)0x63,
                                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                  (const char *)(unsigned int)v72);
                              }
                              if ( v69 )
                              {
                                *(_QWORD *)&v100 = 0LL;
                                (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v69 + 16LL))(v69);
                              }
                              v51 = v78;
                            }
                            else
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x60,
                                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                (const char *)(unsigned int)v68);
                            }
                            if ( v66 )
                            {
                              *(_QWORD *)v89 = 0LL;
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
                            }
                          }
                          else
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x5D,
                              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                              (const char *)(unsigned int)v65);
                          }
                          if ( v62 )
                          {
                            *(_QWORD *)v90 = 0LL;
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v62 + 16LL))(v62);
                          }
                        }
                        else
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x5A,
                            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                            (const char *)(unsigned int)v61);
                        }
                        if ( v58 )
                        {
                          *(_QWORD *)v91 = 0LL;
                          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v58 + 16LL))(v58);
                        }
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x57,
                          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                          (const char *)(unsigned int)v57);
                      }
                      if ( v10 )
                      {
                        *(_QWORD *)v92 = 0LL;
                        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
                      }
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x54,
                        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                        (const char *)(unsigned int)v54);
                    }
                    if ( v51 )
                    {
                      *(_QWORD *)v93 = 0LL;
                      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v51 + 16LL))(v51);
                    }
                    v43 = v79;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x51,
                      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                      (const char *)(unsigned int)v50);
                  }
                  if ( v47 )
                  {
                    *(_QWORD *)v94 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
                  }
                  v39 = v80;
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x4E,
                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                    (const char *)(unsigned int)v46);
                }
                if ( v43 )
                {
                  *(_QWORD *)v95 = 0LL;
                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v43 + 16LL))(v43);
                }
                v36 = v81;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x4B,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  (const char *)(unsigned int)v42);
              }
              if ( v39 )
              {
                *(_QWORD *)&v101 = 0LL;
                (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v39 + 16LL))(v39);
              }
              v32 = v82;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x48,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                (const char *)(unsigned int)v38);
            }
            if ( v36 )
            {
              *(_QWORD *)v96 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
            }
            v28 = v83;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x45,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v35);
          }
          if ( v32 )
          {
            *(_QWORD *)v97 = 0LL;
            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v24 = v84;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x42,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v31);
        }
        if ( v28 )
        {
          *(_QWORD *)v98 = 0LL;
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v28 + 16LL))(v28);
        }
        v20 = v85;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v27);
      }
      if ( v24 )
      {
        *(_QWORD *)v99 = 0LL;
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v15 = v86;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v23);
    }
    if ( v20 )
    {
      *(_QWORD *)&v102 = 0LL;
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v18);
  }
  if ( v15 )
  {
    *(_QWORD *)&v103 = 0LL;
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v19;
}
