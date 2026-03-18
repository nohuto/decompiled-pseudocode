/*
 * XREFs of CmpIsRegistryLockContended @ 0x14027FE54
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExGetExclusiveWaiterCount @ 0x14033A960 (ExGetExclusiveWaiterCount.c)
 *     ExGetSharedWaiterCount @ 0x14033A9A0 (ExGetSharedWaiterCount.c)
 */

char CmpIsRegistryLockContended()
{
  char v0; // bl

  v0 = 0;
  if ( ExGetSharedWaiterCount((PERESOURCE)&CmpRegistryLock) || ExGetExclusiveWaiterCount((PERESOURCE)&CmpRegistryLock) )
    return 1;
  return v0;
}
