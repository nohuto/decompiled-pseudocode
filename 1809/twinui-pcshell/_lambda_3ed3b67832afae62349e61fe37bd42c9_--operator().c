/*
 * XREFs of _lambda_3ed3b67832afae62349e61fe37bd42c9_::operator() @ 0x18008CCF0
 * Callers:
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18008D1F0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008CADC (--$ActivateInstance@V-$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_3ed3b67832afae62349e61fe37bd42c9_::operator()(__int64 a1, _BYTE *a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  char v9; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[7]; // [rsp+21h] [rbp-4Fh] BYREF
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13[1] = -2LL;
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
    v9 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13[0] + 56LL))(v13[0], &v9);
    v3 = v4;
    if ( v4 >= 0 )
    {
      if ( v9 )
      {
        v11 = 0LL;
        v5 = v13[0];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, 0LL, &v11);
        v3 = v6;
        if ( v6 >= 0 )
        {
          if ( v11 )
          {
            v12 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
            (**v11)(v11, &GUID_6ac643cc_a2fb_4acd_af83_309fba378992, &v12);
            if ( v12 )
            {
              v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 48LL))(v12, v10);
              v3 = v7;
              if ( v7 >= 0 )
              {
                if ( !v10[0] )
                  *a2 = 1;
                v3 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x26,
                  (__int64)"internal\\shell\\private\\inc\\devicelockdownhelpers.h",
                  (const char *)(unsigned int)v7);
              }
            }
            else
            {
              v3 = -2147024882;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
          }
          else
          {
            v3 = -2147024882;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x20,
            (__int64)"internal\\shell\\private\\inc\\devicelockdownhelpers.h",
            (const char *)(unsigned int)v6);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      }
      else
      {
        *a2 = 0;
        v3 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (__int64)"internal\\shell\\private\\inc\\devicelockdownhelpers.h",
        (const char *)(unsigned int)v4);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return (unsigned int)v3;
}
