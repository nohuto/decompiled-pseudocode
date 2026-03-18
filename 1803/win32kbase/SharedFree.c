/*
 * XREFs of SharedFree @ 0x1C00A1710
 * Callers:
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
