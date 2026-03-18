/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1402F5BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x1402F5F20 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseUnlock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseReleaseLock(Database);
}
