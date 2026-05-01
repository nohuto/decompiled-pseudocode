/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_Show@PEBGAEAW4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@ShellFeedsTelemetry@@SAX$$QEAPEBGAEAW4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x18009256C
 * Callers:
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x180095F98 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_Show<unsigned short const *,enum Windows::Internal::Shell::Experience::ShellFeedsButtonInteraction &>(
        LPCWSTR *a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // ecx
  TraceLoggingHProvider v6; // r10
  int v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  __int64 *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  v4 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v4, 0x200000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v14 = 0;
      v5 = *a2;
      v17 = 0;
      v12 = &v8;
      v15 = &v9;
      v8 = v5;
      v13 = 4;
      v9 = 0x2000000LL;
      v16 = 8;
      LOBYTE(v4) = TlgWrite(v6, &unk_1804EA420, 0LL, 0LL, 5u, &pData);
    }
  }
  return (char)v4;
}
