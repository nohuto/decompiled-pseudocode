/*
 * XREFs of PsmCrmStart @ 0x1800454B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsStart @ 0x1800454D0 (CrmGlobalsStart.c)
 *     CrmGlobalsInitialize @ 0x180045794 (CrmGlobalsInitialize.c)
 */

__int64 PsmCrmStart()
{
  __int64 result; // rax

  CrmGlobalsInitialize();
  result = CrmGlobalsStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
