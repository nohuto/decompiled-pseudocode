/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x140009E90
 * Callers:
 *     RtlpHpMetadataFree @ 0x1400080A4 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x1400099CC (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x1401411D0 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x14019224C (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCtxGet(__int128 *a1)
{
  __int64 HeapManager; // rax
  unsigned int v2; // ecx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a1;
  HeapManager = RtlpHpEnvGetHeapManager(&v6);
  v2 = 2;
  v4 = v3 >> 8;
  if ( (unsigned __int8)v4 < 2u )
    v2 = (unsigned __int8)v4;
  return HeapManager + 16 * (v2 + 777LL);
}
