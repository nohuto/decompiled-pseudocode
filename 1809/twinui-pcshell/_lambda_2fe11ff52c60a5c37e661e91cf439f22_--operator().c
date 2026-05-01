/*
 * XREFs of _lambda_2fe11ff52c60a5c37e661e91cf439f22_::operator() @ 0x18004CBB4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_484ba01e18106f192c1b4b1dec846479___1_long_::Invoke @ 0x18004CB70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ptr64_--Dele.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027064 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18004CED8 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004DAC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18004DF20 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x18004ED50 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x18004EE4C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180071724 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_2fe11ff52c60a5c37e661e91cf439f22_::operator()(CAppViewManager ***a1)
{
  CAppViewManager *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  CAppViewManager *v5; // rbx
  int v6; // eax
  CAppViewManager **v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  struct Windows::Foundation::Collections::IPropertySet *v11; // rax
  int v12; // eax
  const unsigned __int16 *v13; // rdx
  CAppViewManager *v14; // rsi
  struct IAsyncCallback *v15; // rdi
  struct IAsyncCallback *v16; // rax
  struct IAsyncCallback *v17; // rbx
  struct IAsyncCallback *v18; // r15
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+38h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+40h] [rbp-51h] BYREF
  CAppViewManager *v28; // [rsp+48h] [rbp-49h] BYREF
  __int64 v29; // [rsp+50h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v30; // [rsp+58h] [rbp-39h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v31; // [rsp+60h] [rbp-31h] BYREF
  HWND v32; // [rsp+68h] [rbp-29h] BYREF
  HWND v33; // [rsp+70h] [rbp-21h] BYREF
  __int64 v34; // [rsp+78h] [rbp-19h] BYREF
  int v35; // [rsp+80h] [rbp-11h]
  __int64 v36; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v37[2]; // [rsp+90h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+Fh] BYREF
  HSTRING v39; // [rsp+B8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v37[1] = -2LL;
  v31 = 0LL;
  v32 = 0LL;
  v2 = **a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v3 = (*(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v2 + 48LL))(
         v2,
         &v31);
  v4 = v3;
  if ( v3 < 0 )
  {
    v21 = 516LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_24;
  }
  v3 = WindowFromViewWrapper(v31, &v32);
  v4 = v3;
  if ( v3 < 0 )
  {
    v21 = 517LL;
    goto LABEL_27;
  }
  v30 = 0LL;
  v33 = 0LL;
  v5 = **a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  v6 = (*(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v5 + 56LL))(
         v5,
         &v30);
  v4 = v6;
  if ( v6 < 0 )
  {
    v22 = 521LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_23;
  }
  v6 = WindowFromViewWrapper(v30, &v33);
  v4 = v6;
  if ( v6 < 0 )
  {
    v22 = 522LL;
    goto LABEL_33;
  }
  v34 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v6 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 64LL))(**a1, &v34);
  v4 = v6;
  if ( v6 < 0 )
  {
    v22 = 525LL;
    goto LABEL_33;
  }
  v6 = (*(__int64 (__fastcall **)(CAppViewManager *, char *))(*(_QWORD *)**a1 + 72LL))(**a1, (char *)&v34 + 4);
  v4 = v6;
  if ( v6 < 0 )
  {
    v22 = 526LL;
    goto LABEL_33;
  }
  v6 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 80LL))(**a1, &v36);
  v4 = v6;
  if ( v6 < 0 )
  {
    v22 = 527LL;
    goto LABEL_33;
  }
  v29 = 0LL;
  v7 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v8 = (**(__int64 (__fastcall ***)(CAppViewManager *, GUID *, __int64 *))*v7)(
         *v7,
         &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
         &v29);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x212,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_22;
  }
  v26 = 0LL;
  v9 = v29;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v9 + 56LL))(
          v9,
          &v26);
  v4 = v10;
  if ( v10 < 0 )
  {
    v23 = 533LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_21;
  }
  v11 = v26;
  if ( v26 )
    goto LABEL_11;
  v39 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          (__int64)v39,
          &v26);
  v4 = v10;
  if ( v10 < 0 )
  {
    v23 = 536LL;
    goto LABEL_38;
  }
  v11 = v26;
LABEL_11:
  v27 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
  v39 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
          v39);
  v4 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_20;
  }
  MoveTryPositionPropertiesToPropertySet(v32, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v27);
  Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
    v13);
  v14 = **a1;
  v28 = v14;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
  v15 = 0LL;
  v16 = (struct IAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  v18 = 0LL;
  if ( v16 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(v16);
    *((_QWORD *)v17 + 2) = 0LL;
    if ( (CAppViewManager **)((char *)v17 + 16) != &v28 )
    {
      *((_QWORD *)v17 + 2) = v14;
      v28 = 0LL;
    }
    *(_QWORD *)v17 = off_1803C5898;
    v15 = v17;
    v18 = v17;
  }
  v37[0] = v15;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  if ( !v18 )
  {
    v4 = -2147024882;
    v24 = 2147942414LL;
    v25 = 560LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)v24);
    goto LABEL_19;
  }
  v19 = CAppViewManager::_ShowViewAsyncWorker(
          *a1[1],
          v32,
          v33,
          (const struct CAppViewManager::ShowViewAsyncOptions *)&v34,
          v26,
          v15);
  v4 = v19;
  if ( v19 < 0 )
  {
    v24 = (unsigned int)v19;
    v25 = 562LL;
    goto LABEL_43;
  }
  v4 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  return v4;
}
