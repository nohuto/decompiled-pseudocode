/*
 * XREFs of CiSystemTerminate @ 0x1C000C7DC
 * Callers:
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000DEE0 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004A94 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
}
