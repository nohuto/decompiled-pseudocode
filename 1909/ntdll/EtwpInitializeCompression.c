/*
 * XREFs of EtwpInitializeCompression @ 0x18010E534
 * Callers:
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x180080D90 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
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
