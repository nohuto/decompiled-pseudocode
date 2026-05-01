/*
 * XREFs of ??$ShellFeedsDesktopExperienceView_PositionShellFeedsWindow@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShellFeedsTelemetry@@SAXAEAJ0000000@Z @ 0x18009B6FC
 * Callers:
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EE24 (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_PositionShellFeedsWindow<long &,long &,long &,long &,long &,long &,long &,long &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const struct _TlgProvider_t *v12; // rax
  const struct _TlgProvider_t *v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-99h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-89h] BYREF
  __int64 v17; // [rsp+68h] [rbp-69h]
  __int64 v18; // [rsp+70h] [rbp-61h]
  __int64 v19; // [rsp+78h] [rbp-59h]
  __int64 v20; // [rsp+80h] [rbp-51h]
  __int64 v21; // [rsp+88h] [rbp-49h]
  __int64 v22; // [rsp+90h] [rbp-41h]
  __int64 v23; // [rsp+98h] [rbp-39h]
  __int64 v24; // [rsp+A0h] [rbp-31h]
  __int64 v25; // [rsp+A8h] [rbp-29h]
  __int64 v26; // [rsp+B0h] [rbp-21h]
  __int64 v27; // [rsp+B8h] [rbp-19h]
  __int64 v28; // [rsp+C0h] [rbp-11h]
  __int64 v29; // [rsp+C8h] [rbp-9h]
  __int64 v30; // [rsp+D0h] [rbp-1h]
  __int64 v31; // [rsp+D8h] [rbp+7h]
  __int64 v32; // [rsp+E0h] [rbp+Fh]
  __int64 *v33; // [rsp+E8h] [rbp+17h]
  __int64 v34; // [rsp+F0h] [rbp+1Fh]

  v12 = FeedsMicrosoftTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)v12 > 5u )
  {
    LOBYTE(v12) = TlgKeywordOn(v12, 0x200000000000uLL);
    if ( (_BYTE)v12 )
    {
      v25 = a5;
      v27 = a6;
      v29 = a7;
      v31 = a8;
      v33 = &v15;
      v17 = a1;
      v18 = 4LL;
      v19 = a2;
      v20 = 4LL;
      v21 = a3;
      v22 = 4LL;
      v23 = a4;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v15 = 0x1000000LL;
      v34 = 8LL;
      LOBYTE(v12) = TlgWrite(v13, &unk_1804ECE77, 0LL, 0LL, 0xBu, &pData);
    }
  }
  return (char)v12;
}
