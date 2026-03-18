/*
 * XREFs of ExGetSharedWaiterCount @ 0x14033A400
 * Callers:
 *     CmpIsRegistryLockContended @ 0x14027FBB4 (CmpIsRegistryLockContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

ULONG __stdcall ExGetSharedWaiterCount(PERESOURCE Resource)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  return Resource->NumberOfSharedWaiters;
}
