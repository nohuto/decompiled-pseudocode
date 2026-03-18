/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1800899A8
 * Callers:
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180088D64 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x180088E34 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x180089158 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x18008994C (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CMmcssTask *__fastcall CMmcssTask::CMmcssTask(CMmcssTask *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
