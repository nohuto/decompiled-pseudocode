/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x140112034
 * Callers:
 *     ObpReleaseHandleInfo @ 0x140697C08 (ObpReleaseHandleInfo.c)
 *     ObpInsertHandleCount @ 0x140697E0C (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1408618CC (ObpUnlockHandleDatabaseEntry.c)
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
