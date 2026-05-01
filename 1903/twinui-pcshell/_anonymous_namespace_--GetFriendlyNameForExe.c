/*
 * XREFs of _anonymous_namespace_::GetFriendlyNameForExe @ 0x18033E388
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033EB38 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180226D00 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?DecodeRelativePath@@YAJPEA_W_KPEB_W@Z @ 0x18033DFA4 (-DecodeRelativePath@@YAJPEA_W_KPEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=3
wchar_t *__fastcall anonymous_namespace_::GetFriendlyNameForExe(wchar_t *a1, const wchar_t *a2)
{
  int v3; // eax
  __int64 v4; // rax
  void *v5; // rcx
  HRESULT v6; // eax
  HRESULT v7; // eax
  LPVOID pv; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+30h] [rbp-D8h]
  void *ppv; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v12[3]; // [rsp+40h] [rbp-C8h] BYREF
  WCHAR pszPath[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v12[1] = (const wchar_t *)-2LL;
  v12[2] = a1;
  LODWORD(v10) = 0;
  v3 = DecodeRelativePath(pszPath, (__int64)a2, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      92LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  *(_QWORD *)a1 = 0LL;
  LODWORD(v10) = 1;
  ppv = 0LL;
  if ( SHCreateItemFromParsingName(pszPath, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &ppv) >= 0 )
  {
    pv = 0LL;
    v4 = *(_QWORD *)ppv;
    pv = 0LL;
    (*(void (__fastcall **)(void *, const PROPERTYKEY *, LPVOID *))(v4 + 136))(ppv, &PKEY_FileDescription, &pv);
    v5 = pv;
    if ( pv )
    {
      v12[0] = (const wchar_t *)pv;
      v6 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)a1, v12);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          105LL,
          (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      v5 = pv;
    }
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( !*(_QWORD *)a1 )
  {
    v12[0] = PathFindFileNameW(pszPath);
    v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)a1, v12);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        111LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
  return a1;
}
