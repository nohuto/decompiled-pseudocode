/*
 * XREFs of PfpGetPageListCount @ 0x140662420
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x14065D024 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14065D3EC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140661FA4 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14066231C (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140667E5C (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1408643AC (PfpPrefetchPrivatePages.c)
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
