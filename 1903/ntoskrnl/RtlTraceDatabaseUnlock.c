/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1403148D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x140314C00 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseUnlock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseReleaseLock(Database);
}
