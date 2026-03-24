/*
 * XREFs of CmpFileFlush @ 0x1406B8918
 * Callers:
 *     HvLoadHive @ 0x1405A4C9C (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x1406B878C (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x1407FAD74 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x140803290 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x14012DE9C (CmpDoFileFlush.c)
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
