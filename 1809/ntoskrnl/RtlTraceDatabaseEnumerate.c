/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x1402F5D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1402F5F3C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1402F6210 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseEnumerate(
        PRTL_TRACE_DATABASE Database,
        PRTL_TRACE_ENUMERATE TraceEnumerate,
        PRTL_TRACE_BLOCK *TraceBlock)
{
  BOOLEAN v6; // bl
  __int64 v7; // r8
  struct _RTL_TRACE_BLOCK *Block; // rdx
  ULONG Index; // eax

  RtlpTraceDatabaseAcquireLock();
  v6 = 0;
  if ( TraceEnumerate->Database )
  {
    if ( TraceEnumerate->Database == Database )
    {
      Index = TraceEnumerate->Index;
      LODWORD(v7) = Index;
      if ( Index < LODWORD(Database->NoOfTraces) )
      {
        Block = TraceEnumerate->Block;
        goto LABEL_9;
      }
    }
  }
  else
  {
    TraceEnumerate->Database = Database;
    LODWORD(v7) = 0;
    TraceEnumerate->Index = 0;
    Block = *(struct _RTL_TRACE_BLOCK **)Database->NoOfHits;
    for ( Index = 0; ; ++Index )
    {
      TraceEnumerate->Block = Block;
LABEL_9:
      if ( Block )
        break;
      v7 = Index + 1;
      TraceEnumerate->Index = v7;
      if ( (unsigned int)v7 >= LODWORD(Database->NoOfTraces) )
        break;
      Block = *(struct _RTL_TRACE_BLOCK **)(Database->NoOfHits + 8 * v7);
    }
    if ( (unsigned int)v7 < LODWORD(Database->NoOfTraces) || Block )
    {
      *TraceBlock = Block;
      v6 = 1;
      TraceEnumerate->Block = (struct _RTL_TRACE_BLOCK *)TraceEnumerate->Block->Trace;
    }
    else
    {
      *TraceBlock = 0LL;
    }
  }
  RtlpTraceDatabaseReleaseLock(Database);
  return v6;
}
