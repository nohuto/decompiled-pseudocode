/*
 * XREFs of ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C007968C
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0078A90 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C0079600 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::UnderCleanupLimit(VIDMM_GLOBAL *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 1760)
    || *((_QWORD *)this + 893) < (unsigned __int64)qword_1C004D310
    && *((_DWORD *)this + 1788) < (unsigned int)dword_1C004D318 )
  {
    return 1;
  }
  return v1;
}
