/*
 * XREFs of FreeScancodeMap @ 0x1C00B7E40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void FreeScancodeMap()
{
  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  if ( gpFlexMap )
  {
    Win32FreePool((__int64)gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
}
