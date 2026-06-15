/*
 * XREFs of ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x18010DF18
 * Callers:
 *     ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x18010DC5C (--1-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801104B4 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801112A0 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180111B9C (-Stop@CMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall CMonitor::SampleDataBlock::`scalar deleting destructor'(void **this)
{
  free(this[4]);
  this[4] = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
