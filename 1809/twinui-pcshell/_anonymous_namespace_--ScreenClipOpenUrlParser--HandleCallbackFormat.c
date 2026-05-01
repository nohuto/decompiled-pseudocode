/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat @ 0x18017E174
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry @ 0x18017E36C (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleDecoderEntry.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateUri @ 0x18017D3E0 (_anonymous_namespace_--CreateUri.c)
 *     _anonymous_namespace_::HStringToHWND @ 0x18017E0D4 (_anonymous_namespace_--HStringToHWND.c)
 *     _anonymous_namespace_::UnescapeUri @ 0x180183114 (_anonymous_namespace_--UnescapeUri.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat(_OWORD *a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v13[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13[1] = (HSTRING)-2LL;
  v13[0] = 0LL;
  v3 = anonymous_namespace_::UnescapeUri(*a2, v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = 0LL;
    v5 = anonymous_namespace_::CreateUri((__int64)v13[0], &v12);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x649,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      goto LABEL_14;
    }
    v11 = 0LL;
    v6 = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 120LL))(v6, &v11);
    v4 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      goto LABEL_13;
    }
    v8 = v11;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"viewId", 7u, 6u);
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !(*(unsigned int (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v8 + 48LL))(v8, v15, &string) )
    {
      v4 = -2147024809;
      hstringHeader.Reserved.Reserved1 = 0LL;
      if ( !anonymous_namespace_::HStringToHWND((__int64)&string, &hstringHeader) )
      {
LABEL_11:
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_12;
      }
      hstringHeader.Reserved.Reserved2[8] = 1;
      *a1 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
    }
    v4 = 0;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x646,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_14:
  WindowsDeleteString(v13[0]);
  return v4;
}
