/*
 * XREFs of ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180100460
 * Callers:
 *     ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x1801001A4 (--1-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102774 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102CEC (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801035AC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180103E10 (-Stop@CMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 */

void **__fastcall CMonitor::SampleDataBlock::`scalar deleting destructor'(void **this)
{
  free(this[3]);
  this[3] = 0LL;
  operator delete(this);
  return this;
}
