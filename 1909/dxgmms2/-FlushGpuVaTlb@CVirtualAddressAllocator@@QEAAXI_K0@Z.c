/*
 * XREFs of ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027A8
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A57C (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006BE94 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006D890 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C006F980 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0083398 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0564 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1068 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C006AF28 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C006EF00 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C00828CC (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FlushGpuVaTlb(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_GLOBAL *v4; // r11
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  UINT v11; // eax
  struct VIDMM_PROCESS *v12; // r9
  void *KmdProcessHandle; // rax
  unsigned int v14; // eax
  VIDMM_PROCESS *v15; // r9
  __int64 v16; // r10
  struct _D3DGPU_PHYSICAL_ADDRESS v17; // [rsp+40h] [rbp-18h] BYREF

  v4 = (VIDMM_GLOBAL *)*((_QWORD *)this + 10);
  if ( (*((_BYTE *)v4 + 40872) & 0x10) == 0 && a3 <= a4 )
  {
    v8 = *((_QWORD *)this + 14);
    v9 = 32LL * a2;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + v8) + 8LL);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 136) )
      {
        v11 = *(_DWORD *)(v9 + v8 + 24);
        *(&v17.SegmentId + 1) = 0;
        v12 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 11);
        v17.SegmentId = v11;
        v17.SegmentOffset = *(_QWORD *)(v10 + 144);
        KmdProcessHandle = (void *)*((_QWORD *)this + 13);
        if ( !KmdProcessHandle )
        {
          v14 = VIDMM_GLOBAL::AdapterId(v4);
          KmdProcessHandle = VIDMM_PROCESS::GetKmdProcessHandle(v15, v14);
          *(_QWORD *)(v16 + 104) = KmdProcessHandle;
        }
        VIDMM_GLOBAL::FlushGpuVaTlb(v4, a2, &v17, v12, KmdProcessHandle, a3, a4);
      }
    }
  }
}
