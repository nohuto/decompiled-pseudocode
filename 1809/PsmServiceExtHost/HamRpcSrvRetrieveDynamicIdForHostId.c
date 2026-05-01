/*
 * XREFs of HamRpcSrvRetrieveDynamicIdForHostId @ 0x18006BFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HamRpcSrvRetrieveDynamicIdForHostId(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _GUID *a6)
{
  return HamSrvRetrieveDynamicIdForHostId(
           (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1608),
           a2,
           a3,
           a4,
           a5,
           a6);
}
