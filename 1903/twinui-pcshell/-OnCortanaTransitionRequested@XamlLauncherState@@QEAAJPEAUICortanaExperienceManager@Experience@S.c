/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180051930
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180051A18 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180051BC4 (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800524BC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::operator() @ 0x1800836A0 (wil--details--ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___--operator().c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180117764 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  HSTRING string[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+38h] [rbp-48h] BYREF
  char v13; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v15; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v11 = -2LL;
  LODWORD(string[0]) = *((_DWORD *)this + 16);
  string[1] = (HSTRING)this;
  v12 = *(_OWORD *)string;
  v13 = 1;
  switch ( LODWORD(string[0]) )
  {
    case 1:
      *((_DWORD *)this + 16) = 18;
      goto LABEL_7;
    case 2:
      *((_DWORD *)this + 16) = 19;
      goto LABEL_7;
    case 3:
      *((_DWORD *)this + 16) = 20;
      goto LABEL_7;
    case 4:
      *((_DWORD *)this + 16) = 21;
      goto LABEL_7;
  }
  if ( LODWORD(string[0]) != 5 )
  {
    if ( LODWORD(string[0]) == 7 )
    {
      string[0] = 0LL;
      v8 = Microsoft::WRL::Wrappers::HString::Set(
             (Microsoft::WRL::Wrappers::HString *)string,
             L"StartMode=AppTransition",
             0x17u);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v8 = XamlLauncherState::ShowSearchOrCortana(this, string[0]);
        v5 = v8;
        if ( v8 >= 0 )
        {
          WindowsDeleteString(string[0]);
          goto LABEL_7;
        }
        v9 = 2081LL;
      }
      else
      {
        v9 = 2080LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v8,
        (int)string[0]);
      WindowsDeleteString(string[0]);
      goto LABEL_8;
    }
    if ( LODWORD(string[0]) != 12 )
      goto LABEL_7;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=AppTransition",
      0x18u,
      0x17u);
    string[0] = v15;
    v4 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 125, string);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_7;
    v7 = 2097LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4,
      (int)string[0]);
    goto LABEL_8;
  }
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"StartMode=AppTransition", 0x18u, 0x17u);
  v4 = XamlLauncherState::ShowCortanaFromOpenStart(this, v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2087LL;
    goto LABEL_22;
  }
LABEL_7:
  v5 = 0;
LABEL_8:
  wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::operator()(&v12);
  return v5;
}
