/*
 * XREFs of CmpFileFlush @ 0x140663ED4
 * Callers:
 *     HvLoadHive @ 0x14065F05C (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x140663994 (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x140834128 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14083C6A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140099A9C (CmpDoFileFlush.c)
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
