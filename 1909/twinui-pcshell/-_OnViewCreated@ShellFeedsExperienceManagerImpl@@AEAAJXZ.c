/*
 * XREFs of ?_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800957FC
 * Callers:
 *     ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180095730 (-_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094BE0 (-_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_RegisterViewPresentationChanged@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180095E74 (-_RegisterViewPresentationChanged@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewCreated(struct _TP_TIMER **this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x200000000000uLL) )
  {
    v12 = 0;
    v10 = &v8;
    v8 = 0x1000000LL;
    v11 = 8;
    TlgWrite(v3, &unk_1804EAA6D, 0LL, 0LL, 3u, &pData);
  }
  v4 = ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = ShellFeedsExperienceManagerImpl::_RegisterViewPresentationChanged((ShellFeedsExperienceManagerImpl *)this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
