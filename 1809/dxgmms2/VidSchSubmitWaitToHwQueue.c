/*
 * XREFs of VidSchSubmitWaitToHwQueue @ 0x1C0037910
 * Callers:
 *     ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C0065320 (-VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REF.c)
 *     VidSchWaitForPagingFence @ 0x1C00C9FFC (VidSchWaitForPagingFence.c)
 * Callees:
 *     ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C003354C (-VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034D64 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003907C (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CA558 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitWaitToHwQueue(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_SYNC_OBJECT *a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 HwQueuePacket; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rax
  int v15; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  if ( *((_DWORD *)a2 + 11) == 5 && *((_BYTE *)a2 + 28) )
    return 3221225760LL;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, 0LL);
  v11 = HwQueuePacket;
  if ( HwQueuePacket )
  {
    *(_DWORD *)HwQueuePacket = 895576406;
    *(_DWORD *)(HwQueuePacket + 48) = 4;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_DWORD *)(v11 + 272) &= ~1u;
    *(_QWORD *)(v11 + 104) = CurrentThread;
    *(_QWORD *)(v11 + 304) = a3;
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a1;
    WdLogEvent5_WdEvent(v14);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1648), &LockHandle);
    *(_QWORD *)(v11 + 280) = a2;
    v15 = VidSchiAcquireSyncObjectForHwQueue(a2, (struct _VIDSCH_QUEUE_PACKET *)v11);
    if ( v15 < 0 || (*(_DWORD *)(v11 + 272) & 1) != 0 )
    {
      VidSchiFreeQueuePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)v11);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v15;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v11);
      return 0LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = -1073741801LL;
    *(_QWORD *)(v12 + 32) = 3952LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225495LL;
  }
}
