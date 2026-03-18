/*
 * XREFs of RtlTraceDatabaseLock @ 0x1402F5BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1402F5C4C (RtlpTraceDatabaseAcquireLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseLock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseAcquireLock(Database);
}
