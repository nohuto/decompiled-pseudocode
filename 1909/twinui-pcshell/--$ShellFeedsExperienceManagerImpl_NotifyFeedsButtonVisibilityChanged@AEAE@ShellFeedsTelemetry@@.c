/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_NotifyFeedsButtonVisibilityChanged@AEAE@ShellFeedsTelemetry@@SAXAEAE@Z @ 0x180091F20
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x180093C60 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_NotifyFeedsButtonVisibilityChanged<unsigned char &>(
        _BYTE *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  bool v4; // zf
  bool v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  bool *v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  __int64 *v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]

  v2 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v2, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      v4 = *a1 == 0;
      v9 = &v6;
      v11 = &v7;
      v6 = !v4;
      v10 = 1LL;
      v7 = 0x1000000LL;
      v12 = 8LL;
      LOBYTE(v2) = TlgWrite(v3, &unk_1804EA642, 0LL, 0LL, 4u, &pData);
    }
  }
  return (char)v2;
}
