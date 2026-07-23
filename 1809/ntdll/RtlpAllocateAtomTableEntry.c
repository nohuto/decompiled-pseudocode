/*
 * XREFs of RtlpAllocateAtomTableEntry @ 0x180073984
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1800731AC (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 */

_WORD *__fastcall RtlpAllocateAtomTableEntry(unsigned int a1, _QWORD *a2)
{
  _WORD *result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1 + 20LL);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = 0LL;
  result[6] = 1;
  result[7] = 0;
  *a2 = result + 6;
  return result;
}
