/*
 * XREFs of HamRpcSrvTerminateActivityHost @ 0x18002DAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6)
{
  return HamSrvTerminateActivityHost(a1, a2, a3, a4, a5, a6);
}
