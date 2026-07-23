/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x140139710
 * Callers:
 *     RtlExpandHashTable @ 0x1400DA750 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x14016A670 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
