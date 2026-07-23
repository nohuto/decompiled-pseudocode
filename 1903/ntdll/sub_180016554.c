/*
 * XREFs of sub_180016554 @ 0x180016554
 * Callers:
 *     sub_1800094BC @ 0x1800094BC (sub_1800094BC.c)
 *     sub_180016414 @ 0x180016414 (sub_180016414.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     sub_1800FD708 @ 0x1800FD708 (sub_1800FD708.c)
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

PVOID __fastcall sub_180016554(__int64 a1, unsigned int a2)
{
  PVOID result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
