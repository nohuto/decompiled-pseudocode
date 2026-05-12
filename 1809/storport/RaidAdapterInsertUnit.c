/*
 * XREFs of RaidAdapterInsertUnit @ 0x1C0019464
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C00191AC (RaidBusEnumeratorGetUnit.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C001D6DC (RaidUnitConvertToNormalUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0023448 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     StorInsertDictionary @ 0x1C0019508 (StorInsertDictionary.c)
 */

void __fastcall RaidAdapterInsertUnit(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  KIRQL v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v4 = *(_QWORD **)(a1 + 144);
  v5 = (_QWORD *)(a2 + 56);
  if ( *v4 != a1 + 136 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v4;
  *v5 = a1 + 136;
  *v4 = v5;
  *(_QWORD *)(a1 + 144) = v5;
  ++*(_DWORD *)(a1 + 152);
  v6 = RaidAdapterAcquireInterruptLock(a1);
  StorInsertDictionary(a1 + 160, a2 + 72);
  RaidAdapterReleaseInterruptLock(a1, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
