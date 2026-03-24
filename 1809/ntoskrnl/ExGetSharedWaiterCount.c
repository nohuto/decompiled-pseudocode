/*
 * XREFs of ExGetSharedWaiterCount @ 0x14031BA90
 * Callers:
 *     CmpIsRegistryLockContended @ 0x14026C40C (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetSharedWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfSharedWaiters;
}
