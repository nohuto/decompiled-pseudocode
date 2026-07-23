/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x1400AAC70
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // r8
  __int16 v5; // cx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(BugCheckParameter1 + 96), &LockHandle);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v5 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter2 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter2 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL);
  }
  if ( (v5 & 0x80u) != 0 )
    ExpReleaseResourceExclusiveForThreadLite(BugCheckParameter1, BugCheckParameter2, &LockHandle);
  else
    ExpReleaseResourceSharedForThreadLite(BugCheckParameter1, BugCheckParameter2, &LockHandle);
}
