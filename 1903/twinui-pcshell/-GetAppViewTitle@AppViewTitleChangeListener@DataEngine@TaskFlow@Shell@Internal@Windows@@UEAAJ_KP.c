/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x180076800
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180076924 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2,
        HSTRING *a3)
{
  char *v4; // rcx
  HSTRING v5; // rax
  HSTRING v6; // rax
  const char *v7; // r9
  __int64 result; // rax
  HSTRING string[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  string[2] = (HSTRING)-2LL;
  *a3 = 0LL;
  string[0] = 0LL;
  v4 = (char *)this - 24;
  try
  {
    v5 = (HSTRING)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 72LL))(v4);
    if ( *((_QWORD *)v5 + 3) >= 8uLL )
      v5 = *(HSTRING *)v5;
    string[1] = v5;
    Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(string);
    std::wstring::_Tidy_deallocate(v10);
    v6 = string[0];
    string[0] = 0LL;
    *a3 = v6;
    WindowsDeleteString(0LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x57,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
                           v7);
  }
  return result;
}
