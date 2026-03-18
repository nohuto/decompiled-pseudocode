/*
 * XREFs of CmpFileFlush @ 0x1406911D0
 * Callers:
 *     HvLoadHive @ 0x14068D07C (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x140690A7C (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x140833788 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14083BD00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1400EDAF8 (CmpDoFileFlush.c)
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
