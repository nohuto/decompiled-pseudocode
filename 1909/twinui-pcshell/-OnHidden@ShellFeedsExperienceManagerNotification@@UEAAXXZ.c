/*
 * XREFs of ?OnHidden@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x1800940B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnHidden(ShellFeedsExperienceManagerNotification *this)
{
  __int64 v1; // rbx
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v2 = FeedsMicrosoftTelemetryProvider::Provider();
    if ( *(_DWORD *)v2 > 5u )
    {
      if ( TlgKeywordOn(v2, 0x200000000000uLL) )
      {
        v8 = 0;
        v6 = &v4;
        v4 = 0x1000000LL;
        v7 = 8;
        TlgWrite(v3, &unk_1804EAB8C, 0LL, 0LL, 3u, &pData);
      }
    }
    *(_WORD *)(v1 + 153) = 0;
  }
}
