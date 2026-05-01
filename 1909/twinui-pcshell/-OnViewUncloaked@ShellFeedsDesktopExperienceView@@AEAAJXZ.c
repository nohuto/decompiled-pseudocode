/*
 * XREFs of ?OnViewUncloaked@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E9DC
 * Callers:
 *     ?OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009E000 (-OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@I.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1800505F8 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewUncloaked(ShellFeedsDesktopExperienceView *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x200000000000uLL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = 0x1000000LL;
    v9 = 8;
    TlgWrite(v3, &unk_1804ED2E0, 0LL, 0LL, 3u, &pData);
  }
  v4 = CExperienceManagerAnimationHelper::End((ShellFeedsDesktopExperienceView *)((char *)this + 176));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
