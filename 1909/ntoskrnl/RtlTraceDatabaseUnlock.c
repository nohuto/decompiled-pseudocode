/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x140314320
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x140314650 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseUnlock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseReleaseLock(Database);
}
