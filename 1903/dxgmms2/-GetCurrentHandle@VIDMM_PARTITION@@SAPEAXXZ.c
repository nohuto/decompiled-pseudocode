/*
 * XREFs of ?GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ @ 0x1C0002434
 * Callers:
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0069DE4 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070A64 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00804DC (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0080FF0 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ @ 0x1C0002458 (-GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ.c)
 */

__int64 VIDMM_PARTITION::GetCurrentHandle(void)
{
  struct VIDMM_PARTITION *Current; // rax

  Current = VIDMM_PARTITION::GetCurrent();
  if ( Current )
    return *((_QWORD *)Current + 3);
  else
    return -1LL;
}
