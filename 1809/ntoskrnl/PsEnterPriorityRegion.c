/*
 * XREFs of PsEnterPriorityRegion @ 0x1400BBE50
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
