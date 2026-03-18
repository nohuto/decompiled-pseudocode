/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14013B950
 * Callers:
 *     RtlExpandHashTable @ 0x140086510 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140157F30 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
