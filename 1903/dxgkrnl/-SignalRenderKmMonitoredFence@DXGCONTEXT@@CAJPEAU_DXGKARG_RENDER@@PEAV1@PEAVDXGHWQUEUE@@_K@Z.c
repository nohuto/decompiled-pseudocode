/*
 * XREFs of ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0268268
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0118860 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C02675FC (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C01FEC28 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SignalRenderKmMonitoredFence(
        struct _DXGKARG_RENDER *a1,
        struct DXGCONTEXT *a2,
        struct DXGHWQUEUE *a3,
        D3DGPU_VIRTUAL_ADDRESS a4)
{
  ADAPTER_RENDER *v8; // rdi
  __int64 v9; // rdx
  void *v10; // rax
  void *v11; // rdx
  __int64 result; // rax
  struct _DXGKARG_SIGNALMONITOREDFENCE v13; // [rsp+20h] [rbp-50h] BYREF

  v8 = *(ADAPTER_RENDER **)(*((_QWORD *)a2 + 2) + 16LL);
  memset(&v13, 0, sizeof(v13));
  v9 = *((_QWORD *)a2 + 30);
  v13.DmaBufferPrivateDataSize = a1->DmaBufferPrivateDataSize;
  v13.DmaSize = a1->DmaSize;
  v13.MultipassOffset = a1->MultipassOffset;
  v13.pDmaBuffer = a1->pDmaBuffer;
  v13.pDmaBufferPrivateData = a1->pDmaBufferPrivateData;
  v13.DmaBufferGpuVirtualAddress = a4;
  v13.MonitoredFenceGpuVa = *(_QWORD *)(v9 + 48);
  v10 = *(void **)(v9 + 64);
  v11 = (void *)*((_QWORD *)a2 + 23);
  v13.MonitoredFenceCpuVa = v10;
  v13.MonitoredFenceValue = *((_QWORD *)a2 + 31);
  v13.hHwQueue = (HANDLE)*((_QWORD *)a3 + 4);
  v13.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_RENDERGDI;
  result = ADAPTER_RENDER::DdiSignalMonitoredFence(v8, v11, (const GUID *)&v13);
  a1->DmaBufferPrivateDataSize = v13.DmaBufferPrivateDataSize;
  a1->DmaSize = v13.DmaSize;
  a1->MultipassOffset = v13.MultipassOffset;
  a1->pDmaBuffer = v13.pDmaBuffer;
  a1->pDmaBufferPrivateData = v13.pDmaBufferPrivateData;
  return result;
}
