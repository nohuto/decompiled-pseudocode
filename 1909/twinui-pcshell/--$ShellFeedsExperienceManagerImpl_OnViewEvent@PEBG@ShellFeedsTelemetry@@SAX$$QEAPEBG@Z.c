/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_OnViewEvent@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z @ 0x180092238
 * Callers:
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800959D0 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_OnViewEvent<unsigned short const *>(LPCWSTR *a1)
{
  const struct _TlgProvider_t *v2; // rax
  TraceLoggingHProvider v3; // r10
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  v2 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v2, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v10 = 0;
      v8 = &v5;
      v5 = 0x2000000LL;
      v9 = 8;
      LOBYTE(v2) = TlgWrite(v3, &unk_1804EA55F, 0LL, 0LL, 4u, &pData);
    }
  }
  return (char)v2;
}
