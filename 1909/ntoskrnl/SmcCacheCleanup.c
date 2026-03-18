/*
 * XREFs of SmcCacheCleanup @ 0x1408EB2AC
 * Callers:
 *     SmcProcessCreateRequest @ 0x1408E86D0 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x1408EB330 (SmcCacheDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     StEtaCleanup @ 0x14011C114 (StEtaCleanup.c)
 *     SmStoreDelete @ 0x1408E837C (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x1408E916C (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x1408EA60C (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1)
{
  PPRIVILEGE_SET *v2; // rbx
  __int64 v3; // rsi
  int v4; // edx

  v2 = (PPRIVILEGE_SET *)(a1 + 176);
  v3 = 16LL;
  do
  {
    v4 = *((_DWORD *)v2 - 2);
    if ( v4 != -1 )
    {
      SmStoreDelete(*((_DWORD *)v2 - 1) & 3, v4);
      CmSiFreeMemory(*v2);
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    SmKmStoreFileDelete(a1 + 40);
  SmKmFileInfoCleanup(a1 + 40);
  StEtaCleanup(a1 + 104);
}
