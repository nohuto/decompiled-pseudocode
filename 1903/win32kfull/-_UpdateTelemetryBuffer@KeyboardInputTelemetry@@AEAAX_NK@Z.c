/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0077358
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C0079414 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C010EB60 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  unsigned int *v3; // rcx
  unsigned int v4; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // edx
  int v9; // [rsp+38h] [rbp-49h] BYREF
  int v10; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v12[8]; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+7h] BYREF
  int *v15; // [rsp+98h] [rbp+17h]
  int v16; // [rsp+A0h] [rbp+1Fh]
  int v17; // [rsp+A4h] [rbp+23h]
  int *v18; // [rsp+A8h] [rbp+27h]
  int v19; // [rsp+B0h] [rbp+2Fh]
  int v20; // [rsp+B4h] [rbp+33h]
  unsigned int *v21; // [rsp+B8h] [rbp+37h]
  int v22; // [rsp+C0h] [rbp+3Fh]
  int v23; // [rsp+C4h] [rbp+43h]

  v12[7] = -1;
  v3 = v12;
  v4 = 0;
  v12[0] = 10;
  v12[1] = 20;
  v12[2] = 30;
  v12[3] = 40;
  v12[4] = 50;
  v12[5] = 60;
  v12[6] = 100;
  while ( a3 > *v3 )
  {
    ++v4;
    ++v3;
    if ( v4 >= 8 )
      goto LABEL_7;
  }
  v6 = a2;
  v7 = (int)v4 + 8LL * a2;
  v8 = gKeyboardInputTelemetry[v7 + 5];
  if ( v8 + 1 < v8
    || (v6 = HIDWORD(gKeyboardInputTelemetry[v7 + 5]), (unsigned int)v6 + a3 < (unsigned int)v6)
    || v8 >= 0x3E8 )
  {
    KeyboardInputTelemetry::_UploadTelemetryData((KeyboardInputTelemetry *)v6);
    v8 = gKeyboardInputTelemetry[v7 + 5];
  }
  HIDWORD(gKeyboardInputTelemetry[v7 + 5]) += a3;
  LODWORD(gKeyboardInputTelemetry[v7 + 5]) = v8 + 1;
LABEL_7:
  if ( a3 > 0xC8 && hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, &pwsz);
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = &v9;
      v18 = &v10;
      v21 = &v11;
      v9 = dword_1C032CB78;
      v16 = 4;
      v10 = dword_1C032CB78;
      v19 = 4;
      v11 = a3;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8BFE, 0LL, 0LL, 6u, &pData);
    }
  }
}
