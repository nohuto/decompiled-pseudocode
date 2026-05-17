/*
 * XREFs of RtlNumberOfClearBits @ 0x1800EA0D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180078560 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(unsigned int *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits(a1);
}
