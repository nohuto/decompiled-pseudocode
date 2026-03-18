/*
 * XREFs of HUBHSM_GettingRootHub30PortsInfo @ 0x1C0008AF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C00224E4 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBHSM_GettingRootHub30PortsInfo(__int64 a1)
{
  HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
