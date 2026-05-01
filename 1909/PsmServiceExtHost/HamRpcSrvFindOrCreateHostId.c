/*
 * XREFs of HamRpcSrvFindOrCreateHostId @ 0x1800153C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall HamRpcSrvFindOrCreateHostId(__int64 a1, struct _HAM_HOSTID_STORE_KEY *a2, unsigned __int64 *a3)
{
  return HamSrvFindOrCreateHostId((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1608), a2, a3);
}
