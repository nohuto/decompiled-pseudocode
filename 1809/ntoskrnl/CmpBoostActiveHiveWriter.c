/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x1406D0458
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1407F6F8C (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x1407ED12C (CmpTraceHiveFlushBoostedActiveFlusher.c)
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
