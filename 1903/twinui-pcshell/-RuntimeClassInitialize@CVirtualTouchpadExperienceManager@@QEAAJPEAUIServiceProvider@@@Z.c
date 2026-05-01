/*
 * XREFs of ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A9900
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801A677C (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18004E49C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180109EEC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_8d0f013aa2e1126d91d077424ff08d75__void_ @ 0x1801A641C (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigned_long_const_.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1801A6B90 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180410924 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180411878 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::RuntimeClassInitialize(
        CVirtualTouchpadExperienceManager *this,
        struct IServiceProvider *a2)
{
  int AgileReference; // ebx
  __int64 v5; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  Concurrency::details::_RefCounter **v9; // rbx
  __int64 v10; // rdx
  Concurrency::details::_RefCounter **wnf_subscription; // rax
  Concurrency::details::_RefCounter **v12; // rdi
  HMODULE LibraryW; // rdi
  const char *v14; // r9
  HMODULE v15; // r14
  DWORD LastError; // ebx
  FARPROC ProcAddress; // rax
  FARPROC v18; // rax
  FARPROC v19; // rax
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  Concurrency::details::_RefCounter *v22; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING_HEADER v25; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v26; // [rsp+78h] [rbp-90h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v28; // [rsp+98h] [rbp-70h]
  _BYTE v29[128]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v24[1] = -2LL;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.VirtualTouchpad",
    0x31u,
    0x30u);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v25,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  AgileReference = CSingleViewShellExperience::RuntimeClassInitialize(
                     (CVirtualTouchpadExperienceManager *)((char *)this + 64),
                     (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                     a2,
                     v26,
                     v28);
  if ( AgileReference >= 0 )
  {
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v25,
      L"ShellExperienceHostVS_ccv6fwk6gx0xp!App",
      0x28u,
      0x27u);
    AgileReference = CSingleViewShellExperience::AddTestAumid(
                       (CVirtualTouchpadExperienceManager *)((char *)this + 64),
                       v26);
    if ( AgileReference < 0 )
    {
      v5 = 199LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 31) = 2;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
    AgileReference = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
                       a2,
                       &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
                       &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
                       (char *)this + 320);
    if ( AgileReference < 0 )
    {
      v5 = 205LL;
      goto LABEL_3;
    }
    v24[0] = (__int64)this;
    if ( this )
      (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 8LL))(this);
    v7 = 0LL;
    v21 = 0LL;
    AgileReference = 0;
    if ( this )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      AgileReference = RoGetAgileReference(0LL, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, this, &v21);
      v7 = v21;
    }
    v21 = 0LL;
    v22 = 0LL;
    v23 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( AgileReference >= 0 )
    {
      v9 = (Concurrency::details::_RefCounter **)((char *)this + 744);
      v21 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_8d0f013aa2e1126d91d077424ff08d75__void_(
        (__int64)v29,
        &v21);
      wnf_subscription = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                                 &v22,
                                                                 v10,
                                                                 (__int64)v29);
      v12 = wnf_subscription;
      if ( v9 != wnf_subscription )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          (Concurrency::details::_RefCounter **)this + 93,
          *wnf_subscription);
        *v12 = 0LL;
      }
      if ( v22 )
        Concurrency::details::_RefCounter::_Destroy(v22);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v29);
      if ( *v9 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 32, (__int64)this);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 39, (__int64)a2);
        LibraryW = LoadLibraryW(L"user32.DLL");
        v15 = (HMODULE)*((_QWORD *)this + 94);
        if ( v15 )
        {
          LastError = GetLastError();
          FreeLibrary(v15);
          SetLastError(LastError);
        }
        *((_QWORD *)this + 94) = LibraryW;
        if ( !LibraryW )
        {
          AgileReference = wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0xE7,
                             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                             v14);
LABEL_35:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
          return (unsigned int)AgileReference;
        }
        ProcAddress = GetProcAddress(LibraryW, "SetPhysicalCursorPos");
        *((_QWORD *)this + 95) = ProcAddress;
        if ( ProcAddress )
        {
          v18 = GetProcAddress(*((HMODULE *)this + 94), "CalculatePopupWindowPosition");
          *((_QWORD *)this + 96) = v18;
          if ( v18 )
          {
            v19 = GetProcAddress(*((HMODULE *)this + 94), "GetPhysicalCursorPos");
            *((_QWORD *)this + 97) = v19;
            if ( v19 )
            {
              AgileReference = 0;
              goto LABEL_35;
            }
            v8 = 240LL;
          }
          else
          {
            v8 = 237LL;
          }
        }
        else
        {
          v8 = 234LL;
        }
        AgileReference = -2147024769;
      }
      else
      {
        AgileReference = -2147467259;
        v8 = 224LL;
      }
    }
    else
    {
      v8 = 209LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_35;
  }
  v5 = 198LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)AgileReference);
  return (unsigned int)AgileReference;
}
