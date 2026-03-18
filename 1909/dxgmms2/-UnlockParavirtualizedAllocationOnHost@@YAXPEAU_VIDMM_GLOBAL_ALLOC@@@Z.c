/*
 * XREFs of ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFF4C
 * Callers:
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C006D668 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0073EB0 (-Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C0081A14 (-EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B59D8 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnHost(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  VIDMM_PROCESS *v2; // rcx

  if ( *((_QWORD *)a1 + 66) )
  {
    v2 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v2 )
      v2 = (VIDMM_PROCESS *)*((_QWORD *)v2 + 1);
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(v2, *((void **)a1 + 66), *((_QWORD *)a1 + 67), *((_QWORD *)a1 + 1), 0);
    *((_QWORD *)a1 + 67) = 0LL;
    *((_QWORD *)a1 + 66) = 0LL;
  }
}
