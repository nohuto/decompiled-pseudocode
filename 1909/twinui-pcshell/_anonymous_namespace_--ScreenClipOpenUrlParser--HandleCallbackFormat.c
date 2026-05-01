/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat @ 0x1801CC764
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry @ 0x1801CC95C (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleDecoderEntry.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateUri @ 0x1801CB9A0 (_anonymous_namespace_--CreateUri.c)
 *     _anonymous_namespace_::HStringToHWND @ 0x1801CC6C4 (_anonymous_namespace_--HStringToHWND.c)
 *     _anonymous_namespace_::UnescapeUri @ 0x1801D240C (_anonymous_namespace_--UnescapeUri.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat(_OWORD *a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  unsigned int (__fastcall *v10)(__int64, __int64, HSTRING *); // rdi
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v15[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15[1] = (HSTRING)-2LL;
  v15[0] = 0LL;
  v3 = anonymous_namespace_::UnescapeUri(*a2, v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v14 = 0LL;
    v5 = anonymous_namespace_::CreateUri((__int64)v15[0], &v14);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_14;
    }
    v13 = 0LL;
    v6 = v14;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 120LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v8 = v7(v6, &v13);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6EB,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      goto LABEL_13;
    }
    string = 0LL;
    v9 = v13;
    v10 = *(unsigned int (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v13 + 48LL);
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"viewId", 7u, 6u);
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !v10(v9, v17, &string) )
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
    (void *)0x6E5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_14:
  WindowsDeleteString(v15[0]);
  return v4;
}
