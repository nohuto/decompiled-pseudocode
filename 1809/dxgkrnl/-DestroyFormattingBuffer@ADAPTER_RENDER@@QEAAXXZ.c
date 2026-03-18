/*
 * XREFs of ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0031714
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C01C5C88 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01C6444 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DestroyFormattingBuffer(ADAPTER_RENDER *this)
{
  void *v1; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (void *)*((_QWORD *)this + 124);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 125, &LockHandle);
  *((_QWORD *)this + 124) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
