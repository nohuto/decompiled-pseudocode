/*
 * XREFs of _anonymous_namespace_::CreateUri @ 0x18017D3E0
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat @ 0x18017E174 (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleCallbackFormat.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ParseUrlAsString @ 0x180181394 (_anonymous_namespace_--ScreenClipOpenUrlParser--ParseUrlAsString.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18017BE2C (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::CreateUri(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v9[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9[1] = -2LL;
  v9[0] = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v10, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         v11,
         v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v9[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, a1, a2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 106LL;
  }
  else
  {
    v6 = 105LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return v5;
}
