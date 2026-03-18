/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1402F5870
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1402F5C4C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1402F5CB4 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1402F5F20 (RtlpTraceDatabaseReleaseLock.c)
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
