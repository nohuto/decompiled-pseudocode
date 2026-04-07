/*
 * XREFs of _dynamic_atexit_destructor_for__ColorCache::_cachedColors__ @ 0x180050710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __fastcall dynamic_atexit_destructor_for__ColorCache::_cachedColors__(void *a1)
{
  return CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::RemoveAllElements(a1);
}
