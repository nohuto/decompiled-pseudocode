/*
 * XREFs of ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180311E7C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180313860 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_2ca79d7d35b5703dbda3279bb63541b0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_2ca79d7d35b5703dbda3279bb63541b0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___ @ 0x180310B58 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180310B58.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180310BC4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVCortanaExper.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180310C10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180310C10.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlLauncher::InitializeCortanaExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, char *); // rsi
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  int v15; // eax
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // r12
  int v20; // eax
  __int64 v21; // rbx
  void *v22; // rax
  __int64 v23; // r15
  int v24; // eax
  _QWORD *v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // r13
  int v29; // eax
  _QWORD *v30; // rsi
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // r12
  int v34; // eax
  _QWORD *v35; // rsi
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  _QWORD *v38; // r15
  int v39; // eax
  __int64 (__fastcall ***v41)(_QWORD, GUID *, char *); // [rsp+28h] [rbp-59h] BYREF
  __int64 v42; // [rsp+30h] [rbp-51h]
  _QWORD *v43; // [rsp+38h] [rbp-49h]
  _QWORD *v44; // [rsp+40h] [rbp-41h]
  _QWORD v45[7]; // [rsp+48h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-1h] BYREF
  __int64 v47; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v45[1] = -2LL;
  v41 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL);
  v47 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Cortana",
    0x29u,
    0x28u);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
  v5 = v4(a2, v47, &v41);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 779LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_46;
  }
  v8 = (_QWORD *)((char *)this + 128);
  v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v41;
  v10 = **v41;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  v5 = v10(v9, &GUID_3b810852_511f_4404_89ae_347bc2e8b561, (char *)this + 128);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 780LL;
    goto LABEL_5;
  }
  v11 = 0LL;
  v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  v14 = 0LL;
  v44 = 0LL;
  if ( v12 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v12);
    v13[2] = this;
    *v13 = off_1804704A8;
    v11 = v13;
    v14 = v13;
    v44 = v13;
  }
  v45[2] = v11;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v8 + 216LL))(*v8, v14, (char *)this + 208);
  v6 = v15;
  if ( v15 >= 0 )
  {
    v16 = 0LL;
    v17 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    v19 = 0LL;
    v43 = 0LL;
    if ( v17 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v17);
      v18[2] = this;
      *v18 = off_180470458;
      v16 = v18;
      v19 = v18;
      v43 = v18;
    }
    v45[3] = v16;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v8 + 232LL))(*v8, v19, (char *)this + 216);
    v6 = v20;
    if ( v20 >= 0 )
    {
      v45[0] = this;
      v21 = 0LL;
      v22 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v23 = 0LL;
      v42 = 0LL;
      if ( v22 )
      {
        v21 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_2ca79d7d35b5703dbda3279bb63541b0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_2ca79d7d35b5703dbda3279bb63541b0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___(
                (__int64)v22,
                v45);
        v23 = v21;
        v42 = v21;
      }
      v45[0] = v21;
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v8 + 264LL))(*v8, v23, (char *)this + 224);
      v6 = v24;
      if ( v24 >= 0 )
      {
        v25 = 0LL;
        v26 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v27 = v26;
        v28 = 0LL;
        if ( v26 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v26);
          v27[2] = this;
          *v27 = off_180470520;
          v25 = v27;
          v28 = v27;
        }
        v45[4] = v25;
        v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v8 + 280LL))(
                *v8,
                v28,
                (char *)this + 232);
        v6 = v29;
        if ( v29 >= 0 )
        {
          v30 = 0LL;
          v31 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v32 = v31;
          v33 = 0LL;
          if ( v31 )
          {
            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>((__int64)v31);
            v32[2] = this;
            *v32 = off_1804704D0;
            v30 = v32;
            v33 = v32;
          }
          v45[5] = v30;
          v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v8 + 168LL))(
                  *v8,
                  v33,
                  (char *)this + 240);
          v6 = v34;
          if ( v34 >= 0 )
          {
            v35 = 0LL;
            v36 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            v37 = v36;
            v38 = 0LL;
            if ( v36 )
            {
              Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v36);
              v37[2] = this;
              *v37 = off_180470360;
              v35 = v37;
              v38 = v37;
            }
            v45[6] = v35;
            v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v8 + 200LL))(
                    *v8,
                    v38,
                    (char *)this + 248);
            v6 = v39;
            if ( v39 >= 0 )
              v6 = 0;
            else
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x349,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v39);
            if ( v38 )
              (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
            v23 = v42;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x338,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v34);
          }
          if ( v33 )
            (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
          v19 = v43;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x330,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v29);
        }
        if ( v28 )
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x326,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v24);
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v14 = v44;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31C,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v20);
    }
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x314,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v15);
  }
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
  return v6;
}
