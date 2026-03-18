/*
 * XREFs of ?GetAlignmentCB@VIDMM_SEGMENT@@SAKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00818F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::GetAlignmentCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  return *((unsigned int *)a1 + 8);
}
