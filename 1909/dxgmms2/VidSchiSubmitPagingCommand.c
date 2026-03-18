/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C0079440
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008B560 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C9F58 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003C08 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004990 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0005FB0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C0009290 (VidSchIsTDRPending.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C00241D4 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchGetDriverPagingContext @ 0x1C005BF50 (VidSchGetDriverPagingContext.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00C9544 (VidSchiDiscardQueuePacket.c)
 */

void __fastcall VidSchiSubmitPagingCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  struct _VIDSCH_QUEUE_PACKET *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // r13
  void *v17; // r12
  __int64 v18; // rcx
  int v19; // edx
  struct _KEVENT *v20; // rcx
  int v21; // eax
  void (__fastcall *v22)(_QWORD); // rax
  unsigned int v23; // eax
  _QWORD *v24; // rcx
  void *DriverPagingContext; // rax
  UINT v26; // edx
  UINT v27; // ecx
  void *v28; // rax
  UINT v29; // r10d
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r13
  _QWORD *v34; // rax
  _DXGKARG_PATCH v35; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v36[40]; // [rsp+A0h] [rbp-60h] BYREF
  ADAPTER_RENDER *v38; // [rsp+180h] [rbp+80h]

  v1 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2428) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    VidSchiDiscardQueuePacket(a1);
  }
  else
  {
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, v36, 20LL) )
    {
      *(_QWORD *)(i + 1376) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1336));
      v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1656), (_QWORD **)(v4 + 11200), 0LL);
      if ( v7 )
        break;
      memset(v36, 0, sizeof(v36));
      v21 = *(unsigned __int16 *)(v4 + 4);
      v36[8] |= 0x41u;
      v36[12] = v21;
      v36[5] = 1;
    }
    v8 = (__int64)(v7 - 2);
    memset(v7 - 2, 0, 0xE0uLL);
    v9 = *(unsigned __int16 *)(v4 + 4);
    v10 = *(__int64 **)(v5 + 616);
    if ( (unsigned int)v9 < *(_DWORD *)(v5 + 688) )
      v10 += v9;
    v11 = *v10;
    v12 = a1;
    v13 = ++*(_QWORD *)(v11 + 48);
    *(_QWORD *)(v8 + 104) = v13;
    *((_QWORD *)a1 + 15) = v13;
    *(_DWORD *)v8 = 912353622;
    *(_DWORD *)(v8 + 88) = 1;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    v14 = 0;
    *(_DWORD *)(v8 + 92) = 0;
    *(_DWORD *)(v8 + 72) = 7;
    *(_QWORD *)(v8 + 56) = a1;
    *(_QWORD *)(v8 + 48) = v1;
    if ( *((_DWORD *)a1 + 32) )
      v14 = 0x4000;
    *(_DWORD *)(v8 + 92) = v14;
    *(_BYTE *)(v5 + 54) = 1;
    if ( *(_DWORD *)(v4 + 11192) != -1 )
    {
      v22 = *(void (__fastcall **)(_QWORD))(v5 + 2432);
      if ( v22 )
        v22(*(_QWORD *)(v5 + 2496));
    }
    *(_BYTE *)(v5 + 54) = 0;
    *(_DWORD *)(v8 + 92) |= 0x400u;
    v15 = *((_QWORD *)a1 + 35);
    *(_QWORD *)(v8 + 64) = v15;
    v16 = *(_QWORD *)(v15 + 136);
    if ( *(_DWORD *)(v16 + 36) )
      v17 = *(void **)(*(_QWORD *)(v15 + 56) + 368LL);
    else
      v17 = *(void **)(v15 + 72);
    v38 = *(ADAPTER_RENDER **)(v5 + 8);
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 2440LL) + 352LL * *(unsigned __int16 *)(v4 + 6) + 40) )
    {
      memset(&v35, 0, sizeof(v35));
      v23 = VidSchiSchedulerNodeToDriverEngine(v5, *((_DWORD *)v12 + 87));
      DriverPagingContext = (void *)VidSchGetDriverPagingContext(v24, v23, *((_BYTE *)v12 + 352));
      v26 = *((_DWORD *)v12 + 83);
      v35.DmaBufferSegmentId = *((_DWORD *)v12 + 80);
      v35.DmaBufferPhysicalAddress.QuadPart = *((_QWORD *)v12 + 39);
      v35.DmaBufferSize = *(_DWORD *)(v15 + 40);
      v35.DmaBufferSubmissionStartOffset = *((_DWORD *)v12 + 81);
      v27 = *((_DWORD *)v12 + 82) + v35.DmaBufferSubmissionStartOffset;
      v35.hDevice = DriverPagingContext;
      v28 = *(void **)(v15 + 128);
      v35.DmaBufferSubmissionEndOffset = v27;
      v35.pDmaBufferPrivateData = v28;
      v35.pDmaBuffer = v17;
      LODWORD(v28) = *(_DWORD *)(v16 + 88);
      v35.DmaBufferPrivateDataSubmissionStartOffset = v26;
      v35.DmaBufferPrivateDataSubmissionEndOffset = *((_DWORD *)v12 + 84) + v26;
      v35.DmaBufferPrivateDataSize = (unsigned int)v28;
      LODWORD(v28) = *(_DWORD *)(v8 + 104);
      v35.pAllocationList = 0LL;
      v35.AllocationListSize = 0;
      memset(&v35.pPatchLocationList, 0, 20);
      v35.SubmissionFenceId = (unsigned int)v28;
      v35.EngineOrdinal = v29;
      v35.Flags.Value = 1;
      v30 = ADAPTER_RENDER::DdiPatch(v38, &v35);
      v33 = v30;
      if ( v30 < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v31);
        v34[6] = &v35;
        v34[3] = 270LL;
        v34[4] = 25LL;
        v34[5] = v15;
        v34[7] = v33;
        WdLogEvent5_WdCriticalError(v34);
      }
    }
    *(_QWORD *)(v8 + 120) = v17;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2440LL)
                  + 352LL * *(unsigned __int16 *)(v4 + 6)
                  + 40) )
    {
      *(_DWORD *)(v8 + 92) |= 0x2000u;
      v18 = *(_QWORD *)(*((_QWORD *)v12 + 35) + 96LL);
      *(_QWORD *)(v8 + 176) = v18;
      *(_QWORD *)(v8 + 176) = v18 + *((unsigned int *)v12 + 81);
      *(_DWORD *)(v8 + 148) = *((_DWORD *)v12 + 82);
      *(_QWORD *)(v8 + 192) = *(_QWORD *)(*((_QWORD *)v12 + 35) + 128LL);
    }
    else
    {
      *(_DWORD *)(v8 + 128) = *((_DWORD *)v12 + 80);
      *(_QWORD *)(v8 + 136) = *((_QWORD *)v12 + 39);
      *(_DWORD *)(v8 + 144) = *((_DWORD *)v12 + 81);
      *(_DWORD *)(v8 + 148) = *((_DWORD *)v12 + 82) + *((_DWORD *)v12 + 81);
    }
    v19 = *(_DWORD *)(v8 + 92);
    *(_DWORD *)(v8 + 152) = *((_DWORD *)v12 + 83);
    *(_DWORD *)(v8 + 156) = *((_DWORD *)v12 + 83) + *((_DWORD *)v12 + 84);
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v15 + 160);
    *(_DWORD *)(v8 + 96) = *((_DWORD *)v12 + 28);
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_DWORD *)(v8 + 92) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)BYTE1(*((_DWORD *)v12 + 68))) & 1;
    *(_DWORD *)(v8 + 208) = *((_DWORD *)v12 + 85);
    *(_DWORD *)(v8 + 212) = *((_DWORD *)v12 + 86);
    v20 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 48) + 96LL);
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 8;
    v20[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v20 + 10);
    VidSchiSendToExecutionQueue(v8, 0);
  }
}
