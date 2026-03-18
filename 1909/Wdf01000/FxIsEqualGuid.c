/*
 * XREFs of FxIsEqualGuid @ 0x1C003AEB0
 * Callers:
 *     FxIFR @ 0x1C00040B0 (FxIFR.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003E628 (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C003EA70 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C003EE90 (imp_WdfWmiProviderCreate.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0040B84 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005F930 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005FB00 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C006ABF0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0084258 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}
