/*
 * XREFs of sub_1800FA2D8 @ 0x1800FA2D8
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

PVOID sub_1800FA2D8()
{
  PVOID result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
  qword_180166570 = (__int64)result;
  if ( result )
    return memset(result, 0, 0x11620uLL);
  return result;
}
