/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001607C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180016A9C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180016C78 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180016D60 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027064 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003EC80 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x18007145C (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x180071548 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
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
  int v7; // ecx
  CortanaFlightingHelpers *v8; // rcx
  int DpiForMonitor; // eax
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  HSTRING Reserved1; // rdx
  __int64 v13; // r8
  bool v14; // zf
  char v15; // bl
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r8
  HSTRING_HEADER *v18; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
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
  hWnd = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 36), a2);
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
           &v25);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x416,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_17;
    }
    *(_QWORD *)&v26.left = v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26.left);
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      MonitorInformation = -2147418113;
      v20 = 2147549183LL;
      v21 = 1054LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v20);
      goto LABEL_16;
    }
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = *((_DWORD *)this + 147);
    v7 = 344;
    if ( mi.rcMonitor.right - mi.rcMonitor.left < 1196 )
      v7 = 320;
    *(float *)&hstringHeader.Reserved.Reserved1 = (float)v7 + 48.0;
    v23 = 0;
    CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x1C, (__int64)&v23);
    if ( v23 || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v8) )
    {
      DpiForMonitor = GetDpiForMonitor(hMonitor, 0LL, &v23, v29);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor < 0 )
      {
        v21 = 1063LL;
LABEL_31:
        v20 = (unsigned int)DpiForMonitor;
        goto LABEL_32;
      }
      *(float *)&hstringHeader.Reserved.Reserved1 = (float)(int)GetDefaultCortanaWidthWithoutGutter(&mi.rcMonitor, v23)
                                                  + 48.0;
    }
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)&off_1803C8748);
    DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                      (HSTRING)v10[1].Reserved.Reserved1,
                      v11,
                      (__int64)hstringHeader.Reserved.Reserved1);
    MonitorInformation = DpiForMonitor;
    if ( DpiForMonitor < 0 )
    {
      v21 = 1072LL;
    }
    else
    {
      Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                             &v36,
                             (const WCHAR **)off_1803C8740)[1].Reserved.Reserved1;
      DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                        Reserved1,
                        v13);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor < 0 )
      {
        v21 = 1075LL;
      }
      else
      {
        if ( v22[0] )
          v14 = (_DWORD)v24 == 0;
        else
          v14 = (_DWORD)v24 == 2;
        v15 = !v14;
        v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_1803C8738);
        DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                          (HSTRING)v16[1].Reserved.Reserved1,
                          v17,
                          v15);
        MonitorInformation = DpiForMonitor;
        if ( DpiForMonitor < 0 )
        {
          v21 = 1097LL;
        }
        else
        {
          v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_1803C8730);
          DpiForMonitor = ExperienceManagerUtils::RaiseReactivatedEvent(
                            *((ExperienceManagerUtils **)this + 36),
                            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this
                                                                                                 + 98),
                            *((HSTRING *)this + 34),
                            *((HSTRING *)this + 35),
                            (HSTRING)v18[1].Reserved.Reserved1,
                            v25);
          MonitorInformation = DpiForMonitor;
          if ( DpiForMonitor >= 0 )
          {
            *((_BYTE *)this + 592) = 1;
            v3 = 0;
            MonitorInformation = 0;
LABEL_16:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26.left);
LABEL_17:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
            goto LABEL_18;
          }
          v21 = 1102LL;
        }
      }
    }
    goto LABEL_31;
  }
LABEL_18:
  if ( v3 )
    EnableWindow(hWnd, 1);
  return (unsigned int)MonitorInformation;
}
