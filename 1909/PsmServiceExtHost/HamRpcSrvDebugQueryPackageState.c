/*
 * XREFs of HamRpcSrvDebugQueryPackageState @ 0x180079F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvDebugQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  return HamSrvQueryPackageState(a1, a2, a3);
}
