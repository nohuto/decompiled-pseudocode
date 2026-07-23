/*
 * XREFs of sub_18006FB9C @ 0x18006FB9C
 * Callers:
 *     RtlCreateHashTableEx_0 @ 0x18006FA08 (RtlCreateHashTableEx_0.c)
 *     RtlExpandHashTable @ 0x180086440 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_18006FB9C(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
