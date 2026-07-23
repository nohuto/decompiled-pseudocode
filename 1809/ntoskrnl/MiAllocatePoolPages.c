/*
 * XREFs of MiAllocatePoolPages @ 0x140162C10
 * Callers:
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 * Callees:
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 *     MiReturnNonPagedPoolVa @ 0x140161734 (MiReturnNonPagedPoolVa.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     MiFindNonPagedPoolVa @ 0x1401635BC (MiFindNonPagedPoolVa.c)
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePoolPages(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rax
  ULONG_PTR result; // rax
  __int64 v9; // rcx
  __int64 NonPagedPoolVa; // rbp
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  if ( v3 >= 0x100000000LL )
    return 0LL;
  if ( (a1 & 1) != 0 )
    return MiAllocatePagedPoolPages();
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  if ( v3 > 3 )
    goto LABEL_11;
  v5 = v3 + 25 * v4;
  if ( (a1 & 0x200) != 0 )
    v5 += 3LL;
  v6 = &qword_14043B118[v5];
  if ( LOWORD(v6->Alignment) && (v7 = RtlpInterlockedPopEntrySList(v6)) != 0LL )
  {
    result = (ULONG_PTR)&v7[-1];
    if ( *(_QWORD *)result != (result ^ qword_14043BF80) )
      KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_14043BF80);
  }
  else
  {
LABEL_11:
    NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, (unsigned int)v4, &v14);
    if ( NonPagedPoolVa
      || (MiFreeExcessSegments(v9), (NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, (unsigned int)v4, &v14)) != 0) )
    {
      if ( v14 != 2 )
        return NonPagedPoolVa;
      v11 = 4;
      v16 = NonPagedPoolVa;
      v15 = v3 << 12;
      if ( (a1 & 0x200) == 0 )
        v11 = 64;
      if ( (int)MmAllocatePoolMemory((ULONG_PTR *)&v16, &v15, (v4 + 1) | 0x1000, v11, a1) < 0 )
      {
        ++dword_140439B30;
        MiFreeExcessSegments(v12);
        MiReturnNonPagedPoolVa(NonPagedPoolVa, v3);
        return 0LL;
      }
      else
      {
        return NonPagedPoolVa;
      }
    }
    else
    {
      ++dword_140439B30;
      ++dword_140439B54;
      MiFreeExcessSegments(v13);
      return 0LL;
    }
  }
  return result;
}
