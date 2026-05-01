/*
 * XREFs of CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x180035060
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180034E4C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 */

__int64 __fastcall CrmRpcSrvActivityWindowClosedReasonSubscribe(__int64 a1, __int64 a2, struct _WNF_STATE_NAME *a3)
{
  __int64 result; // rax

  result = CrmSrvActivityWindowClosedReasonSubscribe(a1, a2, a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
