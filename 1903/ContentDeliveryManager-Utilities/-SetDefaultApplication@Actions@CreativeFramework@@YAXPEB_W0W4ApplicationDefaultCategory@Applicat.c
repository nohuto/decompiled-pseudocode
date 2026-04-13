/*
 * XREFs of ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x18008A0A0
 * Callers:
 *     ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008A290 (-Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008A078 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetDefaultApplication(const WCHAR *a1, const WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  HSTRING_HEADER *v8; // rbx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, HSTRING); // rdi
  unsigned __int64 v13; // rax
  HRESULT v14; // eax
  __int64 result; // rax
  wil::details::in1diag3 *v16; // rcx
  unsigned int v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 applicationUserModelIdLength; // [rsp+28h] [rbp-D8h] BYREF
  int v19; // [rsp+2Ch] [rbp-D4h]
  const WCHAR *v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v20[1] = (const WCHAR *)-2LL;
  v19 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a1, a2, &applicationUserModelIdLength, applicationUserModelId);
  v7 = retaddr;
  if ( v6 )
    goto LABEL_14;
  v20[0] = L"Windows.Internal.ApplicationDefaults.ApplicationDefaultCategories";
  v19 = 1;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v20);
  *(_QWORD *)v17 = 0LL;
  ActivationFactory = RoGetActivationFactory(v8[1].Reserved.Reserved1, &GUID_a4877229_1b50_4c6b_b916_8eae18584671, v17);
  v10 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x659,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_16:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    goto LABEL_17;
  }
  v11 = *(_QWORD *)v17;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING))(**(_QWORD **)v17 + 64LL);
  v13 = -1LL;
  do
    ++v13;
  while ( applicationUserModelId[v13] );
  if ( v13 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
LABEL_14:
    wil::details::in1diag3::_Throw_Win32(
      v7,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)v6);
    goto LABEL_15;
  }
  if ( (int)v13 + 1 < (unsigned int)v13 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v14 = WindowsCreateStringReference(applicationUserModelId, v13, &hstringHeader, &string);
  if ( v14 < 0 )
    goto LABEL_16;
  result = v12(v11, a3, string);
  v16 = retaddr;
  if ( (int)result < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x30,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18008A284LL);
  }
  if ( *(_QWORD *)v17 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v17 + 16LL))(*(_QWORD *)v17);
  return result;
}
