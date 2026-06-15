/*
 * XREFs of _CMonitor::Start_::_1_::dtor$5 @ 0x180103D81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::Start_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 104),
           a2);
}
