/*
 * XREFs of GreIsVisRgnPublishLocked @ 0x1C012E930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnPublishLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemVisRgnPublish) != 0;
}
