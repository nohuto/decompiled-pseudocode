/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x1800184BC
 * Callers:
 *     RtlpAllocateUserBlock @ 0x180018338 (RtlpAllocateUserBlock.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     ZwProtectVirtualMemory @ 0x18009D890 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x180103844 (RtlpLogHeapSubSegmentAlloc.c)
 */

__int64 __fastcall RtlpAllocateUserBlockFromHeap(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  __int64 v10; // rdi
  __int64 Heap; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  v8 = *(_QWORD *)(a1 + 352);
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v10 = v5 + 0x2000;
  if ( !a4 )
    v10 = v5;
  RtlEnterCriticalSection(v8);
  Heap = RtlAllocateHeap(a1, 8388609LL, v10);
  v12 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v16[0] = (Heap + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v15 = v16[0] - Heap + 4096;
      v12 = RtlReAllocateHeap(a1, 8388609LL, Heap, v15);
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v17 = 4096LL;
      ZwProtectVirtualMemory(-1LL, v16, &v17, 1LL, &v18);
      v10 = v15 - 4096;
      *(_BYTE *)(v12 + 17) = 1;
      *(_WORD *)(v12 + 18) = v10 - v5;
    }
    else
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      *(_WORD *)(v12 + 18) = 0;
      *(_BYTE *)(v12 + 17) = 0;
    }
    *(_BYTE *)(v12 + 16) = a2;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(a1, v12, v10, a3);
  }
  else
  {
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return v12;
}
