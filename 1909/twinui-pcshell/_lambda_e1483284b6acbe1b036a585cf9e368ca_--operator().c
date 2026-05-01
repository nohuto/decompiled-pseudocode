/*
 * XREFs of _lambda_e1483284b6acbe1b036a585cf9e368ca_::operator() @ 0x1800A87D4
 * Callers:
 *     ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x1800A8968 (-IsStartMenuSuppressedByShellLauncher@@YA_NXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180193400 (--$ActivateInstance@V-$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e1483284b6acbe1b036a585cf9e368ca_::operator()(__int64 a1, bool *a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  char v10; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[7]; // [rsp+21h] [rbp-4Fh] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13[1] = -2LL;
  *a2 = 0;
  v13[0] = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.ShellLauncher.ShellLauncherManager",
    0x3Au,
    0x39u);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>>(
         v15,
         v13);
  if ( v3 >= 0 )
  {
    v10 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13[0] + 56LL))(v13[0], &v10);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"internal\\shell\\private\\inc\\devicelockdownhelpers.h",
        (const char *)(unsigned int)v4);
      goto LABEL_15;
    }
    if ( !v10 )
    {
      v3 = 0;
      goto LABEL_15;
    }
    v12 = 0LL;
    v5 = v13[0];
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13[0] + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v7 = v6(v5, 0LL, &v12);
    v3 = v7;
    if ( v7 >= 0 )
    {
      if ( !v12 )
      {
        v3 = -2147024882;
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        goto LABEL_15;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 160LL))(v12, v11);
      v3 = v7;
      if ( v7 >= 0 )
      {
        *a2 = v11[0] != 0;
        v3 = 0;
        goto LABEL_14;
      }
      v8 = 61LL;
    }
    else
    {
      v8 = 58LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"internal\\shell\\private\\inc\\devicelockdownhelpers.h",
      (const char *)(unsigned int)v7);
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return (unsigned int)v3;
}
