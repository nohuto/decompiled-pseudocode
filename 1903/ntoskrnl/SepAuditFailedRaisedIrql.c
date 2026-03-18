/*
 * XREFs of SepAuditFailedRaisedIrql @ 0x14031EBFC
 * Callers:
 *     SepAdtLogAuditRecord @ 0x14012CBAC (SepAdtLogAuditRecord.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
 */

void __fastcall SepAuditFailedRaisedIrql(__int64 a1)
{
  if ( SepCrashOnAuditFail )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      SepAdtCrashOnAuditFailWorkItem.List.Flink = 0LL;
      SepAdtCrashOnAuditFailWorkItem.WorkerRoutine = (void (__fastcall *)(void *))SepAuditFailed;
      SepAdtCrashOnAuditFailWorkItem.Parameter = (void *)(int)a1;
      ExQueueWorkItem(&SepAdtCrashOnAuditFailWorkItem, HyperCriticalWorkQueue);
    }
    else
    {
      SepAuditFailed(a1);
    }
  }
}
