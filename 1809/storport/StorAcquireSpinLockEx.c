/*
 * XREFs of StorAcquireSpinLockEx @ 0x1C001B620
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterAcquireStartIoLock @ 0x1C0006268 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 */

__int64 __fastcall StorAcquireSpinLockEx(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v4 = **(_QWORD **)(a1 - 16);
  if ( !a4 )
    return 3238002694LL;
  *(_DWORD *)a4 = a2;
  v6 = a2 - 1;
  if ( !v6 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      if ( !a3 )
        return 3238002694LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
      return 0LL;
    }
    return 3238002696LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      RaidAdapterAcquireStartIoLock(v4, (struct _KLOCK_QUEUE_HANDLE *)(a4 + 8));
      return 0LL;
    }
    return 3238002696LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      *(_BYTE *)(a4 + 24) = RaidAdapterAcquireInterruptLock(v4);
      return 0LL;
    }
    return 3238002696LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( !a3 )
      return 3238002694LL;
    KeAcquireInStackQueuedSpinLockForDpc((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
    return 0LL;
  }
  if ( v9 != 1 )
    return 3238002694LL;
  if ( KeGetCurrentIrql() < 2u )
    return 3238002696LL;
  if ( !a3 )
    return 3238002694LL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
  return 0LL;
}
