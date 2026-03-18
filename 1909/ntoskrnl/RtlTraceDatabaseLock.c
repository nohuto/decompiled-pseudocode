/*
 * XREFs of RtlTraceDatabaseLock @ 0x140314300
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14031437C (RtlpTraceDatabaseAcquireLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseLock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseAcquireLock(Database);
}
