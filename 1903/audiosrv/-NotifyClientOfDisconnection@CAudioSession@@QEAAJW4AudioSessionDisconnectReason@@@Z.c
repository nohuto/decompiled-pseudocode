/*
 * XREFs of ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800CFECC
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD720 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056510 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::NotifyClientOfDisconnection(
        const wchar_t **this,
        enum AudioSessionDisconnectReason a2)
{
  const wchar_t *v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  char *v7; // rax
  char *v8; // rdi
  __int64 v9; // r8
  int MediaEvent; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      this[91]);
  }
  v4 = this[91];
  v5 = 2 * *((_DWORD *)v4 - 4) + 2;
  v6 = 2 * *((_DWORD *)v4 - 4) + 74;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)v7 = v6;
    *((_DWORD *)v7 + 6) = v5;
    *((_DWORD *)v7 + 1) = 32;
    *((_DWORD *)v7 + 12) = a2;
    StringCbCopyW(v7 + 72, v5, (char *)this[91]);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        v8);
    }
    MediaEvent = GenerateMediaEvent(v8, 0LL, v9);
    operator delete(v8);
  }
  else
  {
    MediaEvent = -2147024882;
  }
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::NotifyClientOfDisconnection", 2598, MediaEvent);
  return (unsigned int)MediaEvent;
}
