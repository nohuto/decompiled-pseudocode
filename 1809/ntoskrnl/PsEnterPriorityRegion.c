/*
 * XREFs of PsEnterPriorityRegion @ 0x1400BBEF0
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBF70 (PsBoostThreadIoEx.c)
 */

__int64 PsEnterPriorityRegion()
{
  return PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
