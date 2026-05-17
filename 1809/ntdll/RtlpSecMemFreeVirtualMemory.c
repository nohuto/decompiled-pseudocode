/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x1800611AC
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x18005F55C (RtlpDestroyHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18005F5F8 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpDecommitBlock @ 0x180061020 (RtlpDecommitBlock.c)
 *     RtlValidateProcessHeaps @ 0x1800F2B70 (RtlValidateProcessHeaps.c)
 *     RtlDebugDestroyHeap @ 0x180107AF4 (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F6D90 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi

  v4 = a4;
  v7 = ZwFreeVirtualMemory(-1LL, a2, a3, a4);
  if ( v7 == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory(-1LL, a2, a3, v4);
  else
    return v7;
}
