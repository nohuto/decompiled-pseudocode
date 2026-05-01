/*
 * XREFs of ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x180212C20
 * Callers:
 *     ?CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@AEAVAsyncEventSerialInvocationContextToken@7@PEAUIServiceProvider@@@Z @ 0x180218A28 (-CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UIViewHo.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x1800594B0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180076924 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180099510 (--$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180117764 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ??$CreatedForView@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x180209ED0 (--$CreatedForView@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x18020A924 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK.c)
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x18020E9FC (-CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x180215510 (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RuntimeClassInitialize(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct IApplicationView *a2,
        struct IServiceProvider *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 AumIdForView; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  __int64 v12; // rdx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v14; // eax
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v16; // r8
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  struct IApplicationView *v19; // [rsp+40h] [rbp-19h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-11h] BYREF
  __int64 v21[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v21[1] = -2LL;
  v19 = a2;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
    (__int64 *)this + 52,
    (__int64)a2);
  v5 = (__int64 *)wil::com_query_failfast<IWin32ApplicationView,IApplicationView * &>((__int64)&StringRawBuffer, &v19);
  v6 = *v5;
  if ( *((_QWORD *)this + 53) != *v5 )
  {
    v19 = (struct IApplicationView *)*v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v19 = (struct IApplicationView *)*((_QWORD *)this + 53);
    *((_QWORD *)this + 53) = v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 53) + 24LL))(
         *((_QWORD *)this + 53),
         (char *)this + 384);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( IsHolographicWin32SlatesFeatureEnabled() )
    {
      AumIdForView = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GenerateAumIdForView(
                       v22,
                       *((_QWORD *)this + 53));
      if ( *(_QWORD *)(AumIdForView + 24) >= 8uLL )
        AumIdForView = *(_QWORD *)AumIdForView;
      StringRawBuffer = (PCWSTR)AumIdForView;
      Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((HSTRING *)this + 47, &StringRawBuffer);
      std::wstring::_Tidy_deallocate(v22);
    }
    else
    {
      Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 47, L"Win32BackedItem!App", 0x13u);
    }
    LODWORD(v19) = *((_DWORD *)this + 96);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 47), 0LL);
    Win32BackedViewHostItemTelemetry::CreatedForView<unsigned short const *,unsigned int>(
      &StringRawBuffer,
      (__int64)&v19);
    Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::CheckWindowTextChanged(this);
    v21[0] = 0LL;
    QueryService = a3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
            a3,
            &SID_ImmersiveShellHookService,
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            v21);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v13 = a3->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 55);
      v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
              a3,
              &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
              &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
              (char *)this + 440);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          74LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      v15 = a3->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
      v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
              a3,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (char *)this + 448);
      v8 = v11;
      if ( v11 >= 0 )
      {
        if ( IsHolographicWin32SlatesFeatureEnabled()
          && (v17 = a3->lpVtbl->QueryService,
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 58),
              v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
                      a3,
                      &CLSID_VirtualMonitorSlateHostFactory,
                      &GUID_de2e9b5d_746f_5435_9e02_38148a6440e4,
                      (char *)this + 464),
              v8 = v11,
              v11 < 0) )
        {
          v12 = 79LL;
        }
        else
        {
          v11 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>(
                  (__int64)this + 248,
                  v21[0],
                  v16);
          v8 = v11;
          if ( v11 >= 0 )
          {
            v8 = 0;
            goto LABEL_23;
          }
          v12 = 88LL;
        }
      }
      else
      {
        v12 = 75LL;
      }
    }
    else
    {
      v12 = 73LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v11);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
