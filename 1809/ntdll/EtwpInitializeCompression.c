/*
 * XREFs of EtwpInitializeCompression @ 0x180002870
 * Callers:
 *     EtwpStartUmLogger @ 0x18004FFC8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x180084170 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 Heap; // rax
  int v3; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  RtlGetCompressionWorkSpaceSize(3LL, &v5, &v6);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  *(_QWORD *)(a1 + 432) = Heap;
  if ( !Heap )
    return 3221225495LL;
  v3 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 448) = 2 * v3;
  v7 = (unsigned int)(2 * v3);
  return ZwAllocateVirtualMemory(-1LL, a1 + 440, 0LL, &v7, 4096, 4);
}
