/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000B220
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000B110 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0039DD0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000B660 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000BB40 (VidSchiProcessIsrVSync.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E2F0 (VidSchiProcessIsrPreemptedPacket.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000E4DC (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C002A1B4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     LogPageFaultInformation @ 0x1C002BE78 (LogPageFaultInformation.c)
 *     McTemplateK0qq @ 0x1C002D990 (McTemplateK0qq.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002EF48 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiProcessIsrGpuEngineTimeout @ 0x1C0038DF4 (VidSchiProcessIsrGpuEngineTimeout.c)
 *     VidSchiProcessIsrHwQueuePageFaulted @ 0x1C0038E74 (VidSchiProcessIsrHwQueuePageFaulted.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x1C0038FA8 (VidSchiProcessIsrMonitoredFenceSignaled.c)
 *     VidSchiProcessIsrSchedulingLogFull @ 0x1C0039028 (VidSchiProcessIsrSchedulingLogFull.c)
 *     VidSchiProcessIsrSuspendContextCompleted @ 0x1C00390A8 (VidSchiProcessIsrSuspendContextCompleted.c)
 */

void __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 SubmissionFenceId; // rsi
  __int64 InterruptType; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 *v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 *v21; // rbp
  int v22; // ebx
  UINT PhysicalAdapterMask; // r8d
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 *v31; // rbx
  __int64 v32; // rbx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 ProcessingTime; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 *v42; // r15
  __int64 v43; // r15
  _QWORD *v44; // rax
  __int64 v45; // rcx
  UINT v46; // eax
  _QWORD *v47; // rax
  UINT v48; // eax
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // eax
  union _SLIST_HEADER *v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // ebp
  PSLIST_ENTRY v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PSLIST_ENTRY v60; // rbx
  const EVENT_DESCRIPTOR *v61; // rdx
  const GUID *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // [rsp+60h] [rbp+8h] BYREF
  __int64 v66; // [rsp+68h] [rbp+10h]

  SubmissionFenceId = *(_QWORD *)(a1 + 528);
  InterruptType = (unsigned int)a2->InterruptType;
  v8 = a3;
  v9 = a1;
  if ( (unsigned int)InterruptType > 0xA
    || (v10 = 1160, !_bittest(&v10, InterruptType))
    || (*(_DWORD *)(SubmissionFenceId + 36) & 0x10) == 0 )
  {
    switch ( (_DWORD)InterruptType )
    {
      case 1:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) == 0 )
          return;
        v15 = a2->DmaCompleted.NodeOrdinal
            + *(unsigned __int8 *)(a2->DmaCompleted.EngineOrdinal + SubmissionFenceId + 76);
        v16 = v15;
        if ( (_DWORD)a3 )
        {
          if ( _bittest64(*(const signed __int64 **)(SubmissionFenceId + 576), v15) )
            return;
        }
        v17 = *(__int64 **)(SubmissionFenceId + 616);
        if ( (unsigned int)v15 < *(_DWORD *)(SubmissionFenceId + 688) )
          v17 += v15;
        v18 = *v17;
        if ( *(_DWORD *)(v18 + 16) == 1 )
          return;
        if ( (_DWORD)a3 && *(_DWORD *)(v18 + 16) == 2 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v15);
          v27[3] = 281LL;
          v27[4] = 16LL;
          v27[5] = SubmissionFenceId;
          v27[6] = *(unsigned __int16 *)(v18 + 4);
          v27[7] = 0LL;
          v19 = WdLogEvent5_WdCriticalError(v27);
          __debugbreak();
        }
        else
        {
          SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
          v9 = *(unsigned int *)(v18 + 64);
          v66 = v4;
          v4 = *(_QWORD *)(v18 + 24);
          v65 = SubmissionFenceId;
          if ( (_DWORD)SubmissionFenceId == (_DWORD)v9 || (_DWORD)SubmissionFenceId == *(_DWORD *)(v18 + 72) )
            goto LABEL_23;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 152), 0, 0);
          if ( v19 >= (unsigned int)v9 )
          {
            if ( (unsigned int)SubmissionFenceId <= v19 && (unsigned int)SubmissionFenceId >= (unsigned int)v9 )
            {
LABEL_23:
              VidSchiProcessIsrCompletedPacket(v18, (unsigned int)SubmissionFenceId, a3, a2);
              return;
            }
            goto LABEL_58;
          }
        }
        if ( (unsigned int)SubmissionFenceId <= v19 || (unsigned int)SubmissionFenceId >= (unsigned int)v9 )
          goto LABEL_23;
LABEL_58:
        if ( *(_BYTE *)(v4 + 53) )
        {
          *(_DWORD *)(v18 + 2016) = 1;
          *(_BYTE *)(v18 + 2009) = 1;
          return;
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v16);
        v28[3] = 281LL;
        v28[4] = 1LL;
        v28[5] = SubmissionFenceId;
        v28[6] = v9;
        v28[7] = *(_QWORD *)(v4 + 16);
        WdLogEvent5_WdCriticalError(v28);
        __debugbreak();
        goto LABEL_61;
      case 0xB:
LABEL_61:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
        {
          v29 = a2->DmaCompleted.SubmissionFenceId
              + *(unsigned __int8 *)(a2->DmaCompleted.NodeOrdinal + SubmissionFenceId + 76);
          v30 = v29;
          if ( !v8 || !_bittest64(*(const signed __int64 **)(SubmissionFenceId + 576), v29) )
          {
            v31 = *(__int64 **)(SubmissionFenceId + 616);
            if ( (unsigned int)v29 < *(_DWORD *)(SubmissionFenceId + 688) )
              v31 += v29;
            v32 = *v31;
            if ( *(_DWORD *)(v32 + 16) != 1 )
            {
              if ( v8 && *(_DWORD *)(v32 + 16) == 2 )
              {
                v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v29);
                v33[3] = 281LL;
                v33[4] = 16LL;
                v33[5] = SubmissionFenceId;
                v33[6] = *(unsigned __int16 *)(v32 + 4);
                v33[7] = 0LL;
                WdLogEvent5_WdCriticalError(v33);
                __debugbreak();
              }
              VidSchiProcessIsrMonitoredFenceSignaled(v32, v30);
            }
          }
        }
        return;
      case 2:
        if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) == 0 )
          return;
        v20 = a2->DmaCompleted.EngineOrdinal
            + *(unsigned __int8 *)(a2->DmaPreempted.EngineOrdinal + SubmissionFenceId + 76);
        if ( (_DWORD)a3 )
        {
          if ( _bittest64(*(const signed __int64 **)(SubmissionFenceId + 576), v20) )
            return;
        }
        v21 = *(__int64 **)(SubmissionFenceId + 616);
        if ( (unsigned int)v20 < *(_DWORD *)(SubmissionFenceId + 688) )
          v21 += v20;
        v9 = *v21;
        if ( *(_DWORD *)(v9 + 16) == 1 )
          return;
        if ( !(_DWORD)a3 || *(_DWORD *)(v9 + 16) != 2 )
        {
          if ( (unsigned int)VidSchiVerifyDriverReportedFenceId(
                               (struct _VIDSCH_NODE *)v9,
                               a2->DmaCompleted.SubmissionFenceId,
                               1,
                               0LL)
            && (unsigned int)VidSchiVerifyDriverReportedFenceId(
                               (struct _VIDSCH_NODE *)v9,
                               a2->DmaCompleted.NodeOrdinal,
                               0,
                               &v65) )
          {
            do
            {
              v22 = VidSchiProcessIsrCompletedPacket(v9, v65, v8, a2);
              VidSchiProcessIsrPreemptedPacket(v9, a2->DmaCompleted.SubmissionFenceId, v8, a2);
            }
            while ( v22 );
          }
          return;
        }
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v20);
        v34[3] = 281LL;
        v34[4] = 16LL;
        v34[5] = SubmissionFenceId;
        v34[6] = *(unsigned __int16 *)(v9 + 4);
        v34[7] = 0LL;
        WdLogEvent5_WdCriticalError(v34);
        __debugbreak();
        break;
      case 4:
        break;
      case 9:
        goto LABEL_73;
      default:
        switch ( (_DWORD)InterruptType )
        {
          case 0xF:
            if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
            {
              v49 = *(_QWORD **)(SubmissionFenceId + 616);
              v50 = a2->DmaCompleted.SubmissionFenceId
                  + *(unsigned __int8 *)(a2->DmaCompleted.NodeOrdinal + SubmissionFenceId + 76);
              if ( (unsigned int)v50 < *(_DWORD *)(SubmissionFenceId + 688) )
                v49 += v50;
              VidSchiProcessIsrSchedulingLogFull(*v49);
            }
            break;
          case 0x10:
            if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
            {
              v51 = *(_QWORD **)(SubmissionFenceId + 616);
              v52 = a2->DmaCompleted.SubmissionFenceId
                  + *(unsigned __int8 *)(a2->DmaCompleted.NodeOrdinal + SubmissionFenceId + 76);
              if ( (unsigned int)v52 < *(_DWORD *)(SubmissionFenceId + 688) )
                v51 += v52;
              VidSchiProcessIsrGpuEngineTimeout(*v51);
            }
            break;
          case 0x11:
            if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
              VidSchiProcessIsrSuspendContextCompleted(*(_QWORD *)(a1 + 528), a2);
            break;
          case 0xC:
            if ( (*(_DWORD *)(SubmissionFenceId + 36) & 1) != 0 )
              VidSchiProcessIsrHwQueuePageFaulted(*(_QWORD *)(a1 + 528), a2);
            break;
          case 0xE:
            v53 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                    *(ADAPTER_DISPLAY **)(*(_QWORD *)(SubmissionFenceId + 16) + 2552LL),
                    a2->DmaCompleted.SubmissionFenceId);
            v56 = v53;
            if ( v53 == -1
              || (v54 = *(union _SLIST_HEADER **)(SubmissionFenceId + 8LL * v53 + 2576),
                  (unsigned __int8)a2->DmaCompleted.NodeOrdinal >= 8u) )
            {
              v63 = WdLogNewEntry5_WdAssertion(v55, v54);
              WdLogEvent5_WdAssertion(v63);
            }
            else
            {
              v57 = ExpInterlockedPopEntrySList(v54 + 4154);
              v60 = v57;
              if ( v57 )
              {
                HIDWORD(v57[2].Next) = a2->DmaCompleted.NodeOrdinal;
                LODWORD(v57[2].Next) = v56;
                LODWORD(v57->Next) = 14;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(SubmissionFenceId + 1696), v57 + 1);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                  McTemplateK0qq(
                    (PMCGEN_TRACE_CONTEXT)(unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits,
                    v61,
                    v62,
                    (const unsigned int)v60[2].Next,
                    HIDWORD(v60[2].Next));
              }
              else
              {
                v64 = WdLogNewEntry5_WdAssertion(v59, v58);
                *(_QWORD *)(v64 + 24) = a2->DmaCompleted.SubmissionFenceId;
                *(_QWORD *)(v64 + 32) = a2->DmaCompleted.NodeOrdinal;
                WdLogEvent5_WdAssertion(v64);
              }
            }
            break;
        }
        return;
    }
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, InterruptType);
    v35[3] = 281LL;
    v35[4] = 13LL;
    v35[5] = a2->DmaCompleted.EngineOrdinal;
    v35[6] = a2->DmaPreempted.EngineOrdinal;
    v35[7] = a2->DmaCompleted.SubmissionFenceId;
    WdLogEvent5_WdCriticalError(v35);
    __debugbreak();
