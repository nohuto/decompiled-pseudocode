/*
 * XREFs of sub_18005BB00 @ 0x18005BB00
 * Callers:
 *     RtlAddAtomToAtomTable_0 @ 0x18005B32C (RtlAddAtomToAtomTable_0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_18005BB00(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1 + 20LL);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = 0LL;
  *(_WORD *)(result + 12) = 1;
  *(_WORD *)(result + 14) = 0;
  *a2 = result + 12;
  return result;
}
