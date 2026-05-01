/*
 * XREFs of _lambda_225738291f9c2c2e8f83b87c89cafee0_::operator() @ 0x180091798
 * Callers:
 *     ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x180091920 (-IsStartMenuSuppressedByShellLauncher@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008CADC (--$ActivateInstance@V-$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_225738291f9c2c2e8f83b87c89cafee0_::operator()(__int64 a1, bool *a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  char v9; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[7]; // [rsp+21h] [rbp-4Fh] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12[1] = -2LL;
  *a2 = 0;
  v12[0] = 0LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.ShellLauncher.ShellLauncherManager",
    0x3Au,
    0x39u);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>>(
         v14,
         v12);
  if ( v3 >= 0 )
  {
    v9 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12[0] + 56LL))(v12[0], &v9);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"internal\\shell\\private\\inc\\devicelockdownhelpers.h",
        (const char *)(unsigned int)v4);
      goto LABEL_15;
    }
    if ( !v9 )
    {
      v3 = 0;
      goto LABEL_15;
    }
    v11 = 0LL;
    v5 = v12[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, 0LL, &v11);
    v3 = v6;
    if ( v6 >= 0 )
    {
      if ( !v11 )
      {
        v3 = -2147024882;
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        goto LABEL_15;
      }
      v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 160LL))(v11, v10);
      v3 = v6;
      if ( v6 >= 0 )
      {
        *a2 = v10[0] != 0;
        v3 = 0;
        goto LABEL_14;
      }
      v7 = 67LL;
    }
    else
    {
      v7 = 64LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\shell\\private\\inc\\devicelockdownhelpers.h",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return (unsigned int)v3;
}
