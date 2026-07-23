/*
 * XREFs of PopQueuePowerIntent @ 0x14087735C
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x1408774B4 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PopDiagTracePowerAggregatorQueueOverflow @ 0x140874A28 (PopDiagTracePowerAggregatorQueueOverflow.c)
 */

__int64 __fastcall PopQueuePowerIntent(int a1, int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorRequestQueueLock);
  v6 = ((_BYTE)dword_140411904 + (_BYTE)dword_140411908) & 0xF;
  if ( (unsigned int)dword_140411908 >= 0x10 )
  {
    PopDiagTracePowerAggregatorQueueOverflow((ULONGLONG)&PopPowerAggregatorRequestQueue[12 * dword_140411904 + 12]);
    dword_140411904 = ((_BYTE)dword_140411904 + 1) & 0xF;
  }
  else
  {
    ++dword_140411908;
  }
  v7 = 3 * v6;
  *(_DWORD *)&PopPowerAggregatorRequestQueue[4 * v7 + 12] = a1;
  *(_DWORD *)&PopPowerAggregatorRequestQueue[4 * v7 + 16] = a2;
  *(_DWORD *)&PopPowerAggregatorRequestQueue[4 * v7 + 20] = a3;
  if ( !PopPowerAggregatorRequestQueue[0] )
  {
    ExQueueWorkItem(&PopPowerAggregatorWorkItem, DelayedWorkQueue);
    PopPowerAggregatorRequestQueue[0] = 1;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorRequestQueueLock);
  return 0LL;
}
