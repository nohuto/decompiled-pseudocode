/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1800E05C0
 * Callers:
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800DFB04 (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 *     ??0CGlobalSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1800DFE8C (--0CGlobalSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E02FC (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x1800E0564 (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
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
