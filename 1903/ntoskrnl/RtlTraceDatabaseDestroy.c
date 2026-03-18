/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x140314720
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseDestroy(PRTL_TRACE_DATABASE Database)
{
  struct _RTL_TRACE_SEGMENT *SegmentList; // rax
  struct _RTL_TRACE_SEGMENT *NextSegment; // rbx
  void *p_Database; // rcx

  SegmentList = Database->SegmentList;
  if ( SegmentList )
  {
    do
    {
      NextSegment = SegmentList->NextSegment;
      p_Database = &SegmentList[-4].Database;
      if ( NextSegment )
        p_Database = SegmentList;
      ExFreePoolWithTag(p_Database, Database->Tag);
      SegmentList = NextSegment;
    }
    while ( NextSegment );
  }
  return 1;
}
