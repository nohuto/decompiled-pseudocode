/*
 * XREFs of _anonymous_namespace_::UnescapeUri @ 0x180183114
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat @ 0x18017E174 (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleCallbackFormat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::UnescapeUri(__int64 a1, HSTRING *a2)
{
  __int64 v4; // rbx
  int ActivationFactory; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10[1] = -2LL;
  v10[0] = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = v12;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  ActivationFactory = RoGetActivationFactory(v4, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, v10);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v8 = v10[0];
    WindowsDeleteString(*a2);
    *a2 = 0LL;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v8 + 48LL))(v8, a1, a2);
    v6 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 116LL;
  }
  else
  {
    v7 = 114LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return v6;
}
