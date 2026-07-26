/*
 * XREFs of ndisIssueNetEventSetPowerEvent @ 0x1C00FC564
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisIssueNetEventSetPowerEvent(__int64 a1, int a2, char a3)
{
  bool v5; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v7[22]; // [rsp+30h] [rbp-C8h] BYREF

  v6 = a2;
  memset(v7, 0, sizeof(v7));
  ndisInitializeNetPnPEvent(v7, 0LL);
  LODWORD(v7[1]) = 0;
  v7[2] = &v6;
  LODWORD(v7[3]) = 4;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)v7);
  v5 = 1;
  if ( v6 != 1 || !a3 )
    v5 = 0;
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5104), RunSynchronous, v5);
}
