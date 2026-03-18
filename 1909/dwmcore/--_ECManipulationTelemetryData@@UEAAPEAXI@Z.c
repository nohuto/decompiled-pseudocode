/*
 * XREFs of ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x1801D551C
 * Callers:
 *     ??_ECManipulationTelemetryData@@W7EAAPEAXI@Z @ 0x1800F1250 (--_ECManipulationTelemetryData@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180186038 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801D6284 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CManipulationTelemetryData::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2,
        __int64 a3)
{
  bool v5; // bp
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  do
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(&this[2].OwningThread, &v7, a3, 0LL);
    v5 = v7 != 0;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  while ( v5 );
  DeleteCriticalSection(this + 3);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      operator delete(this);
  }
  return this;
}
