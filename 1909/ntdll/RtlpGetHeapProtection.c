/*
 * XREFs of RtlpGetHeapProtection @ 0x18004733C
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18003F9C0 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpCommitBlock @ 0x180047214 (RtlpCommitBlock.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180048C68 (RtlpInitializeHeapSegment.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004AEDC (RtlpFreeUserBlockToHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18004B21C (RtlpCreateLowFragHeap.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007038C (RtlpExtendLowFragHeapSegment.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180077050 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpGetContainingRange @ 0x1800F06F4 (RtlpGetContainingRange.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x180047CBC (RtlpHpHeapValidateProtection.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (a1[28] & 0x40000) != 0 ? 64 : 4;
  if ( a2 )
    return RtlpHpHeapValidateProtection(a1);
  return result;
}
