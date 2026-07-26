/*
 * XREFs of NdisMPciAssignResources @ 0x1C00F1D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

NDIS_STATUS __stdcall NdisMPciAssignResources(
        NDIS_HANDLE MiniportHandle,
        ULONG SlotNumber,
        PNDIS_RESOURCE_LIST *AssignedResources)
{
  __int64 v5; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x33u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportHandle);
  if ( *((_DWORD *)MiniportHandle + 936) == 5 && (v5 = *((_QWORD *)MiniportHandle + 118)) != 0 )
  {
    *AssignedResources = (PNDIS_RESOURCE_LIST)(v5 + 12);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x35u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportHandle);
    return 0;
  }
  else
  {
    *AssignedResources = 0LL;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x34u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportHandle);
    return -1073741823;
  }
}
