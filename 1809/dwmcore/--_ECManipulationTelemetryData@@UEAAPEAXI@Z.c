/*
 * XREFs of ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x18019BCD8
 * Callers:
 *     ??_ECManipulationTelemetryData@@W7EAAPEAXI@Z @ 0x1800F0A90 (--_ECManipulationTelemetryData@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x18019CAF4 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

CManipulationTelemetryData *__fastcall CManipulationTelemetryData::`vector deleting destructor'(
        CManipulationTelemetryData *this,
        char a2,
        __int64 a3)
{
  bool v5; // bp
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  do
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((char *)this + 72, &v7, a3, 0LL);
    v5 = v7 != 0;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  while ( v5 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
