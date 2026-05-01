/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@PEBG@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@$$QEAPEBG@Z @ 0x180091FDC
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x180093EB0 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType &,enum Windows::Internal::Shell::Experience::ShellFeedsButtonInteraction &,unsigned short const *>(
        int *a1,
        int *a2,
        const WCHAR **a3)
{
  const struct _TlgProvider_t *v6; // rax
  int v7; // ecx
  const WCHAR *v8; // rdx
  TraceLoggingHProvider v9; // r10
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  int *v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+27h] BYREF
  __int64 *v20; // [rsp+98h] [rbp+37h]
  __int64 v21; // [rsp+A0h] [rbp+3Fh]

  v6 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn(v6, 0x200000000000uLL);
    if ( (_BYTE)v6 )
    {
      v7 = *a1;
      v8 = *a3;
      v15 = &v11;
      v12 = *a2;
      v11 = v7;
      v17 = &v12;
      v16 = 4LL;
      v18 = 4LL;
      TlgCreateWsz(&pDesc, v8);
      v13 = 0x2000000LL;
      v20 = &v13;
      v21 = 8LL;
      LOBYTE(v6) = TlgWrite(v9, &unk_1804EA5B5, 0LL, 0LL, 6u, &pData);
    }
  }
  return (char)v6;
}
