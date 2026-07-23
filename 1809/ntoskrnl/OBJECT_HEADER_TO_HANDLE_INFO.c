/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x1401120C4
 * Callers:
 *     ObpReleaseHandleInfo @ 0x140698DA8 (ObpReleaseHandleInfo.c)
 *     ObpInsertHandleCount @ 0x140698FAC (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140862B0C (ObpUnlockHandleDatabaseEntry.c)
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
