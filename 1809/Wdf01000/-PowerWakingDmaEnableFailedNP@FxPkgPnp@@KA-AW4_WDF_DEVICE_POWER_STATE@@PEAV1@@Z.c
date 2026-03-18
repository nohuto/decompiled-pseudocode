/*
 * XREFs of ?PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqLd @ 0x1C006C928 (WPP_IFR_SF_qqLd.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008DFA8 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableFailedNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  int v6; // r8d
  FxDeviceBase *v7; // rdx
  const void *_a2; // rcx

  FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  m_Method = This->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    v6 = m_Method((WDFDEVICE__ *)v5, WdfPowerDeviceD3Final);
  }
  else
  {
    v6 = 0;
  }
  if ( v6 < 0 )
  {
    v7 = This->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)v7,
      0xCu,
      0x1Au,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v7->m_DeviceObject.m_DeviceObject,
      5u,
      v6);
  }
  return 33592LL;
}
