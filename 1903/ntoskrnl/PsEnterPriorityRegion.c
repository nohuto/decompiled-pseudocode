/*
 * XREFs of PsEnterPriorityRegion @ 0x14003B910
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14003DFD0 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
