/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x14017D750
 * Callers:
 *     MiEmptyAccessLogs @ 0x14017D570 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x1400901DC (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x14013AEF4 (MiQueuePageAccessLog.c)
 */

void __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  _SLIST_ENTRY *v3; // rcx

  if ( qword_140466040 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140466040, 0LL);
    if ( v3 )
    {
      if ( a1 - (unsigned __int64)v3[1].Next > PfKernelGlobals || a2 )
        MiQueuePageAccessLog(v3);
      else
        MiReturnCcAccessLog((signed __int64)v3, 0);
    }
  }
}
