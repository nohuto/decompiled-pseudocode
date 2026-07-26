/*
 * XREFs of ?ndisGenerateCorrelationIds@@YAKKK@Z @ 0x1C0079EB0
 * Callers:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C007AB9C (ndisGenerateNetBufferListCorrelationIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGenerateCorrelationIds(unsigned int a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&ndisCorrelationCounter, a1);
  if ( (unsigned int)result + a1 < (unsigned int)result )
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&ndisCorrelationCounter, a1);
  return result;
}
