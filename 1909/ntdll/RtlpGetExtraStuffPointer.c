/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x18006EB2C
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x18006E580 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E8F0 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x1801046F0 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x1801050F0 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x180106A8C (RtlpValidateHeapSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetExtraStuffPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
