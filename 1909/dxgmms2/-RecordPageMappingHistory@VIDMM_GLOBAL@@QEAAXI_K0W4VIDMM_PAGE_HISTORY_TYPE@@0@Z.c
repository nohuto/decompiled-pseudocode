/*
 * XREFs of ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AEAB0
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017004 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005ABF8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C005B1B0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DFD0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C006F370 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C00701E0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordPageMappingHistory(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( *(_QWORD *)(a1 + 40952) )
  {
    v10 = a1 + 40936;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v11 = *(unsigned int *)(a1 + 40960);
    if ( (_DWORD)v11 == dword_1C004E330 )
    {
      *(_DWORD *)(a1 + 40960) = 0;
      v11 = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 40952) + 48 * v11;
    *(_QWORD *)v12 = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v12 + 32) = a5;
    *(_QWORD *)(v12 + 24) = a6;
    *(_DWORD *)(v12 + 36) = a2;
    *(_QWORD *)(v12 + 8) = a3;
    *(_QWORD *)(v12 + 16) = a4;
    *(_DWORD *)(v12 + 40) = *(_DWORD *)(a1 + 40928);
    ++*(_DWORD *)(a1 + 40960);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}
