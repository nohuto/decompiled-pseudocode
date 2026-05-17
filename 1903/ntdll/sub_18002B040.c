/*
 * XREFs of sub_18002B040 @ 0x18002B040
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToAscii @ 0x18002C6C0 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1800F8B20 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     sub_18002B144 @ 0x18002B144 (sub_18002B144.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18002B040(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 Heap; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 1022LL);
  v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 1030LL);
  v12 = v11;
  if ( Heap && v11 )
    v13 = sub_18002B144(a1, a2, a3, a4, a5, a6, Heap);
  else
    v13 = -1073741801;
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v12);
  return v13;
}
