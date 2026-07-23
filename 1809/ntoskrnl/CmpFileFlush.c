/*
 * XREFs of CmpFileFlush @ 0x1406B9BB8
 * Callers:
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x1407FBF74 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x140804490 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x14012DF6C (CmpDoFileFlush.c)
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
