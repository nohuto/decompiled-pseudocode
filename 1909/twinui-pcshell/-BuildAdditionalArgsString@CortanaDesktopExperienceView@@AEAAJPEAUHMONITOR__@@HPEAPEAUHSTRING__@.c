/*
 * XREFs of ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180041BC8
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180049AF0 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180043F88 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x180045210 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180045580 (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800813DC (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetAppsUseLightTheme@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180081488 (-GetAppsUseLightTheme@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z @ 0x180081534 (-IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z.c)
 *     ?GetHideFileExtensionsEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180083900 (-GetHideFileExtensionsEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180085544 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CortanaDesktopExperienceView::BuildAdditionalArgsString(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        HMONITOR a3,
        HSTRING *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rbx
  HRESULT v9; // eax
  CortanaDesktopExperienceView *v10; // rcx
  unsigned int v11; // ebx
  bool ColorPrevalenceEnabled; // al
  const wchar_t *v13; // rcx
  __int64 v14; // rbx
  HRESULT v15; // eax
  bool IsCortiniSupported; // al
  const wchar_t *v17; // rcx
  __int64 v18; // rbx
  HRESULT v19; // eax
  HRESULT StuckPlace; // eax
  __int64 v21; // rbx
  HRESULT v22; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  const wchar_t *v24; // rax
  __int64 v25; // rbx
  HMONITOR v26; // rax
  HRESULT v27; // eax
  const wchar_t *v28; // rax
  __int64 v29; // rbx
  CortanaDesktopExperienceView *v30; // rcx
  bool AppsUseLightTheme; // al
  const wchar_t *v32; // rcx
  __int64 v33; // rbx
  HRESULT v34; // eax
  CortanaDesktopExperienceView *v35; // rcx
  bool HideFileExtensionsEnabled; // al
  const wchar_t *v37; // rcx
  __int64 v38; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v45; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v46; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v47; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v48; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string2; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v50; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING newString; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v52; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING string; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  HSTRING_HEADER v56; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string1; // [rsp+B8h] [rbp-48h]
  WCHAR sourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v60[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v55 = -2LL;
  *a4 = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, a3);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, sourceString);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&SpeechTextInputHeight=", 0x18u, 0x17u);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = WindowsConcatString(string1, *(HSTRING *)(v8 + 24), &string);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E0,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v9,
      v44);
    goto LABEL_33;
  }
  newString = 0LL;
  ColorPrevalenceEnabled = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v10);
  v13 = L"&ColorPrevalenceEnabled=true";
  if ( !ColorPrevalenceEnabled )
    v13 = L"&ColorPrevalenceEnabled=false";
  v45 = v13;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, &v45);
  WindowsDeleteString(newString);
  newString = 0LL;
  v15 = WindowsConcatString(string, *(HSTRING *)(v14 + 24), &newString);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v15,
      v44);
    goto LABEL_32;
  }
  v50 = 0LL;
  IsCortiniSupported = CortanaDesktopExperienceView::IsCortiniSupported(this, a2);
  v17 = L"&PersonaOnlySupported=true";
  if ( !IsCortiniSupported )
    v17 = L"&PersonaOnlySupported=false";
  v45 = v17;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, &v45);
  WindowsDeleteString(v50);
  v50 = 0LL;
  v19 = WindowsConcatString(newString, *(HSTRING *)(v18 + 24), &v50);
  v11 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EA,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v19,
      v44);
    goto LABEL_31;
  }
  string2 = 0LL;
  StuckPlace = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v54);
  v11 = StuckPlace;
  if ( StuckPlace < 0 )
  {
    v40 = 1775LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)StuckPlace,
      v44);
    goto LABEL_30;
  }
  memset_0(v60, 0, 0x44uLL);
  _o__itow_s(v54, v60, 34LL, 10LL);
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, v60);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
  WindowsDeleteString(string2);
  string2 = 0LL;
  StuckPlace = WindowsConcatString(string1, *(HSTRING *)(v21 + 24), &string2);
  v11 = StuckPlace;
  if ( StuckPlace < 0 )
  {
    v40 = 1778LL;
    goto LABEL_39;
  }
  v52 = 0LL;
  WindowsDeleteString(0LL);
  v52 = 0LL;
  v22 = WindowsConcatString(v50, string2, &v52);
  v11 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v22,
      v44);
    goto LABEL_29;
  }
  v48 = 0LL;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, a2, (bool *)&v44);
  v11 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    v41 = 1786LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible,
      v44);
    goto LABEL_28;
  }
  v24 = L"&SearchBoxInTaskbar=true";
  if ( !(_BYTE)v44 )
    v24 = L"&SearchBoxInTaskbar=false";
  v45 = v24;
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, &v45);
  WindowsDeleteString(v48);
  v48 = 0LL;
  IsTraySearchBoxVisible = WindowsConcatString(v52, *(HSTRING *)(v25 + 24), &v48);
  v11 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    v41 = 1788LL;
    goto LABEL_43;
  }
  v47 = 0LL;
  v45 = 0LL;
  v26 = MonitorFromPoint(0LL, 1u);
  v27 = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, v26, (bool *)&v44);
  v11 = v27;
  if ( v27 < 0 )
  {
    v42 = 1795LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v27,
      v44);
    goto LABEL_27;
  }
  v28 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
  if ( !(_BYTE)v44 )
    v28 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
  v45 = v28;
  v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, &v45);
  WindowsDeleteString(v47);
  v47 = 0LL;
  v27 = WindowsConcatString(v48, *(HSTRING *)(v29 + 24), &v47);
  v11 = v27;
  if ( v27 < 0 )
  {
    v42 = 1797LL;
    goto LABEL_46;
  }
  v46 = 0LL;
  AppsUseLightTheme = CortanaDesktopExperienceView::GetAppsUseLightTheme(v30);
  v32 = L"&AppsUseLightTheme=true";
  if ( !AppsUseLightTheme )
    v32 = L"&AppsUseLightTheme=false";
  v45 = v32;
  v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, &v45);
  WindowsDeleteString(v46);
  v46 = 0LL;
  v34 = WindowsConcatString(v47, *(HSTRING *)(v33 + 24), &v46);
  v11 = v34;
  if ( v34 < 0 )
  {
    v43 = 1802LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v34,
      v44);
    goto LABEL_26;
  }
  HideFileExtensionsEnabled = CortanaDesktopExperienceView::GetHideFileExtensionsEnabled(v35);
  v37 = L"&HideFileExtensions=true";
  if ( !HideFileExtensionsEnabled )
    v37 = L"&HideFileExtensions=false";
  v45 = v37;
  v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, &v45);
  v34 = WindowsConcatString(v46, *(HSTRING *)(v38 + 24), a4);
  v11 = v34;
  if ( v34 < 0 )
  {
    v43 = 1806LL;
    goto LABEL_49;
  }
  v11 = 0;
LABEL_26:
  WindowsDeleteString(v46);
  v46 = 0LL;
LABEL_27:
  WindowsDeleteString(v47);
  v47 = 0LL;
LABEL_28:
  WindowsDeleteString(v48);
  v48 = 0LL;
LABEL_29:
  WindowsDeleteString(v52);
  v52 = 0LL;
LABEL_30:
  WindowsDeleteString(string2);
  string2 = 0LL;
LABEL_31:
  WindowsDeleteString(v50);
  v50 = 0LL;
LABEL_32:
  WindowsDeleteString(newString);
  newString = 0LL;
LABEL_33:
  WindowsDeleteString(string);
  return v11;
}
