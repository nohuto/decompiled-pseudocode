/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x18029B794
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___::Run @ 0x18029CA80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18005EDB8 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??$CortanaNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x180298E30 (--$CortanaNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ??$ShellExperienceHostNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x180299654 (--$ShellExperienceHostNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ?GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@@Z @ 0x1803B21E8 (-GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  const char *v0; // r9
  void *v2; // rbx
  const char *v3; // r9
  unsigned int LastError; // ebx
  HSTRING_HEADER *v5; // rbx
  HSTRING *v6; // r9
  HSTRING_HEADER *v7; // rbx
  HSTRING *v8; // r9
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  LPWSTR StringSid; // [rsp+40h] [rbp-C8h] BYREF
  int PackageFullNameFromAppIdForUser; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD ReturnLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v16; // [rsp+80h] [rbp-88h]
  HSTRING_HEADER v17; // [rsp+88h] [rbp-80h] BYREF
  _QWORD TokenInformation[12]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+18h]

  v14[1] = (const WCHAR *)-2LL;
  memset_0(TokenInformation, 0, 0x54uLL);
  if ( !GetTokenInformation((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenUser, TokenInformation, 0x54u, ReturnLength) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1EF,
             (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
             v0);
  v2 = (void *)TokenInformation[0];
  StringSid = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&StringSid,
    0LL);
  if ( ConvertSidToStringSidW(v2, &StringSid) )
  {
    string = (HSTRING)StringSid;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)&string);
    WindowsDeleteString(0LL);
    string = 0LL;
    PackageFullNameFromAppIdForUser = DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
                                        (DevPlat::Shared::StateRepository *)v5[1].Reserved.Reserved1,
                                        v16,
                                        (HSTRING)&string,
                                        v6);
    if ( PackageFullNameFromAppIdForUser < 0 )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long &>((__int64)&PackageFullNameFromAppIdForUser);
    v14[0] = StringSid;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
      0x32u,
      0x31u);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, v14);
    WindowsDeleteString(string);
    string = 0LL;
    v12 = DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
            (DevPlat::Shared::StateRepository *)v7[1].Reserved.Reserved1,
            v16,
            (HSTRING)&string,
            v8);
    if ( v12 < 0 )
      StartWindowTelemetry::CortanaNotInstalled<long &>((__int64)&v12);
    LastError = 0;
    WindowsDeleteString(string);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1F3,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                  v3);
  }
  if ( StringSid )
    CoTaskMemFree(StringSid);
  return LastError;
}
