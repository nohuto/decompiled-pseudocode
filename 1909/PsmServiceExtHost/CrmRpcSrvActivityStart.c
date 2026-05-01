/*
 * XREFs of CrmRpcSrvActivityStart @ 0x180031A10
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityStart @ 0x180031A58 (CrmSrvActivityStart.c)
 */

__int64 __fastcall CrmRpcSrvActivityStart(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = CrmSrvActivityStart(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
