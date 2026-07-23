/*
 * XREFs of HvlResumePartition @ 0x140275240
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPartitionProperty @ 0x140275714 (HvlSetPartitionProperty.c)
 */

__int64 __fastcall HvlResumePartition(__int64 a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, 0LL);
}
