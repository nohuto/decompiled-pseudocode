/*
 * XREFs of sub_1800DDE50 @ 0x1800DDE50
 * Callers:
 *     sub_1800DDE98 @ 0x1800DDE98 (sub_1800DDE98.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

_WORD *__fastcall sub_1800DDE50(unsigned __int16 a1)
{
  _WORD *result; // rax

  result = RtlAllocateHeap(HeapHandle, Flags + 0x40000, a1 + 32LL);
  if ( result )
  {
    result[8] = 0;
    *((_QWORD *)result + 3) = result + 16;
    result[9] = a1;
  }
  return result;
}
