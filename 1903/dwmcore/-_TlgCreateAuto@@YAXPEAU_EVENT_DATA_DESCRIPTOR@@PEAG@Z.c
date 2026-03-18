/*
 * XREFs of ?_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z @ 0x18015A2AC
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018F55C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _TlgCreateAuto(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  TlgCreateWsz(pDesc, pwsz);
}
