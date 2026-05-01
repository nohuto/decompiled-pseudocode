/*
 * XREFs of CrmRpcSrvUnregister @ 0x180074580
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvUnregister @ 0x1800704B4 (CrmSrvUnregister.c)
 */

__int64 __fastcall CrmRpcSrvUnregister(char **a1)
{
  CrmSrvUnregister(*a1);
  *a1 = 0LL;
  return 0LL;
}
