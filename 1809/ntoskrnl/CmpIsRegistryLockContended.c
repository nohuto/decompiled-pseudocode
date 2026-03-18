/*
 * XREFs of CmpIsRegistryLockContended @ 0x14026C30C
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExGetExclusiveWaiterCount @ 0x14031B950 (ExGetExclusiveWaiterCount.c)
 *     ExGetSharedWaiterCount @ 0x14031B990 (ExGetSharedWaiterCount.c)
 */

char CmpIsRegistryLockContended()
{
  char v0; // bl

  v0 = 0;
  if ( ExGetSharedWaiterCount((PERESOURCE)&CmpRegistryLock) || ExGetExclusiveWaiterCount((PERESOURCE)&CmpRegistryLock) )
    return 1;
  return v0;
}
