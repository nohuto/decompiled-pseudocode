/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C0067BB0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C7240 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003A10 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0005150 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0024AC4 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchGetDriverPagingContext @ 0x1C006FDD4 (VidSchGetDriverPagingContext.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00C6830 (VidSchiDiscardQueuePacket.c)
 */

void __fastcall VidSchiSubmitPagingCommand(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  LARGE_INTEGER **v10; // rcx
  LARGE_INTEGER *v11; // rax
  LARGE_INTEGER v12; // rcx
  int v13; // eax
  LARGE_INTEGER v14; // r15
  void *v15; // r12
  ADAPTER_RENDER *v16; // r13
  __int64 v17; // rcx
  int v18; // edx
  struct _KEVENT *v19; // rcx
  int v20; // eax
  void (__fastcall *v21)(_QWORD); // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  void *DriverPagingContext; // rax
  UINT HighPart; // edx
  UINT v26; // ecx
  void *v27; // rax
  UINT v28; // ecx
  __int64 v29; // r11
  UINT v30; // r10d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r13
  _QWORD *v35; // rax
  _DXGKARG_PATCH v36; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v37[40]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = a1[11];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2428) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
  }
  else
  {
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v37, (const GUID *)0x14) )
    {
      *(_QWORD *)(i + 1376) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1336));
      v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1656), (_QWORD **)(v4 + 11200), 0LL);
      if ( v7 )
        break;
      memset(v37, 0, sizeof(v37));
      v20 = *(unsigned __int16 *)(v4 + 4);
      v37[8] |= 0x41u;
      v37[12] = v20;
      v37[4] = 0;
      v37[5] = 1;
    }
    v8 = (__int64)(v7 - 2);
    memset(v7 - 2, 0, 0xE0uLL);
    v9 = *(unsigned __int16 *)(v4 + 4);
    v10 = *(LARGE_INTEGER ***)(v5 + 616);
    if ( (unsigned int)v9 < *(_DWORD *)(v5 + 688) )
      v10 += v9;
    v11 = *v10;
    ++v11[6].QuadPart;
    v12 = v11[6];
    *(LARGE_INTEGER *)(v8 + 104) = v12;
    a1[15] = v12;
    *(_DWORD *)v8 = 912353622;
    *(_DWORD *)(v8 + 88) = 1;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    v13 = 0;
    *(_DWORD *)(v8 + 92) = 0;
    *(_DWORD *)(v8 + 72) = 7;
    *(_QWORD *)(v8 + 56) = a1;
    *(LARGE_INTEGER *)(v8 + 48) = v1;
    if ( a1[16].LowPart )
      v13 = 0x4000;
    *(_DWORD *)(v8 + 92) = v13;
    *(_BYTE *)(v5 + 54) = 1;
    if ( *(_DWORD *)(v4 + 11192) != -1 )
    {
      v21 = *(void (__fastcall **)(_QWORD))(v5 + 2432);
      if ( v21 )
        v21(*(_QWORD *)(v5 + 2496));
    }
    *(_BYTE *)(v5 + 54) = 0;
    *(_DWORD *)(v8 + 92) |= 0x400u;
    v14 = a1[35];
    *(LARGE_INTEGER *)(v8 + 64) = v14;
    if ( *(_DWORD *)(*(_QWORD *)(v14.QuadPart + 136) + 36LL) )
      v15 = *(void **)(*(_QWORD *)(v14.QuadPart + 56) + 368LL);
    else
      v15 = *(void **)(v14.QuadPart + 72);
    v16 = *(ADAPTER_RENDER **)(v5 + 8);
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 2416LL) + 352LL * *(unsigned __int16 *)(v4 + 6) + 40) )
    {
      v22 = VidSchiSchedulerNodeToDriverEngine(v5, a1[43].HighPart);
      DriverPagingContext = (void *)VidSchGetDriverPagingContext(v23, v22, LOBYTE(a1[44].LowPart));
      HighPart = a1[41].HighPart;
      v36.DmaBufferSegmentId = a1[40].LowPart;
      v36.DmaBufferPhysicalAddress = a1[39];
      v36.DmaBufferSize = *(_DWORD *)(v14.QuadPart + 40);
      v26 = a1[40].HighPart;
      v36.hDevice = DriverPagingContext;
      v27 = *(void **)(v14.QuadPart + 128);
      v36.DmaBufferSubmissionStartOffset = v26;
      v28 = a1[41].LowPart + v26;
      v36.pDmaBufferPrivateData = v27;
      v36.DmaBufferSubmissionEndOffset = v28;
      v36.pDmaBuffer = v15;
      v36.DmaBufferPrivateDataSize = *(_DWORD *)(v29 + 88);
      v36.DmaBufferPrivateDataSubmissionStartOffset = HighPart;
      v36.DmaBufferPrivateDataSubmissionEndOffset = a1[42].LowPart + HighPart;
      v36.pAllocationList = 0LL;
      v36.AllocationListSize = 0;
      memset(&v36.pPatchLocationList, 0, 20);
      v36.SubmissionFenceId = *(_DWORD *)(v8 + 104);
      v36.EngineOrdinal = v30;
      v36.Flags.Value = 1;
      v31 = ADAPTER_RENDER::DdiPatch(v16, &v36);
      v34 = v31;
      if ( v31 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
        v35[6] = &v36;
        v35[3] = 270LL;
        v35[4] = 25LL;
        v35[5] = v14.QuadPart;
        v35[7] = v34;
        WdLogEvent5_WdCriticalError(v35);
      }
    }
    *(_QWORD *)(v8 + 120) = v15;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2416LL)
                  + 352LL * *(unsigned __int16 *)(v4 + 6)
                  + 40) )
    {
      *(_DWORD *)(v8 + 92) |= 0x2000u;
      v17 = *(_QWORD *)(a1[35].QuadPart + 96);
      *(_QWORD *)(v8 + 176) = v17;
      *(_QWORD *)(v8 + 176) = v17 + (unsigned int)a1[40].HighPart;
      *(_DWORD *)(v8 + 148) = a1[41].LowPart;
      *(_QWORD *)(v8 + 192) = *(_QWORD *)(a1[35].QuadPart + 128);
    }
    else
    {
      *(_DWORD *)(v8 + 128) = a1[40].LowPart;
      *(LARGE_INTEGER *)(v8 + 136) = a1[39];
      *(_DWORD *)(v8 + 144) = a1[40].HighPart;
      *(_DWORD *)(v8 + 148) = a1[41].LowPart + a1[40].HighPart;
    }
    v18 = *(_DWORD *)(v8 + 92);
    *(_DWORD *)(v8 + 152) = a1[41].HighPart;
    *(_DWORD *)(v8 + 156) = a1[41].HighPart + a1[42].LowPart;
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v14.QuadPart + 160);
    *(_DWORD *)(v8 + 96) = a1[14].LowPart;
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_DWORD *)(v8 + 92) = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)BYTE1(a1[34].LowPart)) & 1;
    *(_DWORD *)(v8 + 208) = a1[42].HighPart;
    *(_DWORD *)(v8 + 212) = a1[43].LowPart;
    v19 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 48) + 96LL);
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 8;
    v19[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v19 + 10);
    VidSchiSendToExecutionQueue(v8, 0);
  }
}
