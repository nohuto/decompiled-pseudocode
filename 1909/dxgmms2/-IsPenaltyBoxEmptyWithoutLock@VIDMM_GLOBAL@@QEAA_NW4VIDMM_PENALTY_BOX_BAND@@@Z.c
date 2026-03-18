/*
 * XREFs of ?IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00180FC
 * Callers:
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00036F0 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(__int64 a1, int a2)
{
  _QWORD *v2; // rdx

  v2 = (_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 2579LL));
  return *v2 == (_QWORD)v2;
}
