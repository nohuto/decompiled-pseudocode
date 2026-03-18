/*
 * XREFs of ?MapPagingBuffer@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00818D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::MapPagingBuffer(VIDMM_SYSMEM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  *((_DWORD *)a2 + 19) &= ~0x400000u;
}
