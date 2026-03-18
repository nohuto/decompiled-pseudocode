/*
 * XREFs of ?GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ @ 0x1C00023F4
 * Callers:
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C00699F4 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070774 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C008160C (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0082120 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ @ 0x1C0002418 (-GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ.c)
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
