/*
 * XREFs of PsEnterPriorityRegion @ 0x14003B650
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
