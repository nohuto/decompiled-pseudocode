/*
 * XREFs of HUBHSM_GettingRootHubInfo @ 0x1C0008B10
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0021E24 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetControllerInfo @ 0x1C0022C04 (HUBUCX_GetControllerInfo.c)
 */

__int64 __fastcall HUBHSM_GettingRootHubInfo(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_GetControllerInfo(v1);
  HUBUCX_GetRootHubInfoUsingUCXIoctl(v1);
  return 1000LL;
}
