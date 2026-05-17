/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x180048120
 * Callers:
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x180047F94 (RtlpDecommitBlock.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x18004AC2C (RtlpDestroyHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18004B21C (RtlpCreateLowFragHeap.c)
 *     RtlValidateProcessHeaps @ 0x1800EFB10 (RtlValidateProcessHeaps.c)
 *     RtlDebugDestroyHeap @ 0x180105030 (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F4190 (RtlFlushSecureMemoryCache.c)
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
