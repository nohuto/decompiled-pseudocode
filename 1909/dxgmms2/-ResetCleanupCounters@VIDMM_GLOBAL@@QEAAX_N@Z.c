/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0082824
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rax

  if ( a2 || *((_QWORD *)this + 576) - *((_QWORD *)this + 895) > qword_1C004E320 )
  {
    *((_QWORD *)this + 893) = 0LL;
    v2 = *((_QWORD *)this + 576);
    *((_DWORD *)this + 1788) = 0;
    *((_QWORD *)this + 895) = v2;
  }
}
