/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017FE8
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00180EC (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0059340 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00593EC (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00706E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0071020 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00A9AEC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00BB3B4 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BCFD8 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)((char *)a2 + 456);
  v4 = *((_QWORD *)a2 + 57);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 456)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 58), (_QWORD *)*v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((unsigned int *)a2 + 119);
  v8 = (void *)*((_QWORD *)a2 + 56);
  *v2 = 0LL;
  *((_QWORD *)a2 + 58) = 0LL;
  v9 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v7);
  v10 = *((_QWORD *)this + 6);
  v15 = 0LL;
  v14[0] = v9;
  v14[1] = v8;
  if ( (*(_DWORD *)(v10 + 80) & 0x1000) != 0 )
    LOWORD(v15) = 0;
  else
    LOWORD(v15) = *(_WORD *)(v10 + 16) + 1;
  WORD1(v15) = *(_WORD *)(v10 + 380);
  if ( ((int (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[51])(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) + 2528LL),
         v14) < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v13[7] = v14;
    v13[3] = 270LL;
    v13[4] = 46LL;
    v13[5] = this;
    v13[6] = a2;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)a2 + 56) = 0LL;
}
