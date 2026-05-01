/*
 * XREFs of ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1802633D8
 * Callers:
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x180262EA4 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180025808 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800D6DC0 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180140724 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180263C48 (-GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180263D84 (-GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?IsTabbableWindowBetweenInZOrder@TabGroupingPolicy@@YA_NPEAUHWND__@@0@Z @ 0x180263E6C (-IsTabbableWindowBetweenInZOrder@TabGroupingPolicy@@YA_NPEAUHWND__@@0@Z.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@2@_K@Z @ 0x180263F88 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference.c)
 */

void __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::ChooseTargetViewUsingHeuristic(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this,
        struct IApplicationViewCollection *a2)
{
  __int64 v4; // rcx
  HWND TabGroupTargetWindow; // r14
  void (__fastcall *v6)(struct IApplicationViewCollection *, HWND, char *); // rdi
  HSTRING_HEADER *v7; // rbx
  int PropVal; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, _QWORD, PCWSTR, _QWORD, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  void (__fastcall *v15)(struct IApplicationViewCollection *, _QWORD, DWORD *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  TabGroupingPolicy *v18; // rbx
  __int64 (__fastcall *v19)(TabGroupingPolicy *, __int64 *); // rdi
  int v20; // eax
  HWND TargetWindow; // rax
  HWND v22; // rbx
  HWND v23; // r8
  TabGroupingPolicy *v24; // r14
  void (__fastcall *v25)(struct IApplicationViewCollection *, TabGroupingPolicy *, char *); // rdi
  DWORD dwProcessId[2]; // [rsp+48h] [rbp-39h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-31h] BYREF
  HSTRING string; // [rsp+58h] [rbp-29h]
  int v29[2]; // [rsp+60h] [rbp-21h] BYREF
  HWND v30; // [rsp+68h] [rbp-19h] BYREF
  TabGroupingPolicy *v31; // [rsp+70h] [rbp-11h] BYREF
  __int64 v32; // [rsp+78h] [rbp-9h] BYREF
  __int64 v33[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER lParam; // [rsp+90h] [rbp+Fh] BYREF
  TabGroupingPolicy **v35; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v33[1] = -2LL;
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
      v6 = *(void (__fastcall **)(struct IApplicationViewCollection *, HWND, char *))(*(_QWORD *)a2 + 48LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 4);
      v6(a2, TabGroupTargetWindow, (char *)this + 32);
      return;
    }
    string = 0LL;
    if ( !*(_QWORD *)this )
      goto LABEL_32;
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&lParam, (const WCHAR **)off_180487E50);
    WindowsDeleteString(string);
    *(_QWORD *)dwProcessId = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                this,
                (HSTRING)v7[1].Reserved.Reserved1,
                (struct Windows::Foundation::IPropertyValue **)dwProcessId);
    if ( PropVal >= 0 )
    {
      v9 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(*(__int64 *)dwProcessId);
      PropVal = v9;
      if ( v9 >= 0 )
      {
        v10 = *(_QWORD *)dwProcessId;
        if ( *(_QWORD *)dwProcessId )
        {
          *(_QWORD *)dwProcessId = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        PropVal = 0;
LABEL_13:
        if ( PropVal < 0 )
        {
LABEL_32:
          v33[0] = 0LL;
          v20 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(**((_QWORD **)this + 1) + 24LL))(
                  *((_QWORD *)this + 1),
                  &IID_IVirtualDesktopManager,
                  &GUID_a5cd92ff_29be_454c_8d04_d82879fb3f1b,
                  v33);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x11A,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
              (const char *)(unsigned int)v20);
          TargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(this);
          v22 = TargetWindow;
          if ( TargetWindow )
          {
            if ( GetWindowThreadProcessId(TargetWindow, dwProcessId) )
            {
              *(_QWORD *)v29 = v33[0];
              v30 = v22;
              pcbData = dwProcessId[0];
              v31 = 0LL;
              lParam.Reserved.Reserved1 = &pcbData;
              *(_QWORD *)&lParam.Reserved.Reserved2[8] = &v30;
              *(_QWORD *)&lParam.Reserved.Reserved2[16] = v29;
              v35 = &v31;
              EnumWindows(
                (WNDENUMPROC)lambda_a79dac1be2c40788dead125dd22402f9_::_lambda_invoker_cdecl_,
                (LPARAM)&lParam);
              v24 = v31;
              if ( v31 )
              {
                if ( !TabGroupingPolicy::IsTabbableWindowBetweenInZOrder(v31, v22, v23) )
                {
                  v25 = *(void (__fastcall **)(struct IApplicationViewCollection *, TabGroupingPolicy *, char *))(*(_QWORD *)a2 + 48LL);
                  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 4);
                  v25(a2, v24, (char *)this + 32);
                }
              }
            }
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v33);
          goto LABEL_29;
        }
        v30 = 0LL;
        v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, HWND *))(**((_QWORD **)this + 1) + 24LL))(
                *((_QWORD *)this + 1),
                &IID_IAppViewManager,
                &GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086,
                &v30);
        if ( v11 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFF,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
            (const char *)(unsigned int)v11);
LABEL_31:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
          goto LABEL_32;
        }
        *(_QWORD *)v29 = 0LL;
        v12 = (__int64)v30;
        v13 = *(int (__fastcall **)(__int64, _QWORD, PCWSTR, _QWORD, int *))(*(_QWORD *)v30 + 56LL);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( v13(v12, 0LL, StringRawBuffer, 0LL, v29) < 0 )
        {
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v29);
          goto LABEL_31;
        }
        *(_QWORD *)dwProcessId = 0LL;
        v15 = *(void (__fastcall **)(struct IApplicationViewCollection *, _QWORD, DWORD *))(*(_QWORD *)a2 + 56LL);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)dwProcessId);
        v15(a2, *(_QWORD *)v29, dwProcessId);
        v31 = 0LL;
        v32 = 0LL;
        pcbData = 0;
        v16 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, TabGroupingPolicy **))(**((_QWORD **)this + 1) + 24LL))(
                *((_QWORD *)this + 1),
                &SID_VirtualDesktopManager,
                &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                &v31);
        if ( v16 >= 0 )
        {
          v18 = v31;
          v19 = *(__int64 (__fastcall **)(TabGroupingPolicy *, __int64 *))(*(_QWORD *)v31 + 48LL);
          if ( v32 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          v16 = v19(v18, &v32);
          if ( v16 >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, DWORD *))(*(_QWORD *)v32 + 24LL))(
                    v32,
                    *(_QWORD *)dwProcessId,
                    &pcbData);
            if ( v16 >= 0 )
            {
              if ( !pcbData )
              {
LABEL_28:
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v32);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v31);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)dwProcessId);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v29);
                wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
LABEL_29:
                WindowsDeleteString(string);
                return;
              }
LABEL_27:
              wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
                (__int64 *)this + 4,
                *(__int64 *)dwProcessId);
              goto LABEL_28;
            }
            v17 = 271LL;
          }
          else
          {
            v17 = 270LL;
          }
        }
        else
        {
          v17 = 269LL;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_27;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)dwProcessId);
    goto LABEL_13;
  }
  LOBYTE(v4) = 1;
  wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::ReportVariantUsageToService(v4, 0LL);
}
