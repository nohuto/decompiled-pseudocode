/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1400918DC
 * Callers:
 *     PfpOpenHandleCreate @ 0x14062CAC4 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x140647054 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchRequestPerform @ 0x1406AADFC (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1406AB18C (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AB540 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1406F8E3C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1408A034C (PfpPrefetchFiles.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  result = 1;
  if ( !v1 || !*(_DWORD *)(v1 + 4) )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) == 0 )
      return 0;
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) && (*(_DWORD *)(v2 + 68) & 4) == 0 )
      return 0;
  }
  return result;
}
