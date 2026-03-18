/*
 * XREFs of ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C0079414
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z @ 0x1C00051EC (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0077358 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C007944C (-GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z.c)
 */

void __fastcall KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2,
        unsigned __int8 a3)
{
  unsigned int KeyboardInputLatency; // eax
  KeyboardInputTelemetry *v5; // rcx

  if ( gKeyboardInputTelemetry[0] )
  {
    if ( dword_1C032CB7C == a2 )
    {
      KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(gKeyboardInputTelemetry[0]);
      KeyboardInputTelemetry::_UpdateTelemetryBuffer(v5, a3, KeyboardInputLatency);
    }
  }
}
