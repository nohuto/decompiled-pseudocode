/*
 * XREFs of PfpGetPageListCount @ 0x14066D5D8
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140659940 (PfSnCheckActionsNeeded.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14066D4C4 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchFilesTrickle @ 0x14066D5F4 (PfpPrefetchFilesTrickle.c)
 *     PfpVolumePrefetchMetadata @ 0x1406A9428 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406A97DC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1406F707C (PfpPrefetchPrivatePages.c)
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
