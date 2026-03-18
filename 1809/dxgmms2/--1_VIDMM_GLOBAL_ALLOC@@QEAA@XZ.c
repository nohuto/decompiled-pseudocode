/*
 * XREFs of ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C00603CC
 * Callers:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0025800 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?UncommitParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACC4C (-UncommitParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACC98 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(_VIDMM_GLOBAL_ALLOC *this)
{
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    UnlockParavirtualizedAllocationOnHost(this);
    UncommitParavirtualizedAllocationOnHost(this);
  }
}
