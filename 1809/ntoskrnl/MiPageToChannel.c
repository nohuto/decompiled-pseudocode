/*
 * XREFs of MiPageToChannel @ 0x14009CF2C
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiDescribePageRun @ 0x14017F0C4 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14017F18C (MiInitializeUnusablePfns.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 *     MxCreatePfn @ 0x1409C1310 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1409D4228 (MiFreeBootPageTable.c)
 *     MiInitializeSystemChannelOrdering @ 0x1409F8AD0 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_14043B128 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_14043B128 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_14043B128 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_14043B128 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_14043B128 + 16LL * v2 + 12);
}
