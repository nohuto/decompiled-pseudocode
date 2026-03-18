/*
 * XREFs of ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00AC4F8
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006E6F4 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C0024C08 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     VidSchGetDriverPagingHwQueue @ 0x1C00325C0 (VidSchGetDriverPagingHwQueue.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FD68 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00721E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1C00B39DC (-GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FEN.c)
 */

void __fastcall VIDMM_GLOBAL::SignalMonitoredFence(VIDMM_GLOBAL *this, unsigned int a2, void **a3, UINT64 a4, bool *a5)
{
  __int64 v6; // r15
  struct _VIDSCH_SYNC_OBJECT *v8; // r12
  VIDMM_FENCE_STORAGE_PAGE *v9; // rcx
  D3DGPU_VIRTUAL_ADDRESS PagingProcessGpuVA; // rax
  __int64 v11; // r9
  ADAPTER_RENDER *v12; // r9
  int v13; // eax
  int v14; // esi
  _DXGKARG_SIGNALMONITOREDFENCE v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v16; // [rsp+90h] [rbp-70h] BYREF

  v6 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 55LL)
    && !*((_BYTE *)this + 7072)
    && *((_QWORD *)this + a2 + 143)
    && (*(_DWORD *)(*((_QWORD *)this + a2 + 79) + 32LL) & 4) != 0
    && *((_QWORD *)this + a2 + 810) )
  {
    v8 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + a2 + 746);
    if ( v8 == (struct _VIDSCH_SYNC_OBJECT *)a3 )
    {
      if ( *((_BYTE *)this + a2 + 4617) )
      {
        *a5 = 1;
        return;
      }
      *((_BYTE *)this + a2 + 4617) = 1;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v16);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, (unsigned int)v6, 0LL, &v16);
      memset(&v15, 0, sizeof(v15));
      v9 = (VIDMM_FENCE_STORAGE_PAGE *)a3[7];
      v15.DmaBufferGpuVirtualAddress = v16.DmaBufferGpuVirtualAddress;
      v15.DmaBufferPrivateDataSize = v16.DmaBufferPrivateDataSize;
      v15.DmaSize = v16.DmaSize;
      v16.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE;
      PagingProcessGpuVA = VIDMM_FENCE_STORAGE_PAGE::GetPagingProcessGpuVA(
                             v9,
                             this,
                             (struct VIDMM_MONITORED_FENCE_STORAGE *)(a3 + 7),
                             v6);
      v15.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_BUILD_PAGING_BUFFER;
      v11 = *((_QWORD *)this + 2);
      v15.MonitoredFenceGpuVa = PagingProcessGpuVA;
      v16.UpdateContextAllocation.ContextAllocation = PagingProcessGpuVA;
      v15.MonitoredFenceCpuVa = a3[8];
      v15.MultipassOffset = v16.MultipassOffset;
      v15.pDmaBuffer = v16.pDmaBuffer;
      v15.pDmaBufferPrivateData = v16.pDmaBufferPrivateData;
      v15.MonitoredFenceValue = a4;
      v16.Fill.FillSize = a4;
      v15.hHwQueue = (HANDLE)VidSchGetDriverPagingHwQueue(*(_QWORD *)(v11 + 528), v6);
      v13 = ADAPTER_RENDER::DdiSignalMonitoredFence(v12, v16.hSystemContext, &v15);
      v16.DmaBufferPrivateDataSize = v15.DmaBufferPrivateDataSize;
      v14 = v13;
      v16.DmaSize = v15.DmaSize;
      v16.MultipassOffset = v15.MultipassOffset;
      v16.pDmaBuffer = v15.pDmaBuffer;
      v16.pDmaBufferPrivateData = v15.pDmaBufferPrivateData;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, (unsigned int)v6, 0LL, &v16, v13, 0, 0LL);
    }
    while ( v14 == -1071775743 );
    *a5 = v14 >= 0;
    if ( v8 == (struct _VIDSCH_SYNC_OBJECT *)a3 )
      *((_BYTE *)this + v6 + 4617) = 0;
  }
  else
  {
    *a5 = 0;
  }
}
