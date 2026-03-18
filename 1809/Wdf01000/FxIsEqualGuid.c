/*
 * XREFs of FxIsEqualGuid @ 0x1C003BBD8
 * Callers:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003F3A8 (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C003F810 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C003FC30 (imp_WdfWmiProviderCreate.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0041934 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005F790 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005F960 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C006A540 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00831DC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}
