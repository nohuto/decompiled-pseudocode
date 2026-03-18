/*
 * XREFs of ??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0090590
 * Callers:
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0090400 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

VIDMM_WORKER_THREAD *__fastcall VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_GLOBAL *a2)
{
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_BYTE *)this + 216) = 1;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  return this;
}
