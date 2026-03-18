/*
 * XREFs of UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00814C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00815C8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 UmfdIsCurrentProcessUmfdHostNoLock()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
}
