/*
 * XREFs of sub_18010E404 @ 0x18010E404
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1800806F0 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall sub_18010E404(__int64 a1)
{
  __int64 Heap; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h]

  RtlGetCompressionWorkSpaceSize(3LL);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  *(_QWORD *)(a1 + 432) = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)(a1 + 448) = 2 * *(_DWORD *)(a1 + 208);
  return ZwAllocateVirtualMemory();
}
