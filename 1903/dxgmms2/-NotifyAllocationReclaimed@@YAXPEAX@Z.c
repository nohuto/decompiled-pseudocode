/*
 * XREFs of ?NotifyAllocationReclaimed@@YAXPEAX@Z @ 0x1C00AE010
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00AE038 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall NotifyAllocationReclaimed(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  VIDMM_GLOBAL::NotifyAllocationReclaimed(*(VIDMM_GLOBAL **)(*((_QWORD *)a1 + 17) + 8LL), a1, 1);
}
