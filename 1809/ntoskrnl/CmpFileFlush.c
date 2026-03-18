/*
 * XREFs of CmpFileFlush @ 0x1406B8938
 * Callers:
 *     HvLoadHive @ 0x1405A4C9C (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x1406B87AC (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x1407FAD94 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x1408032B0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x14012DE7C (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1536);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
