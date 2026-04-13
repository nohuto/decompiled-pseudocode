/*
 * XREFs of ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x1800882E0
 * Callers:
 *     ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800884F0 (-Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800882B8 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetDefaultApplication(const WCHAR *a1, const WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  Microsoft::WRL::Details *v15; // rcx
  unsigned int v16; // eax
  UINT32 v17; // edx
  HRESULT v18; // eax
  __int64 result; // rax
  unsigned int v20[2]; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 applicationUserModelIdLength; // [rsp+28h] [rbp-D8h] BYREF
  int v22; // [rsp+2Ch] [rbp-D4h]
  const WCHAR *v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v23[1] = (const WCHAR *)-2LL;
  v22 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a1, a2, &applicationUserModelIdLength, applicationUserModelId);
  v7 = retaddr;
  if ( v6 )
    goto LABEL_19;
  v23[0] = L"Windows.Internal.ApplicationDefaults.ApplicationDefaultCategories";
  v22 = 1;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v23);
  *(_QWORD *)v20 = 0LL;
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v8 + 24), &GUID_a4877229_1b50_4c6b_b916_8eae18584671, v20);
  v10 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x669,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_21;
  }
  v11 = *(_QWORD *)v20;
  v12 = -1LL;
  do
    ++v12;
  while ( applicationUserModelId[v12] );
  v13 = -1;
  v14 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v14 = v12;
  v15 = v12 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0LL;
  if ( v12 > 0xFFFFFFFF )
  {
LABEL_21:
    Microsoft::WRL::Details::RaiseException(v15);
    __debugbreak();
  }
  v16 = v14 + 1;
  if ( v14 + 1 >= v14 )
    v13 = v14 + 1;
  if ( v16 < v14 )
  {
    Microsoft::WRL::Details::RaiseException(v16 < v14 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v17 = v13 - 1;
  if ( v14 < v13 )
    v17 = v14;
  v18 = WindowsCreateStringReference(applicationUserModelId, v17, &hstringHeader, &string);
  if ( v18 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    JUMPOUT(0x1800884E8LL);
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING))(*(_QWORD *)v11 + 64LL))(v11, a3, string);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)(unsigned int)result);
LABEL_19:
    wil::details::in1diag3::_Throw_Win32(
      v7,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)v6);
    goto LABEL_20;
  }
  if ( *(_QWORD *)v20 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v20 + 16LL))(*(_QWORD *)v20);
  return result;
}
