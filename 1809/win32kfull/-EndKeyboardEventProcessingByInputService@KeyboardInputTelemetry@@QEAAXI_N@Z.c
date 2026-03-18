/*
 * XREFs of ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C010F9B8
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z @ 0x1C00030D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C010F9F0 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C010FB00 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z.c)
 */

void __fastcall KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2,
        bool a3)
{
  unsigned int KeyboardInputLatency; // eax
  KeyboardInputTelemetry *v5; // rcx

  if ( gKeyboardInputTelemetry )
  {
    if ( dword_1C031795C == a2 )
    {
      KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(gKeyboardInputTelemetry);
      KeyboardInputTelemetry::_UpdateTelemetryBuffer(v5, a3, KeyboardInputLatency);
    }
  }
}
