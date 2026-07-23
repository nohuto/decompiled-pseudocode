/*
 * XREFs of EtwpInitializeCompression @ 0x18010E534
 * Callers:
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x180080D90 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  PVOID Heap; // rax
  int v4; // eax
  ULONG CompressBufferWorkSpaceSize; // [rsp+40h] [rbp+8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  RtlGetCompressionWorkSpaceSize(3u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, CompressBufferWorkSpaceSize);
  *(_QWORD *)(a1 + 432) = Heap;
  if ( !Heap )
    return -1073741801;
  v4 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 448) = 2 * v4;
  RegionSize = (unsigned int)(2 * v4);
  return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 440), 0LL, &RegionSize, 0x1000u, 4u);
}
