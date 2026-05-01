/*
 * XREFs of ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x180352C18
 * Callers:
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x180350938 (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180128E90 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180128FFC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1801C5A80 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801CA6E4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CE1E8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333704 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_N.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void_ @ 0x180350384 (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigne_ea_180350384.c)
 *     ?EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ @ 0x180351EFC (-EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z @ 0x1803545BC (-Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibilityExperienceManager::RuntimeClassInitialize(AccessibilityExperienceManager *this)
{
  HWND Window; // rax
  __int64 v3; // r14
  int AgileReference; // edi
  __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 v7; // r9
  int v8; // eax
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  Concurrency::details::_RefCounter *v13; // rax
  std::_Ref_count_base *v14; // rcx
  WnfHelper *v15; // rcx
  __int64 v16; // rdx
  Concurrency::details::_RefCounter **wnf_subscription; // rax
  Concurrency::details::_RefCounter **v18; // rdi
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  Concurrency::details::_RefCounter *v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23[3]; // [rsp+80h] [rbp-88h] BYREF
  WNDCLASSEXW v24; // [rsp+98h] [rbp-70h] BYREF
  __int128 v25; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  _BYTE v28[128]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v23[1] = -2LL;
  memset_0(&v24, 0, sizeof(v24));
  v24.cbSize = 80;
  v24.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v24.lpszClassName = L"AccessibilityEMWndClass";
  RegisterClassExW(&v24);
  Window = CreateWindowExW(
             0,
             L"AccessibilityEMWndClass",
             L"AccessibilityEMWnd",
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             0LL,
             0LL);
  *((_QWORD *)this + 54) = Window;
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this);
  v23[0] = (__int64)this + 152;
  if ( this != (AccessibilityExperienceManager *)-152LL )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 19) + 8LL))((char *)this + 152);
  v3 = 0LL;
  v20 = 0LL;
  AgileReference = 0;
  if ( this != (AccessibilityExperienceManager *)-152LL )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    AgileReference = RoGetAgileReference(0LL, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, (char *)this + 152, &v20);
    v3 = v20;
  }
  v20 = 0LL;
  v21 = 0LL;
  v22 = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( AgileReference < 0 )
  {
    v5 = 70LL;
LABEL_30:
    v7 = (unsigned int)AgileReference;
    goto LABEL_31;
  }
  v25 = *(_OWORD *)&SID_AccessibilityExperienceManager.Revision;
  v26 = 0LL;
  v27 = 0LL;
  v6 = CImmersiveShellComponent::RegisterServiceInformation(
         (AccessibilityExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v25,
         1LL);
  AgileReference = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 37);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 37);
    AgileReference = v8;
    if ( v8 >= 0 )
    {
      v9 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 65) = 0;
        *(_WORD *)(v9 + 69) = 0;
        v9[71] = 0;
        *(_QWORD *)v9 = &EyeControlApp::`vftable';
        *((_QWORD *)v9 + 1) = 0LL;
        *((_QWORD *)v9 + 2) = 0LL;
        *((_QWORD *)v9 + 3) = 0LL;
        *((_QWORD *)v9 + 4) = 0LL;
        *((_QWORD *)v9 + 5) = 0LL;
        *((_QWORD *)v9 + 6) = 0LL;
        *((_QWORD *)v9 + 7) = 0LL;
        v9[64] = 0;
      }
      else
      {
        v9 = 0LL;
      }
      v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 52);
      *((_QWORD *)this + 52) = v9;
      if ( v12 )
      {
        (**v12)(v12, 1LL);
        v9 = (char *)*((_QWORD *)this + 52);
      }
      if ( v9 )
      {
        wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsageToService((__int64)v12, v10, v11);
        v13 = (Concurrency::details::_RefCounter *)operator new(0x20uLL);
        v21 = v13;
        *((_DWORD *)v13 + 2) = 1;
        *((_DWORD *)v13 + 3) = 1;
        *(_QWORD *)v13 = &std::_Ref_count_obj<WnfHelper>::`vftable';
        *((_QWORD *)v13 + 2) = 0LL;
        *((_QWORD *)v13 + 3) = 0LL;
        *((_QWORD *)this + 38) = (char *)v13 + 16;
        v14 = (std::_Ref_count_base *)*((_QWORD *)this + 39);
        *((_QWORD *)this + 39) = v13;
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        v15 = (WnfHelper *)*((_QWORD *)this + 38);
        if ( v15 )
          WnfHelper::Subscribe(v15, (AccessibilityExperienceManager *)((char *)this + 136));
        v20 = v3;
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void_(
          (__int64)v28,
          &v20);
        wnf_subscription = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                                   &v21,
                                                                   v16,
                                                                   (__int64)v28);
        v18 = wnf_subscription;
        if ( (Concurrency::details::_RefCounter **)((char *)this + 320) != wnf_subscription )
        {
          wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
            (Concurrency::details::_RefCounter **)this + 40,
            *wnf_subscription);
          *v18 = 0LL;
        }
        if ( v21 )
          Concurrency::details::_RefCounter::_Destroy(v21);
        wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v28);
        if ( *((_QWORD *)this + 40) )
        {
          AccessibilityExperienceManager::EnsureInputDeviceWatcher(this);
          AgileReference = 0;
          goto LABEL_33;
        }
        AgileReference = -2147467259;
        v5 = 101LL;
      }
      else
      {
        AgileReference = -2147024882;
        v5 = 77LL;
      }
      goto LABEL_30;
    }
    v7 = (unsigned int)v8;
    v5 = 74LL;
  }
  else
  {
    v7 = (unsigned int)v6;
    v5 = 72LL;
  }
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v7);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
  return (unsigned int)AgileReference;
}
