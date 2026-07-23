/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x1401210A8
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140121020 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 */

void __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  char v4; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += v3;
  v4 = *(_BYTE *)(a1 + 27);
  v6 = v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeWakeWaitChain(&v6, 0LL, 0LL);
  if ( v3 && v4 )
    ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
  __incgsdword(0x6374u);
}
