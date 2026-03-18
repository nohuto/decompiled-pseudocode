/*
 * XREFs of RtlTraceDatabaseAdd @ 0x140313FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14031437C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1403143E4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140314650 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseAdd(
        PRTL_TRACE_DATABASE Database,
        ULONG Count,
        PVOID *Trace,
        PRTL_TRACE_BLOCK *TraceBlock)
{
  RtlpTraceDatabaseAcquireLock();
  LOBYTE(TraceBlock) = RtlpTraceDatabaseInternalAdd(Database, Count, Trace, TraceBlock);
  RtlpTraceDatabaseReleaseLock(Database);
  return (unsigned __int8)TraceBlock;
}
