/*
 * XREFs of StorAcquireSpinLockEx @ 0x1C001EED0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B84 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000712C (RaidAdapterAcquireStartIoLock.c)
 */

__int64 __fastcall StorAcquireSpinLockEx(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v4 = 0;
  v5 = **(_QWORD **)(a1 - 16);
  if ( a4 )
  {
    *(_DWORD *)a4 = a2;
    if ( a2 == 1 )
    {
      if ( KeGetCurrentIrql() <= 2u )
      {
        if ( a3 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
          return v4;
        }
        return (unsigned int)-1056964602;
      }
    }
    else
    {
      v7 = a2 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( !v9 )
          {
            if ( a3 )
            {
              KeAcquireInStackQueuedSpinLockForDpc((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
              return v4;
            }
            return (unsigned int)-1056964602;
          }
          if ( v9 != 1 )
            return (unsigned int)-1056964602;
          if ( KeGetCurrentIrql() >= 2u )
          {
            if ( a3 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
              return v4;
            }
            return (unsigned int)-1056964602;
          }
        }
        else if ( KeGetCurrentIrql() <= 2u )
        {
          *(_BYTE *)(a4 + 24) = RaidAdapterAcquireInterruptLock(v5);
          return v4;
        }
      }
      else if ( KeGetCurrentIrql() <= 2u )
      {
        RaidAdapterAcquireStartIoLock(v5, (struct _KLOCK_QUEUE_HANDLE *)(a4 + 8));
        return v4;
      }
    }
    return (unsigned int)-1056964600;
  }
  return 3238002694LL;
}
