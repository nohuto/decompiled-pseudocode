/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00C737C
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C7240 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0003388 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0024AC4 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C007A8EC (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C007A958 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C007A9FC (VidSchGetNewSubmissionFenceId.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C007CE54 (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00AAE0C (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     ?FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00B2A78 (-FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00C6830 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1, struct VIDMM_DEVICE *a2, __int64 a3)
{
  union _LARGE_INTEGER v3; // r14
  union _LARGE_INTEGER v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rax
  VIDMM_DMA_POOL *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  UINT LowPart; // ecx
  unsigned int v18; // edx
  __int64 v19; // rax
  UINT v20; // ecx
  UINT v21; // ecx
  UINT v22; // ecx
  UINT v23; // eax
  DWORD v24; // r8d
  bool v25; // cl
  ADAPTER_RENDER *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  union _LARGE_INTEGER *DmaPacket; // r15
  union _LARGE_INTEGER v31; // rax
  union _LARGE_INTEGER v32; // rdx
  LONG v33; // ecx
  LONG v34; // ecx
  bool v35; // cf
  LONG v36; // ecx
  DWORD v37; // edx
  __int64 HighPart; // rax
  void (__fastcall *v39)(_QWORD); // rax
  signed __int32 v41[8]; // [rsp+0h] [rbp-99h] BYREF
  struct _DXGKARG_PATCH v42; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v43; // [rsp+100h] [rbp+67h] BYREF
  void *v44; // [rsp+108h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER v45; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER v46; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a1[11];
  v5 = a1[35];
  v6 = *(_QWORD *)(v3.QuadPart + 104);
  v7 = *(_QWORD *)(v3.QuadPart + 96);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v8 + 2428) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v6 + 32))
    || *(_BYTE *)(v6 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    LODWORD(v12) = -1073741823;
    goto LABEL_24;
  }
  v9 = VIDMM_GLOBAL::PrepareDmaBuffer(0LL, a2, (struct _VIDMM_DMA_BUFFER *)v5.QuadPart, a1[42].HighPart, &v43, &v46);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
    v13[3] = v8;
    v13[4] = v3.QuadPart;
    v13[5] = a1;
    v13[6] = v12;
    WdLogEvent5_WdWarning(v13);
    VidSchMarkDeviceAsError(v6, 18LL, 0);
LABEL_24:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3);
    return (unsigned int)v12;
  }
  v14 = *(VIDMM_DMA_POOL **)(v5.QuadPart + 136);
  v44 = 0LL;
  VIDMM_DMA_POOL::BeginCPUAccess(v14, (struct _VIDMM_DMA_BUFFER *)v5.QuadPart, &v44);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  VidSchGetNewSubmissionFenceId(v8, (__int64)a1, *(unsigned __int16 *)(v7 + 4), (__int64 *)&v45);
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v15 = *(_QWORD *)(v3.QuadPart + 56);
  if ( ((*(_DWORD *)(v15 + 224) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL) + 2448LL) & 1) == 0)
    && ((*(_DWORD *)(v5.QuadPart + 28) & 4) == 0
     || (v16 = *(_QWORD *)(**(_QWORD **)(v5.QuadPart + 136) + 40LL),
         _InterlockedOr(v41, 0),
         *(_QWORD *)(v5.QuadPart + 152) != v16))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 552LL) + 7040LL) & 1) != 0 )
  {
    LowPart = a1[41].LowPart;
    v18 = *(unsigned __int16 *)(v7 + 4);
    v42.hDevice = *(HANDLE *)(v3.QuadPart + 64);
    v42.DmaBufferSegmentId = v43;
    v42.DmaBufferPhysicalAddress = v46;
    v42.DmaBufferSize = *(_DWORD *)(v5.QuadPart + 40);
    v42.pDmaBuffer = v44;
    v42.pDmaBufferPrivateData = *(void **)(v5.QuadPart + 128);
    v19 = *(_QWORD *)(v5.QuadPart + 136);
    v42.DmaBufferSubmissionStartOffset = LowPart;
    v42.DmaBufferSubmissionEndOffset = a1[41].HighPart + LowPart;
    v20 = *(_DWORD *)(v19 + 88);
    v42.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5.QuadPart + 112);
    v42.AllocationListSize = a1[42].HighPart;
    v42.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v5.QuadPart + 120);
    LODWORD(v19) = *(_DWORD *)(v5.QuadPart + 52);
    v42.DmaBufferPrivateDataSize = v20;
    v21 = a1[44].LowPart;
    v42.PatchLocationListSize = v19;
    LODWORD(v19) = a1[43].LowPart;
    v42.DmaBufferPrivateDataSubmissionStartOffset = v21;
    v22 = a1[44].HighPart + v21;
    v42.PatchLocationListSubmissionStart = v19;
    v42.PatchLocationListSubmissionLength = a1[43].HighPart;
    v42.DmaBufferPrivateDataSubmissionEndOffset = v22;
    v42.SubmissionFenceId = v45.LowPart;
    v23 = VidSchiSchedulerNodeToDriverEngine(v8, v18);
    v24 = a1[9].LowPart;
    v25 = (*(_BYTE *)(v3.QuadPart + 112) & 2) == 0;
    v42.EngineOrdinal = v23;
    v42.Flags.Value = ((v24 & 0x20 | (v24 >> 1) & 0x40) >> 4) | ((v24 & 0x8000) == 0 && v25 ? 0 : 8);
    LODWORD(v12) = ADAPTER_RENDER::DdiPatch(v26, &v42);
    if ( (int)v12 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
      v29[3] = 281LL;
      v29[4] = 3LL;
      v29[5] = v8;
      v29[6] = v3.QuadPart;
      v29[7] = a1;
      WdLogEvent5_WdCriticalError(v29);
      __debugbreak();
    }
    VIDMM_DMA_POOL::FlushPendingCPUAccess(
      *(VIDMM_DMA_POOL **)(v5.QuadPart + 136),
      (struct _VIDMM_DMA_BUFFER *)v5.QuadPart);
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v7);
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 912353622;
  DmaPacket[6] = v3;
  DmaPacket[8] = v5;
  v31.QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  v32 = DmaPacket[7];
  DmaPacket[10] = v31;
  DmaPacket[9].LowPart = 7;
  v31.LowPart = (*(_DWORD *)(v32.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v31.LowPart;
  v33 = v31.LowPart | (*(_DWORD *)(v32.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v33;
  v31.LowPart = v33 | (*(_DWORD *)(v32.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v31.LowPart;
  v34 = v31.LowPart | (4 * (*(_DWORD *)(v32.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v34;
  v35 = a1[16].LowPart != 0;
  DmaPacket[13] = v45;
  DmaPacket[11].LowPart = 0;
  v32.LowPart = v34 | (v35 ? 0x4000 : 0);
  DmaPacket[11].HighPart = v32.LowPart;
  DmaPacket[12].LowPart = a1[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v44;
  DmaPacket[16].LowPart = v43;
  DmaPacket[17] = v46;
  DmaPacket[18].LowPart = a1[41].LowPart;
  DmaPacket[18].HighPart = a1[41].LowPart + a1[41].HighPart;
  DmaPacket[19].LowPart = a1[44].LowPart;
  DmaPacket[19].HighPart = a1[44].LowPart + a1[44].HighPart;
  DmaPacket[20].LowPart = a1[42].LowPart;
  DmaPacket[20].HighPart = a1[42].HighPart;
  DmaPacket[21].LowPart = a1[43].LowPart;
  DmaPacket[21].HighPart = a1[43].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v5.QuadPart + 160);
  v36 = v32.LowPart | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  DmaPacket[11].HighPart = v36;
  v37 = a1[9].LowPart;
  if ( (v37 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[49].HighPart;
    if ( (_DWORD)HighPart != -1 && (v37 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * HighPart + 2576) + 33272LL) != -1 )
      {
        v39 = *(void (__fastcall **)(_QWORD))(v8 + 2432);
        if ( v39 )
        {
          v39(*(_QWORD *)(v8 + 2496));
          v36 = DmaPacket[11].HighPart;
        }
      }
      DmaPacket[11].HighPart = v36 | 0x800;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v12;
}
