/*
 * XREFs of HamRpcSrvSetExternalResourcePriority @ 0x18006BF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvSetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a3)
{
  return HamSrvSetExternalResourcePriority(a1, a2, a3);
}
