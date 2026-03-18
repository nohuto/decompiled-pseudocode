/*
 * XREFs of UpdatePerUserImmEnabling @ 0x1C0112C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UpdatePerUserImmEnabling()
{
  if ( (unsigned int)IsIMMEnabledSystem() )
    *gpsi |= 4u;
  else
    *gpsi &= ~4u;
  return 1LL;
}
