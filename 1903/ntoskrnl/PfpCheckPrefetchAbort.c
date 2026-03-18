/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1400A214C
 * Callers:
 *     PfpOpenHandleCreate @ 0x140628C74 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x14066D5F4 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchRequestPerform @ 0x1406A9098 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1406A9428 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406A97DC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1406F707C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1408A0B0C (PfpPrefetchFiles.c)
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
