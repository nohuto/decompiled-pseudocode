/*
 * XREFs of DpiMiracastChunkInfoCallbackDpc @ 0x1C004C240
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C0013A40 (DpSynchronizeExecution.c)
 */

void __fastcall DpiMiracastChunkInfoCallbackDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  BOOLEAN v10; // [rsp+78h] [rbp+10h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
  v5 = DeferredContext[54];
  if ( v5 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v6 = *(_QWORD *)(v5 + 64);
    v7 = DeferredContext[63];
    v8 = DeferredContext[64];
    DpSynchronizeExecution(v5, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, &v7, *(_DWORD *)(v6 + 3908), &v10);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
