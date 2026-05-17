/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x1800145A4
 * Callers:
 *     RtlpAllocateUserBlock @ 0x18000EB80 (RtlpAllocateUserBlock.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A0CE0 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x18010616C (RtlpLogHeapSubSegmentAlloc.c)
 */

__int64 __fastcall RtlpAllocateUserBlockFromHeap(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  __int64 v10; // rdi
  __int64 Heap; // rax
  __int64 v12; // rbx
  _DWORD *SharedData; // rcx
  __int64 v14; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  char v19; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  v8 = *(_QWORD *)(a1 + 352);
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v10 = v5 + 0x2000;
  if ( !a4 )
    v10 = v5;
  RtlEnterCriticalSection(v8);
  Heap = RtlAllocateHeap(a1, 0x800001u, v10);
  v12 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v17[0] = (Heap + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v16 = v17[0] - Heap + 4096;
      v12 = RtlReAllocateHeap(a1, 8388609, Heap, v16);
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v18 = 4096LL;
      ZwProtectVirtualMemory(-1LL, v17, &v18, 1LL, &v19);
      v10 = v16 - 4096;
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
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(a1, v12, v10, a3);
  }
  else
  {
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return v12;
}
