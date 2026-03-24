/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x1406CF1B8
 * Callers:
 *     HvpAddBin @ 0x1405A39BC (HvpAddBin.c)
 *     CmpFlushHive @ 0x1405B2F54 (CmpFlushHive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1407F5D8C (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400B6B40 (PsGetIoPriorityThread.c)
 *     PsBoostThreadIo @ 0x1400BBF70 (PsBoostThreadIo.c)
 *     KeSetPriorityBoost @ 0x1400CEEE0 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x14010865C (IoBoostThreadIoPriority.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x1407EBF2C (CmpTraceHiveFlushBoostedActiveFlusher.c)
 */

void __fastcall CmpBoostActiveHiveWriter(__int64 a1, __int64 a2)
{
  _SINGLE_LIST_ENTRY *v3; // r8
  unsigned __int64 v4; // r9

  if ( *(_QWORD *)a2
    && (int)PsGetIoPriorityThread(*(_QWORD *)a2) < 2
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), 1, 0) )
  {
    PsBoostThreadIo(*(_QWORD *)a2, 0LL);
    IoBoostThreadIoPriority(*(KSPIN_LOCK **)a2, 2, 0);
    KeSetPriorityBoost(*(_QWORD *)a2, 12LL, v3, v4);
    CmpTraceHiveFlushBoostedActiveFlusher();
  }
}
