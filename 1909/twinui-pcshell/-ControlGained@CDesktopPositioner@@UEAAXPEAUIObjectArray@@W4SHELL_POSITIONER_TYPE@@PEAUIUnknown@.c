/*
 * XREFs of ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803C0710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800246EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x180132B44 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 *     _lambda_eca460099de968d8064ce761a289067f_::operator() @ 0x1803C0378 (_lambda_eca460099de968d8064ce761a289067f_--operator().c)
 *     ?SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803C3250 (-SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C6724 (-DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopPositioner::ControlGained(
        __int64 a1,
        __int64 a2,
        int a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  __int64 v6; // rdx
  CDesktopPositioner *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, void **); // r14
  int v12; // eax
  int v13; // eax
  int (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *, unsigned int *); // rdi
  int v17; // eax
  const struct _GUID *v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  int active; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, struct IAppLayout **); // rdi
  int v27; // eax
  __int64 v28; // rdx
  CDesktopPositioner *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  int (__fastcall *v32)(__int64, __int64, void **); // rdi
  int v33; // eax
  void *v35; // [rsp+20h] [rbp-61h] BYREF
  unsigned int i; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v37; // [rsp+2Ch] [rbp-55h] BYREF
  struct IAppLayout *v38; // [rsp+30h] [rbp-51h] BYREF
  __int64 v39; // [rsp+38h] [rbp-49h] BYREF
  __int64 v40; // [rsp+40h] [rbp-41h] BYREF
  __int64 v41; // [rsp+48h] [rbp-39h] BYREF
  __int64 v42; // [rsp+50h] [rbp-31h] BYREF
  __int64 v43; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v44[14]; // [rsp+60h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v46; // [rsp+F0h] [rbp+6Fh] BYREF

  v46 = a3;
  v44[6] = (__int64 *)-2LL;
  v42 = a2;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v7, v6, v8) )
  {
    v35 = 0LL;
    v10 = *(_QWORD *)(a1 + 184);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v10 + 32LL);
    v35 = 0LL;
    v12 = v11(v10, 1LL, &v35);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x339,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v35 + 40LL))(v35, 3LL);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33A,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v35);
  }
  v38 = 0LL;
  v41 = 0LL;
  if ( a4 )
  {
    v14 = **a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    if ( v14(a4, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6, &v41) >= 0 )
    {
      v40 = 0LL;
      v15 = v41;
      v16 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v41 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
      v17 = v16(v15, &v40, &i);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x354,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v17);
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
        goto LABEL_27;
      }
      if ( i )
        goto LABEL_26;
      v35 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      v19 = DesktopOperation_CreateInstance(v18, &v35);
      v20 = retaddr;
      if ( v19 < 0 )
      {
        v21 = 856LL;
LABEL_16:
        wil::details::in1diag3::_Log_Hr(
          v20,
          (void *)v21,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v19);
LABEL_25:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
        goto LABEL_26;
      }
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v35 + 24LL))(v35, v40);
      v19 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v35 + 40LL))(v35);
      v20 = retaddr;
      if ( v19 < 0 )
      {
        v21 = 859LL;
        goto LABEL_16;
      }
      v39 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
      active = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v35)(
                 v35,
                 &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                 &v39);
      v23 = retaddr;
      if ( active >= 0 )
      {
        v25 = v39;
        v26 = *(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v39 + 48LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
        v27 = v26(v25, &v38);
        if ( v27 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x360,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v27);
        active = CDesktopPositioner::SetActiveTabsOnTabletModeExit((CDesktopPositioner *)(a1 - 136), v38);
        v23 = retaddr;
        if ( active >= 0 )
          goto LABEL_24;
        v24 = 866LL;
      }
      else
      {
        v24 = 862LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v23,
        (void *)v24,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)active);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
      goto LABEL_25;
    }
  }
LABEL_27:
  v43 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v9, 3u);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 24LL))(v42, &v37);
  for ( i = 0; i < v37; ++i )
  {
    v44[0] = &v42;
    v44[1] = (__int64 *)&i;
    v44[2] = (__int64 *)(a1 - 136);
    v44[3] = &v43;
    v44[4] = (__int64 *)&v46;
    v44[5] = (__int64 *)&v38;
    lambda_eca460099de968d8064ce761a289067f_::operator()(v44);
  }
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v29, v28, v30) )
  {
    v35 = 0LL;
    v31 = *(_QWORD *)(a1 + 184);
    v32 = *(int (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v31 + 32LL);
    v35 = 0LL;
    if ( v32(v31, 2LL, &v35) >= 0 )
    {
      v33 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v35 + 40LL))(v35, 0LL);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B9,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v33);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v35);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
}
