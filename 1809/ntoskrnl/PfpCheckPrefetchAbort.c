/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1400DE680
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065B9BC (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x14065D024 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14065D3EC (PfpPrefetchDirectoryStream.c)
 *     PfpOpenHandleCreate @ 0x140660388 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x140661FA4 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140864028 (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x1408643AC (PfpPrefetchPrivatePages.c)
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
