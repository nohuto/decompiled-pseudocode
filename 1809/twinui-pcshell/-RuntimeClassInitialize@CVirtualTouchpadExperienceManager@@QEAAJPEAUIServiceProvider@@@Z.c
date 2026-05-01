/*
 * XREFs of ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017A200
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801770B0 (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1800E7DD0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E7F3C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1801774A4 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18017BBB4 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::RuntimeClassInitialize(
        CVirtualTouchpadExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int AgileReference; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  Concurrency::details::_RefCounter **wnf_subscription; // rax
  __int64 v13; // rdx
  Concurrency::details::_RefCounter **v14; // rbx
  __int64 v15; // rdx
  HMODULE *v16; // rbx
  HMODULE LibraryW; // rax
  const char *v18; // r9
  FARPROC ProcAddress; // rax
  FARPROC v20; // rax
  FARPROC v21; // rax
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  Concurrency::details::_RefCounter *v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25[2]; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING_HEADER v26; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v27; // [rsp+78h] [rbp-90h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v29; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v30)(); // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31[12]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 (__fastcall ***v32)(); // [rsp+110h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v25[1] = -2LL;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.VirtualTouchpad",
    0x31u,
    0x30u);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v26,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CVirtualTouchpadExperienceManager *)((char *)this + 64),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v27,
         v29);
  if ( v4 < 0 )
  {
    v5 = 198LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v26,
    L"ShellExperienceHostVS_ccv6fwk6gx0xp!App",
    0x28u,
    0x27u);
  v4 = CSingleViewShellExperience::AddTestAumid((CVirtualTouchpadExperienceManager *)((char *)this + 64), v27);
  if ( v4 < 0 )
  {
    v5 = 199LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 31) = 2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         (char *)this + 320);
  if ( v4 < 0 )
  {
    v5 = 205LL;
    goto LABEL_3;
  }
  v25[0] = (__int64)this;
  if ( this )
    (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 8LL))(this);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  if ( this )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    AgileReference = RoGetAgileReference(0LL, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, this, &v22);
    if ( AgileReference < 0 )
    {
      v9 = v23;
    }
    else
    {
      v8 = v23;
      v9 = v22;
      v23 = v22;
      v22 = v8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( AgileReference < 0 )
    {
      v10 = 209LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)AgileReference);
      goto LABEL_36;
    }
  }
  else
  {
    v9 = v23;
  }
  v22 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v32 = 0LL;
  v30 = off_1803CA3B8;
  v31[0] = 0LL;
  AgileGitPtr::operator=(v31, &v22);
  v32 = &v30;
  wnf_subscription = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                             &v24,
                                                             v11,
                                                             (__int64)&v30);
  v14 = wnf_subscription;
  if ( (Concurrency::details::_RefCounter **)((char *)this + 744) != wnf_subscription )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (Concurrency::details::_RefCounter **)this + 93,
      *wnf_subscription);
    *v14 = 0LL;
  }
  if ( v24 )
    Concurrency::details::_RefCounter::_Destroy(v24);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v30,
    v13);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v30,
    v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( !*((_QWORD *)this + 93) )
  {
    AgileReference = -2147467259;
    v10 = 224LL;
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 32, (__int64)this);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 39, (__int64)a2);
  v16 = (HMODULE *)((char *)this + 752);
  LibraryW = LoadLibraryW(L"user32.DLL");
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (char *)this + 752,
    LibraryW);
  if ( *((_QWORD *)this + 94) )
  {
    ProcAddress = GetProcAddress(*((HMODULE *)this + 94), "SetPhysicalCursorPos");
    *((_QWORD *)this + 95) = ProcAddress;
    if ( ProcAddress )
    {
      v20 = GetProcAddress(*v16, "CalculatePopupWindowPosition");
      *((_QWORD *)this + 96) = v20;
      if ( v20 )
      {
        v21 = GetProcAddress(*v16, "GetPhysicalCursorPos");
        *((_QWORD *)this + 97) = v21;
        if ( v21 )
        {
          AgileReference = 0;
          goto LABEL_36;
        }
        v10 = 240LL;
      }
      else
      {
        v10 = 237LL;
      }
    }
    else
    {
      v10 = 234LL;
    }
    AgileReference = -2147024769;
    goto LABEL_34;
  }
  AgileReference = wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)0xE7,
                     (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                     v18);
LABEL_36:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
  return (unsigned int)AgileReference;
}
