/*
 * XREFs of ?_OnClientWindowReadyForPresentationChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180095400
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnClientWindowReadyForPresentationChangedHandler(
        ShellFeedsExperienceManagerImpl *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v3 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 5u && TlgKeywordOn(v3, 0x200000000000uLL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = 0x1000000LL;
    v9 = 8;
    TlgWrite(v4, &unk_1804EA8A1, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
