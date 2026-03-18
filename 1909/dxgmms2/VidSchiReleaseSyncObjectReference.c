/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x1C0009BC0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0007280 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0009DC0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D570 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E690 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C002E13C (VidSchiCompleteSignalCommmand.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0032B20 (VidSchDestroyPeriodicFrameNotification.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0034A9C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037DA0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchDestroySyncObject @ 0x1C0061B30 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00A9E38 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0013E84 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 */

void __fastcall VidSchiReleaseSyncObjectReference(char *P)
{
  int v2; // eax
  __int64 v3; // rdx
  char **v4; // rcx
  char *v5; // rsi
  __int64 v6; // rcx
  char **v7; // rax
  void *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-20h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 8, 0xFFFFFFFF) == 1 )
  {
    v2 = *((_DWORD *)P + 11);
    if ( v2 >= 3 )
    {
      if ( v2 == 3 )
      {
        if ( P[31] )
        {
          ExFreePoolWithTag(*((PVOID *)P + 8), 0);
          *((_QWORD *)P + 8) = 0LL;
        }
        else
        {
          ObfDereferenceObject(*((PVOID *)P + 7));
          *((_QWORD *)P + 7) = 0LL;
        }
      }
      else if ( (unsigned int)(v2 - 4) <= 1 && !*((_QWORD *)P + 2) )
      {
        VIDMM_GLOBAL::FreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(P + 56), P[24] != 0);
      }
    }
    if ( !P[27] )
      goto LABEL_4;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 1) + 2560LL), &LockHandle);
    v3 = *((_QWORD *)P + 24);
    if ( *(char **)(v3 + 8) == P + 192 )
    {
      v4 = (char **)*((_QWORD *)P + 25);
      if ( *v4 == P + 192 )
      {
        *v4 = (char *)v3;
        *(_QWORD *)(v3 + 8) = v4;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v5 = P + 144;
        if ( !*((_QWORD *)P + 18) )
          goto LABEL_18;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 26) + 8LL), &v10);
        v6 = *(_QWORD *)v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) == v5 )
        {
          v7 = (char **)*((_QWORD *)P + 19);
          if ( *v7 == v5 )
          {
            *v7 = (char *)v6;
            *(_QWORD *)(v6 + 8) = v7;
            KeReleaseInStackQueuedSpinLock(&v10);
LABEL_18:
            v8 = (void *)*((_QWORD *)P + 26);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v8, 0);
LABEL_4:
            ExFreePoolWithTag(P, 0);
            return;
          }
        }
      }
    }
    __fastfail(3u);
  }
}
