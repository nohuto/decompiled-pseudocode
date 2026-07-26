/*
 * XREFs of ndisWdfNotifySystemPower @ 0x1C00F58A0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     NdisResetEvent @ 0x1C0008E20 (NdisResetEvent.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010508 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     WPP_SF_LqZ @ 0x1C0049B34 (WPP_SF_LqZ.c)
 *     ndisSelectiveSuspendStop @ 0x1C0075C38 (ndisSelectiveSuspendStop.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00BE278 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisMPowerPolicy @ 0x1C010AA50 (ndisMPowerPolicy.c)
 */

__int64 __fastcall ndisWdfNotifySystemPower(struct _NDIS_MINIPORT_BLOCK *a1, int a2, unsigned int a3)
{
  unsigned int v6; // esi
  __int64 v8; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_LqZ(0x60u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a2, a1, a1->pAdapterInstanceName);
  if ( a2 == 1 )
  {
    v6 = ndisMPowerPolicy(a1, 0);
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(0x61u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)a1);
  }
  else if ( (unsigned int)(a2 - 2) <= 3 )
  {
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendStop(a1, 6);
    ndisMPowerPolicy(a1, 0);
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
    {
      LODWORD(v8) = a3;
      WPP_SF_qdD(0x62u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)a1, a2, v8);
    }
    NdisResetEvent(&a1->OpenReadyEvent);
    ndisCancelInitModeTimeoutTimer((__int64)a1, 1);
    v6 = ndisPrepForLowPower(a1, a3);
  }
  if ( (byte_1C00A2083 & 4) != 0 )
    McTemplateK0jqxqd(
      (__int64)a1,
      &MiniportPowerStates,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      a2,
      a3);
  return v6;
}
