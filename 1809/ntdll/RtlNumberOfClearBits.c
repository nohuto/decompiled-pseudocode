/*
 * XREFs of RtlNumberOfClearBits @ 0x18008C3D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180081A30 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(unsigned int *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits(a1);
}
