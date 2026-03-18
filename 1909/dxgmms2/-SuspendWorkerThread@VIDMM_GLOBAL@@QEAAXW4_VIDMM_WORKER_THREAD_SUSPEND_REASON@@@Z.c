/*
 * XREFs of ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x1C0082608
 * Callers:
 *     VidMmSuspendWorkerThread @ 0x1C0014D90 (VidMmSuspendWorkerThread.c)
 * Callees:
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C008265C (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SuspendWorkerThread(_QWORD *a1, int a2)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !a2 )
  {
    v3 = 3LL;
    return VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*a1, v3, 0LL);
  }
  v2 = a2 - 1;
  if ( !v2 )
  {
    v3 = 4LL;
    return VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*a1, v3, 0LL);
  }
  if ( v2 == 1 )
  {
    v3 = 5LL;
    return VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*a1, v3, 0LL);
  }
  return result;
}
