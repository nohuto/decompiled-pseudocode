/*
 * XREFs of ??$ShellHotKeyRequestReceived@IPEAGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEAGAEA_N0@Z @ 0x1800AC348
 * Callers:
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1803425B4 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180332E58 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ShellHotKeyRequestReceived<unsigned int,unsigned short *,bool &,unsigned int>(
        __int64 a1,
        const WCHAR **a2,
        __int64 a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v8; // rax
  const WCHAR *v9; // rdx
  int v10; // r11d
  TraceLoggingHProvider v11; // r10
  __int64 v13; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  __int64 v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  __int64 *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  v8 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = TlgKeywordOn(v8, 0x400000000000uLL);
    if ( (_BYTE)v8 )
    {
      v9 = *a2;
      v17 = 0;
      v16 = 4;
      v15 = a1;
      TlgCreateWsz(&pDesc, v9);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v25 = &v13;
      v19 = a3;
      v20 = 1;
      v22 = a4;
      v23 = v10;
      v13 = 50331648LL;
      v26 = 8;
      LOBYTE(v8) = TlgWrite(v11, &unk_180501ADF, 0LL, 0LL, 7u, &pData);
    }
  }
  return (char)v8;
}
