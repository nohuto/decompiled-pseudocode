/*
 * XREFs of EtwpInsertGuidEntry @ 0x180050E5C
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x180050DE8 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18001F940 (RtlRbInsertNodeEx.c)
 *     EtwpGuidEntryCompare @ 0x180086E60 (EtwpGuidEntryCompare.c)
 */

void __fastcall EtwpInsertGuidEntry(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v4; // esi
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  v3 = 0;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable.Root )
      Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
    else
      Root = 0LL;
  }
  v4 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)EtwpGuidEntryCompare(&Node[1], Root) < 0 )
      {
        v5 = *(_QWORD *)Root;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= Root;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(Root + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_11;
          v5 ^= Root;
        }
        if ( !v5 )
        {
LABEL_11:
          v3 = 1;
          break;
        }
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)Root, v3, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
