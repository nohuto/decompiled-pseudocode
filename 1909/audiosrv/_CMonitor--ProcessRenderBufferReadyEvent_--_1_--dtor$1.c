/*
 * XREFs of _CMonitor::ProcessRenderBufferReadyEvent_::_1_::dtor$1 @ 0x180110A6D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::ProcessRenderBufferReadyEvent_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 80),
           a2);
}
