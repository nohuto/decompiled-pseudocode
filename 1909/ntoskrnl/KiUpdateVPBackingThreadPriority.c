/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x140011E08
 * Callers:
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14012C1A8 (KiTryToUpdateVPBackingThreadPriority.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E95A8 (KiSetBasePriorityAndClearDecrement.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402AF84C (KiReadGuestSchedulerAssistPriority.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  int GuestSchedulerAssistPriority; // eax
  unsigned int v8; // edi

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
    return 0;
  GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a1, a2, a3);
  v8 = GuestSchedulerAssistPriority;
  if ( v3 && (*(_BYTE *)(a1 + 564) & 0xF0) != 0 )
  {
    if ( GuestSchedulerAssistPriority <= *(char *)(a1 + 195) )
      return 1;
    goto LABEL_8;
  }
  if ( GuestSchedulerAssistPriority != *(char *)(a1 + 195) )
  {
LABEL_8:
    KiSetBasePriorityAndClearDecrement(a1, 0LL, 0LL);
    KiUpdateThreadPriority(a2, a1, (_SINGLE_LIST_ENTRY *)v8, a2 != 0);
  }
  return 1;
}
