/*
 * XREFs of MiPageToChannel @ 0x14002F75C
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiDescribePageRun @ 0x140188F1C (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409F29D8 (MxCreateFreePfns.c)
 *     MxCreatePfn @ 0x1409FC7A4 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x140A172E4 (MiFreeBootPageTable.c)
 *     MiInitializeSystemChannelOrdering @ 0x140A3C728 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_140465788 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_140465788 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_140465788 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_140465788 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_140465788 + 16LL * v2 + 12);
}
