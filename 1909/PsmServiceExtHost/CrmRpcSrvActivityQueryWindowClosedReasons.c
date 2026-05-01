/*
 * XREFs of CrmRpcSrvActivityQueryWindowClosedReasons @ 0x18003ABB0
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18003ABCC (CrmSrvActivityQueryWindowClosedReasons.c)
 */

__int64 CrmRpcSrvActivityQueryWindowClosedReasons()
{
  __int64 result; // rax

  result = CrmSrvActivityQueryWindowClosedReasons();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
