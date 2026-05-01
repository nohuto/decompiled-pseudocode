/*
 * XREFs of ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1801C995C
 * Callers:
 *     ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C8490 (-OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180017BC8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180035BB0 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1800505F8 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180062184 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x1801C67D0 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x1801C9FCC (-get@-$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadCo.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualTouchpadExperienceManager::Uncloack(
        CVirtualTouchpadExperienceManager *this,
        struct TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *a2)
{
  __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  HSTRING v18; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19[3]; // [rsp+50h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-19h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1h]
  HSTRING_HEADER pData; // [rsp+88h] [rbp+7h] BYREF
  HSTRING v23; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v19[1] = -2LL;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
                                           this,
                                           lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(v5, 0x400000000000uLL) )
    TlgWrite(v5, &unk_1804E813A, (LPCGUID)(*((_QWORD *)a2 + 6) + 8LL), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService((__int64)v5, v4, v6);
  v7 = CVirtualTouchpadExperienceManager::AnimateFrame((__int64)this, 0, (__int64)this + 672);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C0,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 41) + 40LL))(*((_QWORD *)this + 41), 0LL);
  v12 = v8;
  if ( v8 >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService(v10, v9, v11);
    v13 = CExperienceManagerAnimationHelper::End((CVirtualTouchpadExperienceManager *)((char *)this + 672));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    v18 = 0LL;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v21,
            (__int64 *)&v18);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v19[0] = (__int64)v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"LaunchActivityId", 0x11u, 0x10u);
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)(*((_QWORD *)a2 + 6) + 8LL);
      Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)v19,
        v23,
        v15,
        (__int128 *)&hstringHeader);
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"LaunchActivityId", 0x11u, 0x10u);
      v16 = ExperienceManagerUtils::RaiseReactivatedEvent(
              *((ExperienceManagerUtils **)this + 11),
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 48),
              *((HSTRING *)this + 9),
              *((HSTRING *)this + 10),
              v23,
              v18);
      v12 = v16;
      if ( v16 >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D0,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CB,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  }
  return v12;
}
