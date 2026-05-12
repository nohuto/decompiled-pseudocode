/*
 * XREFs of RaidAdapterInsertZombieUnit @ 0x1C001E388
 * Callers:
 *     RaidUnitConvertToZombieUnit @ 0x1C001E350 (RaidUnitConvertToZombieUnit.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterInsertZombieUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 208;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  *(_BYTE *)(a2 + 448) |= 0x20u;
  v4 = *(_QWORD **)(v2 + 16);
  v5 = (_QWORD *)(a2 + 56);
  if ( *v4 != v2 + 8 )
    __fastfail(3u);
  v5[1] = v4;
  *v5 = v2 + 8;
  *v4 = v5;
  *(_QWORD *)(v2 + 16) = v5;
  ++*(_DWORD *)(v2 + 24);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
