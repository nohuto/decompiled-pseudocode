/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x14031C074
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x14031BD40 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceExclusive @ 0x140050D30 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313670 (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  int v3; // ebp
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // r14d
  char v7; // si
  int v8; // ecx
  unsigned int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  v4 = 0;
  v5 = 0;
  __incgsdword(0x63E0u);
  v6 = 65537;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v7 = ExpTryAcquireResourceExclusive(a1);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v8 | 8;
    if ( v3 )
      v5 = *(_DWORD *)(a1 + 68);
    LOBYTE(v4) = v3 != 0;
    v6 = 32 * v4 + 65537;
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v9 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v9;
    if ( v3 )
    {
      v5 = *(_DWORD *)(a1 + 68);
      v4 = v9 >> 3;
      v6 = 65585;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
  {
    __incgsdword(0x63E4u);
    __incgsdword(0x6364u);
  }
  if ( v3 )
    PerfLogExecutiveResourceAcquire(v6, a1, v4, v5);
  return v7;
}
