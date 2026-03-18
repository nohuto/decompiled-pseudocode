/*
 * XREFs of ?TelemetrySetConsumerProcessId@CGlobalCompositionSurfaceInfo@@UEAAXI@Z @ 0x1800DB910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::TelemetrySetConsumerProcessId(
        CGlobalCompositionSurfaceInfo *this,
        int a2)
{
  *((_DWORD *)this + 98) = a2;
}
