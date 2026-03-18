/*
 * XREFs of PfpGetPageListCount @ 0x140647038
 * Callers:
 *     PfpUpdateRepurposedByPrefetch @ 0x140646F24 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchFilesTrickle @ 0x140647054 (PfpPrefetchFilesTrickle.c)
 *     PfSnCheckActionsNeeded @ 0x14066C960 (PfSnCheckActionsNeeded.c)
 *     PfpVolumePrefetchMetadata @ 0x1406AB18C (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AB540 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1406F8E3C (PfpPrefetchPrivatePages.c)
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
