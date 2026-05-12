/*
 * XREFs of StorPortUnitActiveConditionStep2 @ 0x1C0007354
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00072D0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00073E8 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 *     McTemplateK0pquuut @ 0x1C0041BCC (McTemplateK0pquuut.c)
 */

void __fastcall StorPortUnitActiveConditionStep2(__int64 a1, char a2)
{
  int v4; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1744) + 88LL), &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) |= 2u;
  StorPortUnitFlushActivePendingRequestQueue(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(a1 + 695) )
  {
    *(_BYTE *)(a1 + 695) = 0;
    RaidRestartIoQueue(a1, 0LL);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00617E2 & 0x10) != 0 )
      McTemplateK0pquuut(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStop,
        v4,
        **(_QWORD **)(a1 + 1744),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2);
  }
}
