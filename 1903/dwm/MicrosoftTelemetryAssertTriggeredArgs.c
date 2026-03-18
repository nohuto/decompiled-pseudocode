/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x14000892C
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x140006F1C (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 *     BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x140007588 (BlackScreenDiagnostics--IsSectionAllBlackPixels.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x140008230 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x140008724 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140008950 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, a2, a3, a2, a3);
}
