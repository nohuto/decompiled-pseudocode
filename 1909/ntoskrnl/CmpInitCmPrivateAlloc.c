/*
 * XREFs of CmpInitCmPrivateAlloc @ 0x140A38EA8
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x1400EA2C0 (ExInitializeLookasideListExInternal.c)
 */

__int64 CmpInitCmPrivateAlloc()
{
  return ExInitializeLookasideListExInternal(
           &CmpKcbLookaside,
           CmpAllocateTransientPoolWithTag,
           (__int64 (__fastcall *)())CmSiFreeMemory,
           1,
           0,
           0x138uLL,
           1651199299,
           0,
           0);
}
