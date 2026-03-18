/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x140110A9C
 * Callers:
 *     RtlpHpMetadataFree @ 0x14010E33C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x140110968 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140159BB4 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x14019A47C (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
 */

char *__fastcall RtlpHpMetadataHeapCtxGet(__int128 *a1)
{
  char *HeapManager; // rax
  unsigned int v2; // ecx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a1;
  HeapManager = (char *)RtlpHpEnvGetHeapManager(&v6);
  v2 = 2;
  v4 = v3 >> 8;
  if ( (unsigned __int8)v4 < 2u )
    v2 = (unsigned __int8)v4;
  return &HeapManager[16 * v2 + 14488];
}
