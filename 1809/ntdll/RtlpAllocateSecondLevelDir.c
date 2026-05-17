/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x180077AF8
 * Callers:
 *     RtlpCreateHashTable @ 0x180077968 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x18008C5D0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
