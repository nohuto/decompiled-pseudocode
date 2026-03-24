/*
 * XREFs of PsEnterPriorityRegion @ 0x1400BBF10
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBF90 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
