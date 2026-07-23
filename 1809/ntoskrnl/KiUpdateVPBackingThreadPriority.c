/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x1400D0EC0
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x140129D50 (KiTryToUpdateVPBackingThreadPriority.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D796C (KiSetBasePriorityAndClearDecrement.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1401B4B10 (KiReadGuestSchedulerAssistPriority.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(__int64 a1, __int64 a2, char a3)
{
  int GuestSchedulerAssistPriority; // eax
  unsigned int v8; // edi
  __int64 v9; // r9

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
    return 0;
  GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a1);
  v8 = GuestSchedulerAssistPriority;
  if ( a3 && (*(_BYTE *)(a1 + 564) & 0xF0) != 0 )
  {
    if ( GuestSchedulerAssistPriority <= *(char *)(a1 + 195) )
      return 1;
    goto LABEL_8;
  }
  if ( GuestSchedulerAssistPriority != *(char *)(a1 + 195) )
  {
LABEL_8:
    KiSetBasePriorityAndClearDecrement(a1, 0LL, 0LL);
    LOBYTE(v9) = a2 != 0;
    KiUpdateThreadPriority(a2, a1, (_SINGLE_LIST_ENTRY *)v8, v9);
  }
  return 1;
}
