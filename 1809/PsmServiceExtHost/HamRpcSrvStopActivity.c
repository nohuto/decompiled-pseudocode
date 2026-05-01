/*
 * XREFs of HamRpcSrvStopActivity @ 0x18000A300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvStopActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  return HamSrvStopActivity(a1, a2);
}
