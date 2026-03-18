/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C008BD30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CC74 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreIsCurrentProcessSystemCritical()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost();
}
