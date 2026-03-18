/*
 * XREFs of VidSchiProcessPrimariesTerminationList @ 0x1C002F3D8
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002E430 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00CDE90 (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C001400C (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00250B8 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidSchiProcessPrimariesTerminationList(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rbx
  _QWORD *v4; // r9
  _QWORD *v5; // rdi
  _QWORD *v6; // r9
  VIDMM_GLOBAL ***v7; // r10
  __int64 v8; // rax
  _QWORD *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1680), &LockHandle);
  v3 = (_QWORD **)(a1 + 1712);
  v4 = *v3;
  if ( *v3 != v3 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v2, (__int64)(v4 - 25)) )
      {
        v8 = *v6;
        if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        VIDMM_GLOBAL::AddPendingTermination(*v7[1], (struct VIDMM_ALLOC *)v7);
      }
      v4 = v5;
    }
    while ( v5 != v3 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
