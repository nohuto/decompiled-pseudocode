/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1401395F0
 * Callers:
 *     RtlExpandHashTable @ 0x1400DA6B0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x14016A550 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
