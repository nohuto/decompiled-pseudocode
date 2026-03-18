/*
 * XREFs of ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x18001BCC8
 * Callers:
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18001B9EC (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180150E44 (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CTelemetryTracking::CTelemetryTrackingInfo *__fastcall CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(
        CTelemetryTracking::CTelemetryTrackingInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 && *((_QWORD *)this + 3) )
    WPF::ProcessHeapImpl::Free(v2);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
