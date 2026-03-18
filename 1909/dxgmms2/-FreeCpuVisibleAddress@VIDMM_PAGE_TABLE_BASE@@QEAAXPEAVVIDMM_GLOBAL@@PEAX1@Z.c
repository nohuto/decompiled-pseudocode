/*
 * XREFs of ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C006D68C
 * Callers:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C006D83C (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FB10 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017500 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001782C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        void *a3,
        struct _MDL *a4)
{
  SIZE_T *v5; // rdx
  SIZE_T v9; // rbx
  int v10; // eax
  _QWORD *v11; // rax
  VIDMM_CPU_HOST_APERTURE *v12; // rbx

  v5 = (SIZE_T *)*((_QWORD *)this + 1);
  if ( !v5[17] )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v5);
    v11[3] = 270LL;
    v11[4] = 48LL;
    v11[5] = this;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
    v5 = (SIZE_T *)*((_QWORD *)this + 1);
  }
  v9 = v5[17];
  v10 = *(_DWORD *)(v9 + 80);
  if ( (v10 & 0x1001) == 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 308LL) & 8) == 0 )
        MmUnmapIoSpace(a3, v5[2]);
    }
    else
    {
      v12 = *(VIDMM_CPU_HOST_APERTURE **)(v9 + 488);
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v12, (struct _VIDMM_GLOBAL_ALLOC *)v5);
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v12, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1));
      MmUnmapLockedPages(a3, a4);
      ExFreePoolWithTag(a4, 0);
    }
  }
}
