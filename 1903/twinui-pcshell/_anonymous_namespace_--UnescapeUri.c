/*
 * XREFs of _anonymous_namespace_::UnescapeUri @ 0x1801B349C
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat @ 0x1801AD83C (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleCallbackFormat.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::UnescapeUri(__int64 a1, HSTRING *a2)
{
  __int64 v4; // rbx
  int ActivationFactory; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, HSTRING *); // rdi
  __int64 v11[2]; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11[1] = -2LL;
  v11[0] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = v13;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  ActivationFactory = RoGetActivationFactory(v4, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, v11);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v8 = v11[0];
    v9 = *(__int64 (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v11[0] + 48LL);
    WindowsDeleteString(*a2);
    *a2 = 0LL;
    ActivationFactory = v9(v8, a1, a2);
    v6 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 119LL;
  }
  else
  {
    v7 = 117LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  return v6;
}
