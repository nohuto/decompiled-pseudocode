/*
 * XREFs of StorSetIoGatewayEmptyEvent @ 0x1C004AB54
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00743F8 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall StorSetIoGatewayEmptyEvent(__int64 a1, struct _KEVENT *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1, &LockHandle);
  if ( *(_DWORD *)(a1 + 192) )
    *(_QWORD *)(a1 + 200) = a2;
  else
    KeSetEvent(a2, 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
