/*
 * XREFs of ?OnViewSetForegroundFailed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E874
 * Callers:
 *     ?OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009E000 (-OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@I.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewSetForegroundFailed(ShellFeedsDesktopExperienceView *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x200000000000uLL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = 0x1000000LL;
    v8 = 8;
    TlgWrite(v3, &unk_1804ED144, 0LL, 0LL, 3u, &pData);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
  return 0LL;
}
