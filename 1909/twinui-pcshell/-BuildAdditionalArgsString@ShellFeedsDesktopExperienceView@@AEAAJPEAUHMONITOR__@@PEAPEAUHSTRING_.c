/*
 * XREFs of ?BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING__@@@Z @ 0x18009BEE0
 * Callers:
 *     ?GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18009C744 (-GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x180045210 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009CA54 (-GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009CBE8 (-GetColorPrevalenceEnabled@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetStuckPlace@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18009D21C (-GetStuckPlace@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::BuildAdditionalArgsString(
        ShellFeedsDesktopExperienceView *this,
        HMONITOR a2,
        HSTRING *a3)
{
  HRESULT StuckPlace; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  HSTRING_HEADER *v7; // rdi
  HSTRING_HEADER *v8; // rbx
  ShellFeedsDesktopExperienceView *v9; // rcx
  bool ColorPrevalenceEnabled; // al
  const WCHAR *v11; // rcx
  HSTRING_HEADER *v12; // rbx
  HRESULT v13; // eax
  ShellFeedsDesktopExperienceView *v14; // rcx
  __int64 v15; // rdx
  bool AppsUseLightTheme; // al
  const WCHAR *v17; // rcx
  HSTRING_HEADER *v18; // rax
  HSTRING string; // [rsp+28h] [rbp-89h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-79h] BYREF
  const WCHAR *v23[2]; // [rsp+40h] [rbp-71h] BYREF
  HSTRING_HEADER v24; // [rsp+50h] [rbp-61h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-41h] BYREF
  WCHAR sourceString[40]; // [rsp+98h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v23[1] = (const WCHAR *)-2LL;
  *a3 = 0LL;
  newString = 0LL;
  StuckPlace = ShellFeedsDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v22);
  v5 = StuckPlace;
  if ( StuckPlace >= 0 )
  {
    memset_0(sourceString, 0, 0x44uLL);
    _o__itow_s(v22, sourceString, 34LL, 10LL);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, (const WCHAR **)off_1804514F8);
    WindowsDeleteString(newString);
    newString = 0LL;
    StuckPlace = WindowsConcatString((HSTRING)v8[1].Reserved.Reserved1, (HSTRING)v7[1].Reserved.Reserved1, &newString);
    v5 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v6 = 906LL;
      goto LABEL_5;
    }
    string = 0LL;
    ColorPrevalenceEnabled = ShellFeedsDesktopExperienceView::GetColorPrevalenceEnabled(v9);
    v11 = L"&ColorPrevalenceEnabled=true";
    if ( !ColorPrevalenceEnabled )
      v11 = L"&ColorPrevalenceEnabled=false";
    v23[0] = v11;
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v23);
    WindowsDeleteString(string);
    string = 0LL;
    v13 = WindowsConcatString(newString, (HSTRING)v12[1].Reserved.Reserved1, &string);
    v5 = v13;
    if ( v13 >= 0 )
    {
      AppsUseLightTheme = ShellFeedsDesktopExperienceView::GetAppsUseLightTheme(v14);
      v17 = L"&AppsUseLightTheme=true";
      if ( !AppsUseLightTheme )
        v17 = L"&AppsUseLightTheme=false";
      v23[0] = v17;
      v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v23);
      v13 = WindowsConcatString(string, (HSTRING)v18[1].Reserved.Reserved1, a3);
      v5 = v13;
      if ( v13 >= 0 )
      {
        v5 = 0;
        goto LABEL_16;
      }
      v15 = 915LL;
    }
    else
    {
      v15 = 911LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
LABEL_16:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_17;
  }
  v6 = 903LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)StuckPlace);
LABEL_17:
  WindowsDeleteString(newString);
  return v5;
}
