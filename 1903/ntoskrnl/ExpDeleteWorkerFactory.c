/*
 * XREFs of ExpDeleteWorkerFactory @ 0x1400E6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     IoFreeMiniCompletionPacket @ 0x140697720 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpDeleteWorkerFactory(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rbx
  char v4; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 34LL) = 1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(void **)(v2 + 8);
  v4 = *(_BYTE *)(v2 + 32);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x66577845u);
  ObCloseHandle(*(HANDLE *)(a1 + 40), 0);
  ObfDereferenceObject(v3);
  if ( !v4 )
  {
    IoFreeMiniCompletionPacket(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
  }
}
