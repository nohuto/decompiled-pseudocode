/*
 * XREFs of sub_180111530 @ 0x180111530
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x18009CEC0 (ZwReadVirtualMemory.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180111530(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // ebx
  __int64 result; // rax
  int v8; // edi
  int Section; // r14d
  _QWORD *Heap; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+68h] [rbp-18h]

  v5 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    result = ZwAllocateVirtualMemory();
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 64LL);
    if ( !Heap )
      return 3221225626LL;
  }
  Section = ZwCreateSection();
  if ( Section < 0 )
    goto LABEL_8;
  Section = ZwMapViewOfSection();
  if ( Section >= 0 )
  {
    memset(Heap, 0, 0x40uLL);
    if ( *a4 == 2147352576LL )
    {
      memmove(0LL, (const void *)0x7FFE0000, 0x710uLL);
    }
    else if ( (int)ZwReadVirtualMemory() < 0 )
    {
LABEL_19:
      ZwUnmapViewOfSection();
      *(_DWORD *)(a1 + 888) = v5;
      *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
      *(_QWORD *)(a1 + 896) = v11;
      *(_QWORD *)(a1 + 904) = Heap;
      *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
      return 0LL;
    }
    if ( (int)ZwQueryVirtualMemory() >= 0 )
    {
      v5 = 1;
      *Heap = *a4;
      Heap[7] = MEMORY[0x7FFE0014];
    }
    goto LABEL_19;
  }
  ZwClose();
LABEL_8:
  if ( v8 )
    ZwFreeVirtualMemory();
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)Section;
}
