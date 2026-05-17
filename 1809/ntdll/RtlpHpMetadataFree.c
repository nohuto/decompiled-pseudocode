/*
 * XREFs of RtlpHpMetadataFree @ 0x180064E90
 * Callers:
 *     RtlpHpTagRunOnceInit @ 0x180064B80 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpTagContextAllocateTag @ 0x180064ED0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180104070 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180104370 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801045C0 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1801049E4 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180104CE0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010D1EC (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
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
