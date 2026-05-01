/*
 * XREFs of HamRpcSrvResetExternalResourcePriority @ 0x18006BF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvResetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  return HamSrvResetExternalResourcePriority(a1, a2, a3);
}
