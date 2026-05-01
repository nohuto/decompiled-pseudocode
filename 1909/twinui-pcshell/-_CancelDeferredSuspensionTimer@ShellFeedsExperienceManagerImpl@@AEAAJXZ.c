/*
 * XREFs of ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094BE0
 * Callers:
 *     ?_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800957FC (-_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800958E4 (-_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800959D0 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x180095F98 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer(struct _TP_TIMER **this)
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
    TlgWrite(v3, &unk_1804EA966, 0LL, 0LL, 3u, &pData);
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 18,
    0LL);
  return 0LL;
}
