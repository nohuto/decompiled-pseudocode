/*
 * XREFs of CiSystemTerminate @ 0x1C000C884
 * Callers:
 *     CsTerminate @ 0x1C000C3C0 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000DE90 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004AE8 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
}
