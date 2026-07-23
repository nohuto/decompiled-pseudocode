/*
 * XREFs of sub_18004DC8C @ 0x18004DC8C
 * Callers:
 *     sub_18003A9E0 @ 0x18003A9E0 (sub_18003A9E0.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 * Callees:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18004DC4C @ 0x18004DC4C (sub_18004DC4C.c)
 *     sub_18009BDD4 @ 0x18009BDD4 (sub_18009BDD4.c)
 */

__int64 __fastcall sub_18004DC8C(unsigned __int16 *HeapHandle, unsigned __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned __int16 v7; // di
  __int64 result; // rax

  if ( sub_18004DC4C((__int64)HeapHandle) )
    v7 = sub_18009BDD4(v6, a2);
  else
    v7 = 0;
  result = sub_18003AAA0(HeapHandle, a2, a3, v7);
  if ( !result )
  {
    if ( v7 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_180163B58 + 8LL * v7 - 8) + 32LL),
        -(__int64)a2);
  }
  return result;
}
