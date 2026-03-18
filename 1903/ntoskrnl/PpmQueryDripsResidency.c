/*
 * XREFs of PpmQueryDripsResidency @ 0x1402EFD70
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1402EFD8C (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency((unsigned int)dword_140467FC0);
}
