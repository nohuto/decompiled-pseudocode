/*
 * XREFs of GreIsVisRgnPublishLocked @ 0x1C01310E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnPublishLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemVisRgnPublish) != 0;
}
