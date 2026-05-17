/*
 * XREFs of sub_1800DDE50 @ 0x1800DDE50
 * Callers:
 *     sub_1800DDE98 @ 0x1800DDE98 (sub_1800DDE98.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_1800DDE50(unsigned __int16 a1)
{
  __int64 result; // rax

  result = RtlAllocateHeap(qword_180165420, dword_18016542C + 0x40000, a1 + 32LL);
  if ( result )
  {
    *(_WORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = result + 32;
    *(_WORD *)(result + 18) = a1;
  }
  return result;
}
