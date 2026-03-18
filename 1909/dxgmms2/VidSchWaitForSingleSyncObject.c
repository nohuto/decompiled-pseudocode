/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C0003C30
 * Callers:
 *     ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C0073C40 (-VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REF.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00B203C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C00CCAA4 (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x1C0004008 (VidSchiAcquireSyncObject.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0004910 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00055D0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007ACF0 (VidSchiAllocateQueuePacket.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C00825C8 (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  int v7; // eax
  __int64 QueuePacket; // rax
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  int v12; // r15d
  KSPIN_LOCK *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  KSPIN_LOCK *v17; // rcx
  __int64 *v18; // rax
  _QWORD **v19; // rbx
  _QWORD *v20; // rsi
  _QWORD *v21; // rax
  VIDMM_PAGING_QUEUE *v23; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+78h] [rbp-40h] BYREF

  v4 = a2;
  if ( !a1 || !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v36);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 44);
  if ( v7 == 5 )
  {
    if ( *(_BYTE *)(a2 + 28) )
      return 3221225760LL;
  }
  else if ( v7 != 4 || *(_BYTE *)(a2 + 28) )
  {
    goto LABEL_5;
  }
  v23 = *(VIDMM_PAGING_QUEUE **)(a2 + 80);
  if ( v23 )
  {
    CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v23);
    v26 = CurrentPagingFenceId;
    if ( *(_BYTE *)(v25 + 29) )
    {
      if ( a3 > CurrentPagingFenceId )
      {
LABEL_41:
        if ( KdRefreshDebuggerNotPresent() )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdAssertion();
          v32[3] = a3;
          v32[4] = *(_QWORD *)(v4 + 80);
          v32[5] = v26;
          WdLogEvent5_WdAssertion(v32);
        }
        else
        {
          DbgPrintEx(
            0x65u,
            0,
            "\n"
            "A request was made to wait on monitored fence 0x%I64x on paging queue 0x%p,\n"
            "but the paging queue has not generated that fence. This wait breaks the ordered wait\n"
            "contract imposed on paging queues, and cannot be placed in the queue. The paging\n"
            "queue's most recently generated fence value is 0x%I64x\n",
            a3,
            *(const void **)(v4 + 80),
            v26);
          __debugbreak();
        }
        return 3221225485LL;
      }
    }
    else if ( (int)a3 - (int)CurrentPagingFenceId > 0 )
    {
      goto LABEL_41;
    }
  }
LABEL_5:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 788) == 0);
  v9 = QueuePacket;
  if ( !QueuePacket )
  {
    v33 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v33 + 24) = -1073741801LL;
    *(_QWORD *)(v33 + 32) = 9772LL;
    WdLogEvent5_WdAssertion(v33);
    return 3221225495LL;
  }
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 4;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = a1;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(v9 + 272) &= ~1u;
  *(_QWORD *)(v9 + 104) = CurrentThread;
  *(_QWORD *)(v9 + 72) = 0LL;
  v11 = *(_DWORD *)(v4 + 44);
  if ( v11 == 2 )
  {
    *(_QWORD *)(v9 + 304) = a3;
  }
  else if ( (unsigned int)(v11 - 4) <= 1 )
  {
    *(_QWORD *)(v9 + 304) = a3;
    v27 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v27[3] = v4;
    v27[4] = a3;
    v27[5] = a1;
    WdLogEvent5_WdEvent(v27);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1648), &LockHandle);
  *(_QWORD *)(v9 + 280) = v4;
  v12 = VidSchiAcquireSyncObject(a1, v4, v9);
  if ( v12 >= 0 && (*(_DWORD *)(v9 + 272) & 1) == 0 )
  {
    if ( !*(_BYTE *)(v4 + 26) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToQueue(v9);
      return 0LL;
    }
    v28 = MEMORY[0xFFFFF78000000320];
    v29 = *(_QWORD *)(v9 + 88);
    *(_DWORD *)(v9 + 64) |= 0x10u;
    *(_QWORD *)(v9 + 56) = v28;
    *(_DWORD *)(v9 + 52) = 17;
    v30 = (_QWORD *)(v9 + 32);
    v31 = *(_QWORD **)(v29 + 696);
    if ( *v31 == v29 + 688 )
    {
      *v30 = v29 + 688;
      v30[1] = v31;
      *v31 = v30;
      *(_QWORD *)(v29 + 696) = v30;
      ++*(_DWORD *)(v29 + 796);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    goto LABEL_54;
  }
  v13 = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_DWORD *)(v9 + 48) || !*(_QWORD *)(v9 + 616) && !*(_QWORD *)(v9 + 264) )
  {
    v14 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v14 + 24) = v9;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogEvent5_WdEvent(v14);
    *(_QWORD *)(v9 + 56) = MEMORY[0xFFFFF78000000320];
    v13 += 207;
    *(_DWORD *)(v9 + 52) = 0;
    v4 = v9 + 8;
    KeAcquireInStackQueuedSpinLock(v13, &v38);
    v15 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      v16 = *(_QWORD **)(v9 + 16);
      if ( *v16 == v4 )
      {
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        if ( a1 != -768 )
          --*(_DWORD *)(a1 + 768);
        KeReleaseInStackQueuedSpinLock(&v38);
        v17 = v13;
        if ( (*(_DWORD *)(v9 + 64) & 0x40) != 0 )
          goto LABEL_49;
        KeAcquireInStackQueuedSpinLock(v13, &v39);
        v18 = *(__int64 **)(a1 + 712);
        if ( *v18 == a1 + 704 )
        {
          *(_QWORD *)v4 = a1 + 704;
          *(_QWORD *)(v9 + 16) = v18;
          *v18 = v4;
          *(_QWORD *)(a1 + 712) = v4;
          if ( a1 != -720 )
            ++*(_DWORD *)(a1 + 720);
          KeReleaseInStackQueuedSpinLock(&v39);
          goto LABEL_21;
        }
      }
    }
LABEL_54:
    __fastfail(3u);
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
  v34[3] = 281LL;
  v34[4] = 2560LL;
  v34[5] = v9;
  v34[6] = *(_QWORD *)(v9 + 616);
  v34[7] = *(_QWORD *)(v9 + 264);
  WdLogEvent5_WdCriticalError(v34);
  __debugbreak();
LABEL_49:
  VidSchiInterlockedInsertTailList(v17, a1 + 728, v4, a1 + 744);
LABEL_21:
  if ( (*(_DWORD *)(v9 + 64) & 0x40) == 0 )
  {
    v19 = (_QWORD **)(a1 + 704);
    while ( 1 )
    {
      v20 = 0LL;
      KeAcquireInStackQueuedSpinLock(v13, &v40);
      v21 = *v19;
      if ( *v19 != v19 && *(_DWORD *)(a1 + 720) > 0x10u )
      {
        v20 = *v19;
        if ( (_QWORD **)v21[1] != v19 )
          goto LABEL_54;
        v35 = (_QWORD *)*v21;
        if ( (_QWORD *)v35[1] != v20 )
          goto LABEL_54;
        *v19 = v35;
        v35[1] = v19;
        --*(_DWORD *)(a1 + 720);
      }
      KeReleaseInStackQueuedSpinLock(&v40);
      if ( !v20 )
        break;
      ExFreePoolWithTag(v20 - 1, 0);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v12;
}
