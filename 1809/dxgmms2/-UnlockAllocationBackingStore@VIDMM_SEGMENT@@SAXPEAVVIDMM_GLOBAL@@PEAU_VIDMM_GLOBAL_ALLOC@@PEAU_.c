/*
 * XREFs of ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006EF9C
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006F510 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C007095C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070CF0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007DDC8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008D130 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B8CD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     McTemplateK0x @ 0x1C0028D04 (McTemplateK0x.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C006BD88 (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006F03C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UnlockAllocationBackingStore(
        struct VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  const GUID *v6; // r8
  PMDL *v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  _DWORD *v12; // rax

  v6 = (const GUID *)*(unsigned int *)(*((_QWORD *)this + 3) + 308LL);
  if ( ((unsigned __int8)v6 & 4) == 0
    || (v12 = (_DWORD *)*((_QWORD *)a2 + 63), v6 = (const GUID *)(*v12 >> 14), (*v12 & 0x4000) != 0) )
  {
    if ( (*((_DWORD *)a2 + 20) & 0x1000) == 0 )
    {
      if ( !a3 )
        a3 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
      v7 = (PMDL *)*((_QWORD *)a2 + 14);
      if ( v7 )
      {
        VidMmiUnlockAllocation(v7, (__int64)a2, v6);
        *((_QWORD *)a2 + 14) = 0LL;
      }
      if ( (*((_DWORD *)a2 + 87))-- == 1 )
      {
        VIDMM_GLOBAL::UnlockAllocation(this, a3, 0LL, *((_QWORD *)a2 + 1), 0, 1u);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            McTemplateK0x(v10, v9, v11, a2);
        }
      }
    }
  }
}
