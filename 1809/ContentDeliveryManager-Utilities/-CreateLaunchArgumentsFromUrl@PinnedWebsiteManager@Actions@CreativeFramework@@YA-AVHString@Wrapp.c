/*
 * XREFs of ?CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@PEB_W@Z @ 0x180095878
 * Callers:
 *     _lambda_2e8bb15b569abf147acfccd9115572b3_::operator() @ 0x180095954 (_lambda_2e8bb15b569abf147acfccd9115572b3_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
WCHAR *__fastcall CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl(
        WCHAR *a1,
        const WCHAR *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  HRESULT v5; // eax
  const WCHAR *v7[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v8; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v9[32]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7[1] = (const WCHAR *)-2LL;
  v7[2] = a1;
  v7[0] = a2;
  *(_QWORD *)a1 = 0LL;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v8, v7);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v9, (const WCHAR **)off_1800F1960);
  WindowsDeleteString(*(HSTRING *)a1);
  *(_QWORD *)a1 = 0LL;
  v5 = WindowsConcatString(*(HSTRING *)(v4 + 24), *(HSTRING *)(v3 + 24), (HSTRING *)a1);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18009594BLL);
  }
  return a1;
}
