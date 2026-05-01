/*
 * XREFs of CrmRpcSrvActivityAllocate @ 0x180031800
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityAllocate @ 0x1800318D8 (CrmSrvActivityAllocate.c)
 */

__int64 __fastcall CrmRpcSrvActivityAllocate(__int64 a1)
{
  __int64 result; // rax

  result = CrmSrvActivityAllocate(a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
