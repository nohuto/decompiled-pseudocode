/*
 * XREFs of ??$ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x18009B594
 * Callers:
 *     ?NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z @ 0x18009DB18 (-NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility<bool &>(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  v2 = FeedsMicrosoftTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v2, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      v9 = 0;
      v12 = 0;
      v10 = &v5;
      v7 = a1;
      v8 = 1;
      v5 = 0x1000000LL;
      v11 = 8;
      LOBYTE(v2) = TlgWrite(v3, &unk_1804ECF5B, 0LL, 0LL, 4u, &pData);
    }
  }
  return (char)v2;
}
