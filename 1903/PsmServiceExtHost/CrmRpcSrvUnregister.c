/*
 * XREFs of CrmRpcSrvUnregister @ 0x18003CBD0
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvUnregister @ 0x18003CBF4 (CrmSrvUnregister.c)
 */

__int64 __fastcall CrmRpcSrvUnregister(PVOID *a1)
{
  CrmSrvUnregister(*a1);
  *a1 = 0LL;
  return 0LL;
}
