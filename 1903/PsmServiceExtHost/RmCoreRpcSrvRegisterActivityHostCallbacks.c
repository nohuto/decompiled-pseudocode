/*
 * XREFs of RmCoreRpcSrvRegisterActivityHostCallbacks @ 0x18003E9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmCoreRpcSrvRegisterActivityHostCallbacks(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  return RmSrvHostNotificationSubscribe(a1, a2, a3);
}
