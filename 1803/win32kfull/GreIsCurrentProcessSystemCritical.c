/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C007F300
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0081584 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreIsCurrentProcessSystemCritical()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost();
}
