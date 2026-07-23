/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x180077B08
 * Callers:
 *     RtlpCreateHashTable @ 0x180077978 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x18008C5E0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
