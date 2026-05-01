/*
 * XREFs of HamRpcSrvServicingOpenPackageHandle @ 0x180079D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvServicingOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        LPCWSTR pwsz,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  return HamSrvOpenPackageHandle(a1, pwsz, a3, a4, a5, a6);
}
