/*
 * XREFs of RtlTraceDatabaseLock @ 0x1403148B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14031492C (RtlpTraceDatabaseAcquireLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseLock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseAcquireLock(Database);
}
