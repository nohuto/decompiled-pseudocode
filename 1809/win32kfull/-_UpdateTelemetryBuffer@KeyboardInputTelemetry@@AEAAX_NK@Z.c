/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C010F9F0
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C010F9B8 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C011CCEC (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  EVENT_DATA_DESCRIPTOR *p_pData; // rcx
  unsigned int v4; // eax
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // [rsp+38h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int v10; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+5Ch] [rbp+1Bh]
  int v12; // [rsp+60h] [rbp+1Fh]
  int v13; // [rsp+64h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+27h] BYREF
  unsigned int *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]

  v13 = -1;
  p_pData = &pData;
  v4 = 0;
  pData.Ptr = 0x140000000ALL;
  pData.Size = 30;
  pData.Reserved = 40;
  v10 = 50;
  v11 = 60;
  v12 = 100;
  while ( a3 > LODWORD(p_pData->Ptr) )
  {
    ++v4;
    p_pData = (EVENT_DATA_DESCRIPTOR *)((char *)p_pData + 4);
    if ( v4 >= 8 )
      goto LABEL_6;
  }
  v6 = (int)v4 + 8LL * a2;
  v7 = gKeyboardInputTelemetry[v6 + 5];
  if ( v7 + 1 < v7 || HIDWORD(gKeyboardInputTelemetry[v6 + 5]) + a3 < HIDWORD(gKeyboardInputTelemetry[v6 + 5]) )
  {
    KeyboardInputTelemetry::_UploadTelemetryData((KeyboardInputTelemetry *)gKeyboardInputTelemetry);
    v7 = gKeyboardInputTelemetry[v6 + 5];
  }
  HIDWORD(gKeyboardInputTelemetry[v6 + 5]) += a3;
  LODWORD(gKeyboardInputTelemetry[v6 + 5]) = v7 + 1;
LABEL_6:
  if ( a3 > 0xC8 && hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pszDest);
      v17 = 0;
      v15 = &v8;
      v8 = a3;
      v16 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5F54, 0LL, 0LL, 4u, &pData);
    }
  }
}
