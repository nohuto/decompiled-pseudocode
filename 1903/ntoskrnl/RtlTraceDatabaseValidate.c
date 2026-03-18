/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1403148F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14031492C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140314C00 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseValidate(PRTL_TRACE_DATABASE Database)
{
  unsigned int NoOfTraces; // ecx
  SIZE_T NoOfHits; // rdx
  __int64 v4; // r8

  RtlpTraceDatabaseAcquireLock(Database);
  NoOfTraces = Database->NoOfTraces;
  if ( NoOfTraces )
  {
    NoOfHits = Database->NoOfHits;
    v4 = NoOfTraces;
    do
    {
      NoOfHits += 8LL;
      --v4;
    }
    while ( v4 );
  }
  RtlpTraceDatabaseReleaseLock(Database);
  return 1;
}
