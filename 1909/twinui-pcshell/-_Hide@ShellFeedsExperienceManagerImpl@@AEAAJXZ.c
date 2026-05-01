/*
 * XREFs of ?_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094FC4
 * Callers:
 *     ?DisplaySettingsChange@ShellFeedsExperienceManagerImpl@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180093100 (-DisplaySettingsChange@ShellFeedsExperienceManagerImpl@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_.c)
 *     ?_OnAppRequestedDismiss@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009535C (-_OnAppRequestedDismiss@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180095560 (-_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800961A8 (-_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_Hide(ShellFeedsExperienceManagerImpl *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  int started; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x200000000000uLL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = 0x1000000LL;
    v10 = 8;
    TlgWrite(v3, &unk_1804EAABA, 0LL, 0LL, 3u, &pData);
  }
  if ( *((_BYTE *)this + 156) )
  {
    started = ShellFeedsExperienceManagerImpl::_StartDeferredSuspensionTimer(this);
    if ( started < 0 )
    {
      v5 = 537LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)started);
      return (unsigned int)started;
    }
  }
  started = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
  if ( started < 0 )
  {
    v5 = 540LL;
    goto LABEL_7;
  }
  return 0LL;
}
