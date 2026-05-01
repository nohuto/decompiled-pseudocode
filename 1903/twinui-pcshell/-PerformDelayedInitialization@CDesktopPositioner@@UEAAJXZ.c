/*
 * XREFs of ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1803A2B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x1801136B4 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18016FDFC (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180170FE8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803A1E38 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803A4964 (-TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOpt.c)
 */

__int64 __fastcall CDesktopPositioner::PerformDelayedInitialization(CDesktopPositioner *this)
{
  __int64 v2; // rdx
  CDesktopPositioner *v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v11; // eax
  __int64 *i; // rcx
  struct IApplicationView *v13; // rbx
  int TabGroupForView; // eax
  int v15; // edi
  int v16; // eax
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  struct IApplicationView *v18; // [rsp+40h] [rbp-31h] BYREF
  struct IViewGroup *v19; // [rsp+48h] [rbp-29h] BYREF
  struct IApplicationView *v20; // [rsp+50h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  struct IApplicationView *v22; // [rsp+60h] [rbp-11h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-9h]
  __int64 v24; // [rsp+70h] [rbp-1h] BYREF
  int v25; // [rsp+78h] [rbp+7h]
  int v26; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+88h] [rbp+17h] BYREF
  __int64 *v28; // [rsp+90h] [rbp+1Fh]
  __int64 v29; // [rsp+98h] [rbp+27h]
  int v30[2]; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v31; // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v29 = -2LL;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  if ( CDesktopPositioner::HasWindowingEnvironmentManager(v3, v2, v4) )
  {
    v17 = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 35) + 32LL))(
           *((_QWORD *)this + 35),
           1LL,
           &v17);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 158LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
      return v6;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 48LL))(v17, 3LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 159LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
  }
  if ( *((_QWORD *)this + 34) )
  {
    v17 = 0LL;
    v9 = *((_QWORD *)this + 31);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v9 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v11 = v10(v9, 0LL, 0LL, &v17);
    v6 = v11;
    if ( v11 >= 0 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v24,
        v17);
      LODWORD(v21) = 0;
      v22 = 0LL;
      v23 = &v24;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
      v26 = v25;
      v27 = 0LL;
      v28 = &v24;
      for ( i = (__int64 *)&v26; ; i = &v21 )
      {
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(i);
        if ( (_DWORD)v21 == v26 && v23 == v28 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          return 0LL;
        }
        v13 = v22;
        v20 = v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
        *(_QWORD *)v30 = 0LL;
        v31 = 0LL;
        TabGroupForView = CDesktopPositioner::TryGetTabGroupForView((char *)this - 40, v13, 0LL, 0LL);
        v15 = TabGroupForView;
        if ( TabGroupForView < 0 )
          break;
        v19 = 0LL;
        v18 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        v16 = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
                (CDesktopPositioner *)((char *)this - 40),
                v13,
                (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)v30,
                &v19,
                &v18);
        v6 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAF,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          goto LABEL_23;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        LODWORD(v21) = v21 + 1;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAB,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)TabGroupForView);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v6 = v15;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
    }
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    return v6;
  }
  return 0LL;
}
