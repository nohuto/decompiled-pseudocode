/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C3740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800246EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008F8E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x180132B44 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 **v5; // r13
  int v6; // ebx
  __int64 v7; // rdx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v14; // r15
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 **v22; // r15
  __int64 v23; // rdx
  CDesktopPositioner *v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  unsigned int i; // ebx
  __int64 *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 *v38; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v39; // [rsp+40h] [rbp-31h] BYREF
  __int64 v40; // [rsp+48h] [rbp-29h] BYREF
  __int64 v41[3]; // [rsp+50h] [rbp-21h] BYREF
  __int128 v42; // [rsp+68h] [rbp-9h] BYREF
  __int128 v43; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v41[1] = -2LL;
  QueryService = a2->lpVtbl->QueryService;
  v5 = (__int64 **)((char *)this + 200);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 **))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  if ( v6 < 0 )
  {
    v7 = 83LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
         a2,
         &IID_IApplicationPositionPersistence,
         &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
         (char *)this + 208);
  if ( v6 < 0 )
  {
    v7 = 84LL;
    goto LABEL_3;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
         a2,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         (char *)this + 216);
  if ( v6 < 0 )
  {
    v7 = 85LL;
    goto LABEL_3;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
         a2,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         (char *)this + 224);
  if ( v6 < 0 )
  {
    v7 = 86LL;
    goto LABEL_3;
  }
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 232);
  if ( v6 < 0 )
  {
    v7 = 87LL;
    goto LABEL_3;
  }
  v13 = a2->lpVtbl->QueryService;
  v14 = (_QWORD *)((char *)this + 240);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 240);
  if ( v6 < 0 )
  {
    v7 = 88LL;
    goto LABEL_3;
  }
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 248);
  if ( v6 < 0 )
  {
    v7 = 89LL;
    goto LABEL_3;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
         a2,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         (char *)this + 264);
  if ( v6 < 0 )
  {
    v7 = 90LL;
    goto LABEL_3;
  }
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v17, 3u);
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 29) + 96LL))(
         *((_QWORD *)this + 29),
         ((unsigned __int64)this + 112) & -(__int64)(this != (CDesktopPositioner *)40),
         (char *)this + 344);
  if ( v6 < 0 )
  {
    v7 = 98LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v14 + 72LL))(
         *v14,
         ((unsigned __int64)this + 120) & -(__int64)(this != (CDesktopPositioner *)40),
         (char *)this + 348);
  if ( v6 < 0 )
  {
    v7 = 99LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 24LL))(*v14, (char *)this + 192);
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService(v19, v18, v20);
  v21 = a2->lpVtbl->QueryService;
  v22 = (__int64 **)((char *)this + 280);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v21)(
         a2,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         (char *)this + 280);
  if ( v6 < 0 )
  {
    v7 = 111LL;
    goto LABEL_3;
  }
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v24, v23, v25) )
  {
    v38 = 0LL;
    v26 = *v22;
    v27 = **v22;
    v38 = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v27 + 24))(v26, 1LL, &v38);
    v6 = v28;
    if ( v28 < 0 )
    {
      v29 = 117LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v28);
LABEL_44:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v38);
      return (unsigned int)v6;
    }
    if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(**v5 + 32))(*v5, &v39) >= 0 )
    {
      for ( i = 0; i < v39; ++i )
      {
        v40 = 0LL;
        v31 = *v5;
        v32 = **v5;
        v40 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v32 + 40))(v31, i, &v40) >= 0 )
        {
          v43 = 0LL;
          v33 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v40 + 88LL))(v40, &v43);
          if ( v33 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x81,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v33);
          v34 = *v38;
          v42 = v43;
          v35 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v34 + 56))(v38, v40, &v42, 1LL);
          if ( v35 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x82,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v35);
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v40);
      }
    }
    v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v38 + 40))(v38, *((_DWORD *)this + 48) == 0 ? 3 : 0);
    v6 = v28;
    if ( v28 < 0 )
    {
      v29 = 140LL;
      goto LABEL_38;
    }
    v41[0] = 0LL;
    v36 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))**v5)(
            *v5,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            v41);
    v6 = v36;
    if ( v36 < 0 )
    {
      v37 = 144LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v36);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v41);
      goto LABEL_44;
    }
    v36 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v41[0] + 24LL))(
            v41[0],
            ((unsigned __int64)this + 104) & -(__int64)(this != (CDesktopPositioner *)40),
            (char *)this + 356);
    v6 = v36;
    if ( v36 < 0 )
    {
      v37 = 145LL;
      goto LABEL_43;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v41);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v38);
  }
  return 0LL;
}
