/*
 * XREFs of NdisFRestartComplete @ 0x1C00EC760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __stdcall NdisFRestartComplete(NDIS_HANDLE NdisFilterHandle, NDIS_STATUS Status)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Du, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)NdisFilterHandle, Status);
  *(_DWORD *)(*((_QWORD *)NdisFilterHandle + 16) + 8LL) = Status;
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Eu, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)NdisFilterHandle, Status);
}
