/*
 * XREFs of ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x1801001A4
 * Callers:
 *     _CMonitor::ProcessCaptureBufferReadyEvent_::_1_::dtor$0 @ 0x180102C93 (_CMonitor--ProcessCaptureBufferReadyEvent_--_1_--dtor$0.c)
 *     _CMonitor::ProcessRenderBufferReadyEvent_::_1_::dtor$1 @ 0x18010327C (_CMonitor--ProcessRenderBufferReadyEvent_--_1_--dtor$1.c)
 *     _CMonitor::Start_::_1_::dtor$5 @ 0x180103D81 (_CMonitor--Start_--_1_--dtor$5.c)
 *     _CMonitor::Start_::_1_::dtor$6 @ 0x180103DC3 (_CMonitor--Start_--_1_--dtor$6.c)
 *     _CMonitor::Stop_::_1_::dtor$2 @ 0x180103FAB (_CMonitor--Stop_--_1_--dtor$2.c)
 *     _CMonitor::Stop_::_1_::dtor$3 @ 0x180103FB7 (_CMonitor--Stop_--_1_--dtor$3.c)
 * Callees:
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180100460 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
        CMonitor::SampleDataBlock **a1,
        unsigned int a2)
{
  CMonitor::SampleDataBlock *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CMonitor::SampleDataBlock::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
