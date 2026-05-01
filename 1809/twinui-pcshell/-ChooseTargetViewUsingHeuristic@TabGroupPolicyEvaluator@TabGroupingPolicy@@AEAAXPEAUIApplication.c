/*
 * XREFs of ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801F29B0
 * Callers:
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1801F2484 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002785C (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x18009DF9C (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 *     ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x1801F325C (-GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x1801F3398 (-GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?IsTabbableWindowBetweenInZOrder@TabGroupingPolicy@@YA_NPEAUHWND__@@0@Z @ 0x1801F3480 (-IsTabbableWindowBetweenInZOrder@TabGroupingPolicy@@YA_NPEAUHWND__@@0@Z.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@2@_K@Z @ 0x1801F359C (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference.c)
 */

void __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::ChooseTargetViewUsingHeuristic(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this,
        struct IApplicationViewCollection *a2)
{
  __int64 v4; // rcx
  HWND TabGroupTargetWindow; // rsi
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  TabGroupingPolicy *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  HWND TargetWindow; // rax
  HWND v22; // rbx
  HWND v23; // r8
  TabGroupingPolicy *v24; // rsi
  DWORD dwProcessId[2]; // [rsp+48h] [rbp-39h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-31h] BYREF
  HSTRING string; // [rsp+58h] [rbp-29h]
  int v28[2]; // [rsp+60h] [rbp-21h] BYREF
  HWND v29; // [rsp+68h] [rbp-19h] BYREF
  TabGroupingPolicy *v30; // [rsp+70h] [rbp-11h] BYREF
  __int64 v31; // [rsp+78h] [rbp-9h] BYREF
  __int64 v32[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER lParam; // [rsp+90h] [rbp+Fh] BYREF
  TabGroupingPolicy **v34; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v32[1] = -2LL;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\TabShellAppSettings",
          L"ForceNewTabGroup",
          0x10u,
          0LL,
          dwProcessId,
          &pcbData) )
  {
    if ( dwProcessId[0] )
      return;
    TabGroupTargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTabGroupTargetWindow(this);
    if ( TabGroupTargetWindow )
    {
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 4);
      (*(void (__fastcall **)(struct IApplicationViewCollection *, HWND, char *))(*(_QWORD *)a2 + 48LL))(
        a2,
        TabGroupTargetWindow,
        (char *)this + 32);
      return;
    }
    string = 0LL;
    if ( !*(_QWORD *)this )
      goto LABEL_32;
    WindowsDeleteString(0LL);
    string = 0LL;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &lParam,
                           (const WCHAR **)off_180400298)[1].Reserved.Reserved1;
    string = 0LL;
    *(_QWORD *)dwProcessId = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                this,
                Reserved1,
                (struct Windows::Foundation::IPropertyValue **)dwProcessId);
    if ( PropVal >= 0 )
    {
      v8 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(*(__int64 *)dwProcessId);
      PropVal = v8;
      if ( v8 >= 0 )
      {
        v9 = *(_QWORD *)dwProcessId;
        if ( *(_QWORD *)dwProcessId )
        {
          *(_QWORD *)dwProcessId = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        PropVal = 0;
LABEL_13:
        if ( PropVal < 0 )
        {
LABEL_32:
          v19 = *((_QWORD *)this + 1);
          v32[0] = 0LL;
          v20 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v19 + 24LL))(
                  v19,
                  &IID_IVirtualDesktopManager,
                  &GUID_a5cd92ff_29be_454c_8d04_d82879fb3f1b,
                  v32);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              282LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
              (const char *)(unsigned int)v20);
          TargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(this);
          v22 = TargetWindow;
          if ( TargetWindow )
          {
            if ( GetWindowThreadProcessId(TargetWindow, dwProcessId) )
            {
              *(_QWORD *)v28 = v32[0];
              v29 = v22;
              pcbData = dwProcessId[0];
              v30 = 0LL;
              lParam.Reserved.Reserved1 = &pcbData;
              *(_QWORD *)&lParam.Reserved.Reserved2[8] = &v29;
              *(_QWORD *)&lParam.Reserved.Reserved2[16] = v28;
              v34 = &v30;
              EnumWindows(
                (WNDENUMPROC)lambda_cc438cded295d7f5aa1a2d545e8da4a6_::_lambda_invoker_cdecl_,
                (LPARAM)&lParam);
              v24 = v30;
              if ( v30 )
              {
                if ( !TabGroupingPolicy::IsTabbableWindowBetweenInZOrder(v30, v22, v23) )
                {
                  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 4);
                  (*(void (__fastcall **)(struct IApplicationViewCollection *, TabGroupingPolicy *, char *))(*(_QWORD *)a2 + 48LL))(
                    a2,
                    v24,
                    (char *)this + 32);
                }
              }
            }
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v32);
          goto LABEL_29;
        }
        v10 = *((_QWORD *)this + 1);
        v29 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, HWND *))(*(_QWORD *)v10 + 24LL))(
                v10,
                &IID_IAppViewManager,
                &GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086,
                &v29);
        if ( v11 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            255LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
            (const char *)(unsigned int)v11);
LABEL_31:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v29);
          goto LABEL_32;
        }
        v12 = (__int64)v29;
        *(_QWORD *)v28 = 0LL;
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( (*(int (__fastcall **)(__int64, _QWORD, PCWSTR, _QWORD, int *))(*(_QWORD *)v12 + 56LL))(
               v12,
               0LL,
               StringRawBuffer,
               0LL,
               v28) < 0 )
        {
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v28);
          goto LABEL_31;
        }
        v31 = 0LL;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v31);
        (*(void (__fastcall **)(struct IApplicationViewCollection *, _QWORD, __int64 *))(*(_QWORD *)a2 + 56LL))(
          a2,
          *(_QWORD *)v28,
          &v31);
        *(_QWORD *)dwProcessId = 0LL;
        pcbData = 0;
        v14 = *((_QWORD *)this + 1);
        v30 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, TabGroupingPolicy **))(*(_QWORD *)v14 + 24LL))(
                v14,
                &SID_VirtualDesktopManager,
                &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                &v30);
        if ( v15 >= 0 )
        {
          v17 = v30;
          v18 = *(_QWORD *)dwProcessId;
          *(_QWORD *)dwProcessId = 0LL;
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          v15 = (*(__int64 (__fastcall **)(TabGroupingPolicy *, DWORD *))(*(_QWORD *)v17 + 48LL))(v17, dwProcessId);
          if ( v15 >= 0 )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, DWORD *))(**(_QWORD **)dwProcessId + 24LL))(
                    *(_QWORD *)dwProcessId,
                    v31,
                    &pcbData);
            if ( v15 >= 0 )
            {
              if ( !pcbData )
              {
LABEL_28:
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)dwProcessId);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v31);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v28);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v29);
LABEL_29:
                WindowsDeleteString(string);
                return;
              }
LABEL_27:
              wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=(
                (__int64 *)this + 4,
                v31);
              goto LABEL_28;
            }
            v16 = 271LL;
          }
          else
          {
            v16 = 270LL;
          }
        }
        else
        {
          v16 = 269LL;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v16,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_27;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)dwProcessId);
    goto LABEL_13;
  }
  LOBYTE(v4) = 1;
  wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::ReportVariantUsageToService(v4, 0LL);
}
