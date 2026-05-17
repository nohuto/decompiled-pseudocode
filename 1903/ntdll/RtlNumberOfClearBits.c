/*
 * XREFs of RtlNumberOfClearBits @ 0x1800E9FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800780E0 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(unsigned int *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits(a1);
}