LABEL_73:
    if ( (*(_DWORD *)(SubmissionFenceId + 36) & 4) != 0 )
    {
      ProcessingTime = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
      if ( (ProcessingTime & 0x10) != 0 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, InterruptType);
        v37[3] = 281LL;
        v37[4] = 12LL;
        v37[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
        v37[6] = a2->DmaCompleted.SubmissionFenceId;
        v37[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
        WdLogEvent5_WdCriticalError(v37);
        __debugbreak();
      }
      if ( (ProcessingTime & 0xC) == 0xC )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, InterruptType);
        v38[3] = 281LL;
        v38[4] = 13LL;
        v38[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
        v38[6] = a2->DmaPageFaulted.FaultedProcessHandle;
        v38[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
        WdLogEvent5_WdCriticalError(v38);
        __debugbreak();
      }
      if ( (unsigned int)ProcessingTime >= 0x40 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(ProcessingTime, InterruptType);
        v39[3] = 281LL;
        v39[4] = 13LL;
        v39[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
        v39[6] = a2->DmaPageFaulted.FaultedProcessHandle;
        v39[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
        WdLogEvent5_WdCriticalError(v39);
        __debugbreak();
      }
      v40 = a2->MiracastEncodeChunkCompleted.PrivateDataDriverSize
          + *(unsigned __int8 *)(a2->DmaPageFaulted.EngineOrdinal + SubmissionFenceId + 76);
      v41 = v40;
      if ( v8 && _bittest64(*(const signed __int64 **)(SubmissionFenceId + 576), v40) )
      {
        LogPageFaultInformation(1LL, v9, a2);
      }
      else
      {
        v42 = *(__int64 **)(SubmissionFenceId + 616);
        if ( (unsigned int)v40 < *(_DWORD *)(SubmissionFenceId + 688) )
          v42 += v40;
        v43 = *v42;
        if ( *(_DWORD *)(v43 + 16) == 1 )
        {
          LogPageFaultInformation(2LL, v9, a2);
        }
        else
        {
          if ( v8 && *(_DWORD *)(v43 + 16) == 2 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v40);
            v44[3] = 281LL;
            v44[4] = 16LL;
            v44[5] = SubmissionFenceId;
            v45 = *(unsigned __int16 *)(v43 + 4);
            v43 = 0LL;
            v44[6] = v45;
            v44[7] = 0LL;
            WdLogEvent5_WdCriticalError(v44);
            __debugbreak();
          }
          v46 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
          if ( (v46 & 2) != 0 )
          {
            if ( (v46 & 0xC) == 0 )
            {
              v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v41);
              v47[3] = 281LL;
              v47[4] = 13LL;
              v47[5] = (int)a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
              v47[6] = a2->DmaPageFaulted.FaultedProcessHandle;
              v47[7] = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
              LOBYTE(v46) = WdLogEvent5_WdCriticalError(v47);
              __debugbreak();
            }
            if ( (v46 & 4) != 0 )
            {
              LogPageFaultInformation(3LL, v9, a2);
              *(_DWORD *)(v43 + 2016) = 1;
            }
            else
            {
              LogPageFaultInformation(4LL, v9, a2);
              *(_DWORD *)(v43 + 2012) = 1;
            }
          }
          else if ( (unsigned int)VidSchiVerifyDriverReportedFenceId(
                                    (struct _VIDSCH_NODE *)v43,
                                    a2->DmaCompleted.SubmissionFenceId,
                                    0,
                                    &v65) )
          {
            VidSchiProcessIsrCompletedPacket(v43, v65, v8, a2);
            VidSchiProcessIsrFaultedPacket(v43, v65, v8, a2);
            v48 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ProcessingTime;
            if ( (v48 & 4) != 0 )
            {
              LogPageFaultInformation(3LL, v9, a2);
            }
            else if ( (v48 & 8) != 0 )
            {
              LogPageFaultInformation(4LL, v9, a2);
            }
            else
            {
              LogPageFaultInformation(5LL, v9, a2);
            }
          }
        }
      }
    }
    return;
  }
  if ( *(_DWORD *)(SubmissionFenceId + 68) <= 1u
    || (a2->Flags.Value & 1) == 0
    || ((_DWORD)InterruptType != 7
      ? ((_DWORD)InterruptType != 10
       ? (PhysicalAdapterMask = a2->CrtcVsync.PhysicalAdapterMask)
       : (PhysicalAdapterMask = a2->DmaCompleted.NodeOrdinal))
      : (PhysicalAdapterMask = a2->DmaCompleted.NodeOrdinal),
        PhysicalAdapterMask) )
  {
    v3 = MEMORY[0xFFFFF78000000320];
    v11 = VidSchiProcessIsrVSync(*(struct _VIDSCH_GLOBAL **)(a1 + 528), a2);
    if ( v11 != -1 && v11 < *(_DWORD *)(SubmissionFenceId + 40) )
    {
      _mm_lfence();
      v12 = *(_QWORD *)(SubmissionFenceId + 8LL * v11 + 2576);
      v13 = *(unsigned int *)(v12 + 33284);
      *(_QWORD *)(v12 + 8 * v13 + 33288) = v3;
      v14 = 10 * v13;
      *(_OWORD *)(v12 + 8 * v14 + 33320) = *(_OWORD *)&a2->InterruptType;
      *(_OWORD *)(v12 + 8 * v14 + 33336) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
      *(_OWORD *)(v12 + 8 * v14 + 33352) = *(_OWORD *)&a2->Reserved.Reserved[6];
      *(_OWORD *)(v12 + 8 * v14 + 33368) = *(_OWORD *)&a2->Reserved.Reserved[10];
      *(_OWORD *)(v12 + 8 * v14 + 33384) = *(_OWORD *)&a2->Reserved.Reserved[14];
      *(_DWORD *)(v12 + 33284) = ((unsigned __int8)*(_DWORD *)(v12 + 33284) + 1) & 3;
      return;
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, InterruptType);
    v24[3] = 281LL;
    v24[4] = 6LL;
    v24[5] = SubmissionFenceId;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
    __debugbreak();
  }
  v25 = *(unsigned int *)(SubmissionFenceId + 5368);
  *(_QWORD *)(SubmissionFenceId + 8 * v25 + 5376) = v3;
  v26 = 10 * v25;
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 5408) = *(_OWORD *)&a2->InterruptType;
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 5424) = *(_OWORD *)&a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkType;
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 5440) = *(_OWORD *)&a2->Reserved.Reserved[6];
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 5456) = *(_OWORD *)&a2->Reserved.Reserved[10];
  *(_OWORD *)(SubmissionFenceId + 8 * v26 + 5472) = *(_OWORD *)&a2->Reserved.Reserved[14];
  *(_DWORD *)(SubmissionFenceId + 5368) = ((unsigned __int8)*(_DWORD *)(SubmissionFenceId + 5368) + 1) & 3;
}
