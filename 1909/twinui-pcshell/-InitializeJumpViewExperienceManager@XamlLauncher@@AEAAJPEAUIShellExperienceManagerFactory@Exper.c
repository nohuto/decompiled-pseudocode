/*
 * XREFs of ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180312420
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180313860 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::InitializeJumpViewExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, GUID *, __int64 *); // rsi
  __int64 v12[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, __int64 *))(*(_QWORD *)a2 + 48LL);
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v13,
    L"Windows.Internal.ShellExperience.JumpView",
    0x2Au,
    0x29u);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  v5 = v4(a2, v14, v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (__int64 *)((char *)this + 136);
    v9 = v12[0];
    v10 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    v5 = v10(v9, &GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0, v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 506LL;
  }
  else
  {
    v7 = 505LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v6;
}
