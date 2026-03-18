/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C0004910
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0003C30 (VidSchWaitForSingleSyncObject.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0007280 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E874 (VidSchiFreeQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C000FB7C (VidSchiCreateContextInternal.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002A37C (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002EDA4 (VidSchiProcessDpcDmaPacket.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035768 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C00374F0 (VidSchCreateHwQueue.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C007A520 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007ACF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007C4EC (VidSchRegisterCompletionEvent.c)
 *     VidSchiCreateDeviceInternal @ 0x1C007C868 (VidSchiCreateDeviceInternal.c)
 *     VidSchiCreateNode @ 0x1C00878F4 (VidSchiCreateNode.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
