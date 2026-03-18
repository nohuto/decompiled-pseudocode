/*
 * XREFs of ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005C11C
 * Callers:
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A534 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A718 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A8D4 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A970 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB84 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0081FE8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0082138 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0083974 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0083B60 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA64C (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00AFAF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00B07BC (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C250 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4)
{
  __int64 v4; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rdx
  _QWORD *v12; // rax

  v4 = (unsigned int)a2;
  if ( a3 && (**((_DWORD **)a3 + 63) & 0x10000000) != 0 )
  {
    a4->pDmaBuffer = 0LL;
    a4->pDmaBufferPrivateData = 0LL;
    a4->DmaSize = 0;
    a4->DmaBufferPrivateDataSize = 0;
    *((_QWORD *)this + (unsigned int)a2 + 335) = 0LL;
    *((_QWORD *)this + (unsigned int)a2 + 399) = 0LL;
  }
  else
  {
    v8 = *((_QWORD *)this + (unsigned int)a2 + 79);
    if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v12[7] = 0LL;
      v12[3] = 270LL;
      v12[4] = 29LL;
      v12[5] = v8;
      v12[6] = a3;
      WdLogEvent5_WdCriticalError(v12);
    }
    if ( a3 )
      VIDMM_GLOBAL::AddGlobalAllocReferenceToDmaBuffer(this, v4, a3);
    v9 = *((_QWORD *)this + v4 + 143);
    if ( *(_DWORD *)(*((_QWORD *)this + v4 + 79) + 36LL) )
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 368LL);
    else
      v10 = *(_QWORD *)(v9 + 72);
    *((_QWORD *)this + v4 + 335) = v10;
    *((_QWORD *)this + v4 + 335) += *((unsigned int *)this + v4 + 414);
    a4->pDmaBuffer = (void *)*((_QWORD *)this + v4 + 335);
    v11 = (void *)(*((unsigned int *)this + v4 + 542) + *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 128LL));
    *((_QWORD *)this + v4 + 399) = v11;
    a4->pDmaBufferPrivateData = v11;
    a4->DmaSize = *((_DWORD *)this + v4 + 29) - *((_DWORD *)this + v4 + 414);
    a4->DmaBufferPrivateDataSize = *((_DWORD *)this + v4 + 93) - *((_DWORD *)this + v4 + 542);
    a4->DmaBufferGpuVirtualAddress = *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 96LL);
    a4->DmaBufferWriteOffset = *((_DWORD *)this + v4 + 414);
  }
}
