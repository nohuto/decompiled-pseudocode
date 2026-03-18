/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004990
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0009510 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C0011410 (VidSchiDecrementContextReference.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002A37C (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z @ 0x1C003535C (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0079440 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007A0A0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C007A520 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007ACF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateDmaPacket @ 0x1C007D118 (VidSchiAllocateDmaPacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, _QWORD **a2, _DWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v6 = *a2;
  if ( *a2 != a2 )
  {
    v5 = *a2;
    if ( (_QWORD **)v6[1] != a2 || (v7 = (_QWORD *)*v6, (_QWORD *)v7[1] != v5) )
      __fastfail(3u);
    *a2 = v7;
    v7[1] = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
