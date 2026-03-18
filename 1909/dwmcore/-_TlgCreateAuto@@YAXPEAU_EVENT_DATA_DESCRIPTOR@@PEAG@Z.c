/*
 * XREFs of ?_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEAG@Z @ 0x180158BCC
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018DE1C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _TlgCreateAuto(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  TlgCreateWsz(pDesc, pwsz);
}
