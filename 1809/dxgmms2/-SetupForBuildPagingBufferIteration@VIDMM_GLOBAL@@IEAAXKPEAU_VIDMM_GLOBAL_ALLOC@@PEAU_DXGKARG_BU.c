/*
 * XREFs of ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10
 * Callers:
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C006E49C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F998 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006FA30 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FF70 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077F68 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007F7C8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C007F918 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A6FD8 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00AA1CC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00AC4F8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00ACDE8 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00AD36C (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2C2C (-PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4)
{
  __int64 v4; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rdx
  _QWORD *v14; // rax

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
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v14[3] = 270LL;
      v14[4] = 29LL;
      v14[5] = v8;
      v14[6] = a3;
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    if ( a3 )
    {
      v9 = *((_QWORD *)this + v4 + 143);
      v10 = *(_DWORD *)(v9 + 168);
      if ( v10 >= 0x400 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(this);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v4, 1u, 0LL, 0LL, 0, 0);
        _VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(*((_VIDMM_DMA_BUFFER **)this + v4 + 143), a3);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v9 + 176) + 8LL * v10) = a3;
        ++*(_DWORD *)(v9 + 168);
      }
    }
    v11 = *((_QWORD *)this + v4 + 143);
    if ( *(_DWORD *)(*((_QWORD *)this + v4 + 79) + 36LL) )
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 368LL);
    else
      v12 = *(_QWORD *)(v11 + 72);
    *((_QWORD *)this + v4 + 335) = v12;
    *((_QWORD *)this + v4 + 335) += *((unsigned int *)this + v4 + 414);
    a4->pDmaBuffer = (void *)*((_QWORD *)this + v4 + 335);
    v13 = (void *)(*((unsigned int *)this + v4 + 542) + *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 128LL));
    *((_QWORD *)this + v4 + 399) = v13;
    a4->pDmaBufferPrivateData = v13;
    a4->DmaSize = *((_DWORD *)this + v4 + 29) - *((_DWORD *)this + v4 + 414);
    a4->DmaBufferPrivateDataSize = *((_DWORD *)this + v4 + 93) - *((_DWORD *)this + v4 + 542);
    a4->DmaBufferGpuVirtualAddress = *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 96LL);
    a4->DmaBufferWriteOffset = *((_DWORD *)this + v4 + 414);
  }
}
