/*
 * XREFs of sub_18007A604 @ 0x18007A604
 * Callers:
 *     sub_18002C750 @ 0x18002C750 (sub_18002C750.c)
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18007A604(volatile signed __int32 *a1, __int64 *a2, unsigned __int64 *a3)
{
  struct _PEB *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v9; // r12d
  int v10; // ecx
  unsigned __int64 v11; // rsi
  __int64 Heap; // rdi
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v9 = 1073741826;
  if ( a1 == v3->ImageBaseAddress )
    v9 = 2;
  v10 = RtlQueryInformationActivationContext(v9, a1, 0LL, 6, 0LL, 0LL, &v14);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    v11 = v14;
    if ( v14 )
    {
      if ( v14 > *a3 )
      {
        v11 = v14;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14);
        if ( !Heap )
          return v4;
      }
      else
      {
        Heap = v5;
      }
      if ( (int)RtlQueryInformationActivationContext(v9, a1, 0LL, 6, Heap, v11, &v14) < 0 )
      {
        if ( Heap && Heap != v5 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v4;
      }
      *a3 = v14;
      *a2 = Heap;
    }
    return 1;
  }
  return v4;
}
