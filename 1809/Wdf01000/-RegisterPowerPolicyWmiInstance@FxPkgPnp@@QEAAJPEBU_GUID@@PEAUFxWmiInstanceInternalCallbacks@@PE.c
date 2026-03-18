/*
 * XREFs of ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00850C0
 * Callers:
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0017414 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C008867C (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0041934 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 */

__int64 __fastcall FxPkgPnp::RegisterPowerPolicyWmiInstance(
        FxPkgPnp *this,
        const _GUID *Guid,
        FxWmiInstanceInternalCallbacks *Callbacks,
        FxWmiInstanceInternal **Instance)
{
  _GUID v8; // xmm0
  FxDeviceBase *m_DeviceBase; // rcx
  int _a1; // ebx
  _WDF_WMI_PROVIDER_CONFIG config; // [rsp+30h] [rbp-48h] BYREF

  memset(&config, 0, sizeof(config));
  v8 = *Guid;
  m_DeviceBase = this->m_DeviceBase;
  config.Size = 40;
  config.Guid = v8;
  config.MinInstanceBufferSize = 1;
  _a1 = FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
          (FxWmiIrpHandler *)m_DeviceBase[3].m_ParentObject,
          &config,
          Callbacks,
          Instance);
  if ( _a1 == -1073741771 )
    _a1 = 0;
  if ( _a1 < 0 )
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x2Eu, WPP_FxPkgPnp_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
