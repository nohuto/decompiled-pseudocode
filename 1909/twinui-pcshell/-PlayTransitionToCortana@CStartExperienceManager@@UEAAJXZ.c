/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801B7BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180035BB0 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800410B8 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x1800440F8 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x1801B55AC (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x1801B5704 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1801B6B30 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801B6DC0 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CStartExperienceManager::PlayTransitionToCortana(
        CStartExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char v3; // si
  struct CSingleViewShellExperience *v4; // rdx
  int MonitorInformation; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // ecx
  CortanaFlightingHelpers *v10; // rcx
  int DpiForMonitor; // eax
  HSTRING_HEADER *v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // r8
  HSTRING Reserved1; // rdx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  bool v16; // zf
  char v17; // bl
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  HSTRING_HEADER *v20; // rax
  bool v22[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v25; // [rsp+58h] [rbp-B0h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-A8h] BYREF
  HMONITOR hMonitor; // [rsp+70h] [rbp-98h] BYREF
  HWND hWnd; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h]
  HWND *p_hWnd; // [rsp+90h] [rbp-78h]
  char v32; // [rsp+98h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-50h]
  struct tagMONITORINFO mi; // [rsp+C0h] [rbp-48h] BYREF
  HSTRING_HEADER v36; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+18h]

  v30 = -2LL;
  hWnd = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 37), a2);
  EnableWindow(hWnd, 0);
  p_hWnd = &hWnd;
  v3 = 1;
  v32 = 1;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 40),
                         v4,
                         &v26,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v24,
                         v22,
                         (struct tagRECT *)&hstringHeader,
                         &hMonitor);
  if ( MonitorInformation >= 0 )
  {
    v25 = 0LL;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v34,
           (__int64 *)&v25);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      goto LABEL_29;
    }
    *(_QWORD *)&v26.left = v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26.left);
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      MonitorInformation = -2147418113;
      v7 = 2147549183LL;
      v8 = 1111LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v7);
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26.left);
      goto LABEL_28;
    }
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = *((_DWORD *)this + 149);
    v9 = 344;
    if ( mi.rcMonitor.right - mi.rcMonitor.left < 1196 )
      v9 = 320;
    *(float *)&hstringHeader.Reserved.Reserved1 = (float)v9 + 48.0;
    v23 = 0;
    CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x36, (unsigned __int8 *)&v23);
    if ( v23 || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v10) )
    {
      DpiForMonitor = GetDpiForMonitor(hMonitor, 0LL, &v23, v29);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor < 0 )
      {
        v8 = 1120LL;
LABEL_24:
        v7 = (unsigned int)DpiForMonitor;
        goto LABEL_25;
      }
      *(float *)&hstringHeader.Reserved.Reserved1 = (float)(int)GetDefaultCortanaWidthWithoutGutter(&mi.rcMonitor, v23)
                                                  + 48.0;
    }
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_180487BA8);
    DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                      (HSTRING)v12[1].Reserved.Reserved1,
                      v13);
    MonitorInformation = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                             &v36,
                             (const WCHAR **)off_180487BB0)[1].Reserved.Reserved1;
      DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                        Reserved1,
                        v15);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor >= 0 )
      {
        if ( v22[0] )
          v16 = (_DWORD)v24 == 0;
        else
          v16 = (_DWORD)v24 == 2;
        v17 = !v16;
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_180487BB8);
        DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                          (HSTRING)v18[1].Reserved.Reserved1,
                          v19,
                          v17);
        MonitorInformation = DpiForMonitor;
        if ( DpiForMonitor >= 0 )
        {
          v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_180487BF0);
          DpiForMonitor = ExperienceManagerUtils::RaiseReactivatedEvent(
                            *((ExperienceManagerUtils **)this + 37),
                            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this
                                                                                                 + 100),
                            *((HSTRING *)this + 35),
                            *((HSTRING *)this + 36),
                            (HSTRING)v20[1].Reserved.Reserved1,
                            v25);
          MonitorInformation = DpiForMonitor;
          if ( DpiForMonitor >= 0 )
          {
            *((_BYTE *)this + 600) = 1;
            v3 = 0;
            MonitorInformation = 0;
            goto LABEL_27;
          }
          v8 = 1159LL;
        }
        else
        {
          v8 = 1154LL;
        }
      }
      else
      {
        v8 = 1132LL;
      }
    }
    else
    {
      v8 = 1129LL;
    }
    goto LABEL_24;
  }
LABEL_29:
  if ( v3 )
    EnableWindow(hWnd, 1);
  return (unsigned int)MonitorInformation;
}
