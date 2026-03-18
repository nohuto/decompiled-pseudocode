/*
 * XREFs of ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B02AC
 * Callers:
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C006D958 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00741A0 (-Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00808E4 (-EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B5D38 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
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
