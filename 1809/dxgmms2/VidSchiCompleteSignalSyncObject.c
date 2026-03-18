/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x1C0008D60
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0015EB0 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0034084 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037360 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58 (VidSchiUnwaitWaitQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C002ECD0 (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C00308B4 (VidSchiUnblockUnorderedWaiter.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  int v17; // edx
  _QWORD *v18; // rdi
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // ecx
  _QWORD *v23; // rdx
  _QWORD *v24; // rdx
  int v25; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a2 + 44);
  if ( (_DWORD)v7 == 4 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a2 + 28) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v7);
      v10[3] = a2;
      v10[4] = **(_QWORD **)(a2 + 64);
      v10[5] = *a4;
      WdLogEvent5_WdEvent(v10);
      v11 = *a4;
      v12 = *(_QWORD **)(a2 + 64);
      if ( *(_BYTE *)(a2 + 29) )
        *v12 = v11;
      else
        *(_DWORD *)v12 = v11;
      VidSchiUnwaitMonitoredFences(a1, v5);
    }
    goto LABEL_6;
  }
  if ( (_DWORD)v7 )
  {
    v16 = v7 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v7 = (unsigned int)(v17 - 1);
        if ( !(_DWORD)v7 )
        {
          if ( *(_BYTE *)(a2 + 31) )
            ((void (__fastcall *)(_QWORD))DxgCoreInterface[63])(*(_QWORD *)(a2 + 64));
          else
            KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
          goto LABEL_6;
        }
        if ( (_DWORD)v7 != 2 )
          goto LABEL_6;
        goto LABEL_2;
      }
      if ( *(_BYTE *)(a2 + 27) )
      {
        v19 = *(_QWORD *)(a2 + 208);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 8), &LockHandle);
        if ( *(_QWORD *)(v19 + 32) < *a4 )
          *(_QWORD *)(v19 + 32) = *a4;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else if ( *(_QWORD *)(a2 + 72) < *a4 )
      {
        *(_QWORD *)(a2 + 72) = *a4;
      }
      if ( *(_DWORD *)(a2 + 36) )
        VidSchiUnblockUnorderedWaiter(a1, a2, 0LL);
      v18 = *(_QWORD **)(a2 + 96);
      while ( v18 != (_QWORD *)(a2 + 96) )
      {
        v20 = v18 - 36;
        v18 = (_QWORD *)*v18;
        if ( *(_BYTE *)(a2 + 27) )
          v21 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
        else
          v21 = *(_QWORD *)(a2 + 72);
        if ( v20[38] <= v21 )
          VidSchiUnwaitWaitQueuePacket(a1, v20, 0LL);
      }
    }
    else
    {
      v22 = *(_DWORD *)(a2 + 56);
      if ( v22 < *(_DWORD *)(a2 + 60) )
      {
        v23 = (_QWORD *)(a2 + 96);
        *(_DWORD *)(a2 + 56) = v22 + 1;
        if ( (_QWORD *)*v23 != v23 )
        {
          v24 = (_QWORD *)*v23;
          *(_DWORD *)(a2 + 56) = v22;
          VidSchiUnwaitWaitQueuePacket(a1, v24 - 36, 0LL);
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    v13 = *(_QWORD *)(a2 + 96);
    if ( v13 != a2 + 96 )
    {
      v14 = v13 - 288;
      v15 = *(_QWORD *)(v13 - 288 + 88);
      if ( !v15 )
        v15 = *(_QWORD *)(v14 + 96);
      *(_QWORD *)(a2 + 56) = v15;
      VidSchiUnwaitWaitQueuePacket(a1, v14, 0LL);
    }
  }
LABEL_6:
  if ( *(_BYTE *)(a2 + 27) )
  {
    if ( a5 )
    {
      v25 = *(_DWORD *)(a2 + 44);
      if ( ((v25 - 2) & 0xFFFFFFFC) == 0 && v25 != 3 )
        VidSchiPropagateCrossAdapterSignal(a2);
    }
  }
}
