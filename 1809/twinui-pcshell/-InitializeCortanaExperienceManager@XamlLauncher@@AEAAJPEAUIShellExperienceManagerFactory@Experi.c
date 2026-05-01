/*
 * XREFs of ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18029AB58
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18029C470 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_5a6ea673cddd4f023ed725f5adbe63cd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_5a6ea673cddd4f023ed725f5adbe63cd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_ @ 0x180299818 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180299818.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180299884 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVCortanaExper.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802998D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_1802998D0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlLauncher::InitializeCortanaExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // r15
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  int v12; // eax
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r12
  int v17; // eax
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v20; // r13
  int v21; // eax
  _QWORD *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  _QWORD *v25; // r12
  int v26; // eax
  _QWORD *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  _QWORD *v30; // r15
  int v31; // eax
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // r14
  int v36; // eax
  __int64 (__fastcall ***v38)(_QWORD, GUID *, char *); // [rsp+28h] [rbp-59h] BYREF
  _QWORD *v39; // [rsp+30h] [rbp-51h]
  _QWORD *v40; // [rsp+38h] [rbp-49h]
  _QWORD v41[7]; // [rsp+40h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-9h] BYREF
  __int64 v43; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v41[1] = -2LL;
  v38 = 0LL;
  v43 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Cortana",
    0x29u,
    0x28u);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL))(
         a2,
         v43,
         &v38);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 731LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_45;
  }
  v7 = (_QWORD *)((char *)this + 112);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  v4 = (**v38)(v38, &GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe, (char *)this + 112);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 732LL;
    goto LABEL_5;
  }
  v8 = 0LL;
  v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v11 = 0LL;
  v39 = 0LL;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v9);
    v10[2] = this;
    *v10 = off_1803E8B18;
    v8 = v10;
    v11 = v10;
    v39 = v10;
  }
  v41[2] = v8;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v7 + 216LL))(*v7, v11, (char *)this + 184);
  v5 = v12;
  if ( v12 >= 0 )
  {
    v13 = 0LL;
    v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    v16 = 0LL;
    v40 = 0LL;
    if ( v14 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v14);
      v15[2] = this;
      *v15 = off_1803E8C08;
      v13 = v15;
      v16 = v15;
      v40 = v15;
    }
    v41[3] = v13;
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v7 + 232LL))(*v7, v16, (char *)this + 192);
    v5 = v17;
    if ( v17 >= 0 )
    {
      v41[0] = this;
      v18 = 0LL;
      v19 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = 0LL;
      if ( v19 )
      {
        v18 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_5a6ea673cddd4f023ed725f5adbe63cd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_5a6ea673cddd4f023ed725f5adbe63cd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_(
                (__int64)v19,
                v41);
        v20 = v18;
      }
      v41[0] = v18;
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v7 + 264LL))(*v7, v20, (char *)this + 200);
      v5 = v21;
      if ( v21 >= 0 )
      {
        v22 = 0LL;
        v23 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v24 = v23;
        v25 = 0LL;
        if ( v23 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v23);
          v24[2] = this;
          *v24 = off_1803E8BB8;
          v22 = v24;
          v25 = v24;
        }
        v41[4] = v22;
        v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v7 + 280LL))(
                *v7,
                v25,
                (char *)this + 208);
        v5 = v26;
        if ( v26 >= 0 )
        {
          v27 = 0LL;
          v28 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v29 = v28;
          v30 = 0LL;
          if ( v28 )
          {
            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>((__int64)v28);
            v29[2] = this;
            *v29 = off_1803E8B90;
            v27 = v29;
            v30 = v29;
          }
          v41[5] = v27;
          v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 14) + 168LL))(
                  *((_QWORD *)this + 14),
                  v30,
                  (char *)this + 216);
          v5 = v31;
          if ( v31 >= 0 )
          {
            v32 = 0LL;
            v33 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            v34 = v33;
            v35 = 0LL;
            if ( v33 )
            {
              Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v33);
              v34[2] = this;
              *v34 = off_1803E8AF0;
              v32 = v34;
              v35 = v34;
            }
            v41[6] = v32;
            v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 14) + 200LL))(
                    *((_QWORD *)this + 14),
                    v35,
                    (char *)this + 224);
            v5 = v36;
            if ( v36 >= 0 )
              v5 = 0;
            else
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x319,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v36);
            if ( v35 )
              (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
            v11 = v39;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x308,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v31);
          }
          if ( v30 )
            (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x300,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v26);
        }
        if ( v25 )
          (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
        v16 = v40;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F6,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v21);
      }
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v17);
    }
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E4,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
LABEL_45:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
  return v5;
}
