/*
 * XREFs of ?WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C00AFC28
 * Callers:
 *     VidMmWorkerHasQueuedPaging @ 0x1C00256F0 (VidMmWorkerHasQueuedPaging.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::WorkerHasQueuedPaging(VIDMM_GLOBAL *this)
{
  return *(_DWORD *)(*(_QWORD *)this + 144LL) != 0;
}
