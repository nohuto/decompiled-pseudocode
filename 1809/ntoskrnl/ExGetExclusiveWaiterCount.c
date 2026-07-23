/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x14031BC40
 * Callers:
 *     CmpIsRegistryLockContended @ 0x14026C5FC (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfExclusiveWaiters;
}
