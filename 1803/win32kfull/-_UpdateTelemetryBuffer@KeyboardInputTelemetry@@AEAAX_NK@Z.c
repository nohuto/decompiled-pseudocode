/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00BD580
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00BD66C (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00BD230 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00BD824 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  unsigned int *v3; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdi
  unsigned int v7; // edx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  unsigned int v10; // [rsp+38h] [rbp-19h] BYREF
  _DWORD v11[6]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+27h] BYREF
  unsigned int *v14; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+94h] [rbp+43h]

  v11[5] = -1;
  v3 = v11;
  v11[0] = 10;
  v5 = 0;
  v11[1] = 100;
  v11[2] = 200;
  v11[3] = 500;
  v11[4] = 2000;
  while ( a3 > *v3 )
  {
    ++v5;
    ++v3;
    if ( v5 >= 6 )
      goto LABEL_6;
  }
  v6 = (int)v5 + 6LL * a2;
  v7 = gKeyboardInputTelemetry[v6 + 5];
  if ( v7 + 1 < v7 || HIDWORD(gKeyboardInputTelemetry[v6 + 5]) + a3 < HIDWORD(gKeyboardInputTelemetry[v6 + 5]) )
  {
    KeyboardInputTelemetry::_UploadTelemetryData((const WCHAR *)gKeyboardInputTelemetry);
    v7 = gKeyboardInputTelemetry[v6 + 5];
  }
  HIDWORD(gKeyboardInputTelemetry[v6 + 5]) += a3;
  LODWORD(gKeyboardInputTelemetry[v6 + 5]) = v7 + 1;
LABEL_6:
  if ( a3 > 0xC8 && (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pszDest);
      v16 = 0;
      v14 = &v10;
      v10 = a3;
      v15 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E3556, v8, v9, 4u, &pData);
    }
  }
}
