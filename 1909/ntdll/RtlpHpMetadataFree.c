/*
 * XREFs of RtlpHpMetadataFree @ 0x18004F730
 * Callers:
 *     RtlpHpTagRunOnceInit @ 0x18004EC20 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpTagContextAllocateTag @ 0x18004ECF8 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeFree @ 0x1800507E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180101830 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180101B10 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180101D60 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180102108 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x1801023E0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010ACF4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x18004CD1C (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  char *v2; // rax
  unsigned __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*(_DWORD **)v2, v3, 0x1000000, 0LL, 0LL);
}
