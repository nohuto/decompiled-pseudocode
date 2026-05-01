/*
 * XREFs of ??$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z @ 0x1801BE2E8
 * Callers:
 *     ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1801C1410 (-OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801C5080 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_OnDismiss<_GUID &>(__int128 *a1)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  __int128 v5; // xmm0
  __int128 v7; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int128 *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         a1,
         lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  v3 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v3, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v11 = 0;
      v9 = &v7;
      v7 = v5;
      v10 = 16;
      LOBYTE(v2) = TlgWrite(v4, &unk_1804E6749, 0LL, 0LL, 3u, &pData);
    }
  }
  return v2;
}
