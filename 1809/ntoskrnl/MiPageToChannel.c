/*
 * XREFs of MiPageToChannel @ 0x14009CFEC
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14009BAC0 (MiInsertLargePageInNodeListHelper.c)
 *     MiDescribePageRun @ 0x14017EF84 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14017F04C (MiInitializeUnusablePfns.c)
 *     MiSwitchToPfns @ 0x1409BA954 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409BAD10 (MxCreateFreePfns.c)
 *     MxCreatePfn @ 0x1409C0310 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1409D3228 (MiFreeBootPageTable.c)
 *     MiInitializeSystemChannelOrdering @ 0x1409F7AD0 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_14043A068 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_14043A068 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_14043A068 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_14043A068 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_14043A068 + 16LL * v2 + 12);
}
