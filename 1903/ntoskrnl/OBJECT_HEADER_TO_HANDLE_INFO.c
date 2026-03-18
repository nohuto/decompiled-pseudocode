/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x14010AF68
 * Callers:
 *     ObpReleaseHandleInfo @ 0x1406BC504 (ObpReleaseHandleInfo.c)
 *     ObpInsertHandleCount @ 0x1406BC6FC (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x14089E348 (ObpUnlockHandleDatabaseEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}
