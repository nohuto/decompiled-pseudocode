/*
 * XREFs of CrmRpcSrvActivityAllocate @ 0x180032D20
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityAllocate @ 0x180032E38 (CrmSrvActivityAllocate.c)
 */

__int64 __fastcall CrmRpcSrvActivityAllocate(int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = CrmSrvActivityAllocate(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
