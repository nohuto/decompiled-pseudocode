/*
 * XREFs of StorPortUnitActiveConditionStep2 @ 0x1C0007224
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00071A0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00072C4 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidRestartIoQueue @ 0x1C000B150 (RaidRestartIoQueue.c)
 *     McTemplateK0pquuut @ 0x1C003FC44 (McTemplateK0pquuut.c)
 */

void __fastcall StorPortUnitActiveConditionStep2(__int64 a1, char a2)
{
  KSPIN_LOCK *v4; // rcx
  int v5; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v4 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1744) + 88LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) |= 2u;
  StorPortUnitFlushActivePendingRequestQueue(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(a1 + 695) )
  {
    *(_BYTE *)(a1 + 695) = 0;
    RaidRestartIoQueue(a1);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0062741 & 1) != 0 )
      McTemplateK0pquuut(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStop,
        v5,
        **(_QWORD **)(a1 + 1744),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2);
  }
}
