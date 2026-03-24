/*
 * XREFs of PfpGetPageListCount @ 0x140662400
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x14065D004 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14065D3CC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140661F84 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406622FC (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140667E3C (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x14086438C (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpGetPageListCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  while ( a2 <= a3 )
    result += *(_QWORD *)(a1 + 8LL * a2++);
  return result;
}
