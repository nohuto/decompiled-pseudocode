/*
 * XREFs of VidMmSuspendMemorySegmentAccess @ 0x1C0025550
 * Callers:
 *     <none>
 * Callees:
 *     ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AC71C (-SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmSuspendMemorySegmentAccess(VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::SuspendMemorySegmentAccess(a1);
}
