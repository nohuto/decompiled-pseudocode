/*
 * XREFs of HamRpcSrvDebugModeEnable @ 0x180079EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvDebugModeEnable(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  return HamSrvEnableDebugMode(a1, a2);
}
