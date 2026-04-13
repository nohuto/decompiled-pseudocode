/*
 * XREFs of ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049FF0
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x1800476D0 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<Windows::System::ILauncherOptions>(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  _QWORD *v7; // [rsp+20h] [rbp-48h] BYREF
  const WCHAR *v8[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8[1] = (const WCHAR *)-2LL;
  v8[0] = L"Windows.System.LauncherOptions";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v9, v8);
  v7 = 0LL;
  v3 = RoActivateInstance(*(_QWORD *)(v2 + 24), &v7);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x672,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18004A0EALL);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64))*v7)(v7, &GUID_bafa21d8_b071_4cd8_853e_341203e557d3, a1);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
  return a1;
}
