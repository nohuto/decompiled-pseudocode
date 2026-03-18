/*
 * XREFs of ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqLd @ 0x1C006CF68 (WPP_IFR_SF_qqLd.c)
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0084AC8 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingConnectInterrupt(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v6; // rcx
  int v7; // r10d
  FxDeviceBase *v8; // r8
  const void *_a2; // rdx

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 0) < 0 )
    return 833LL;
  m_DeviceBase = This->m_DeviceBase;
  m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v6 = 0LL;
    v7 = m_Method((WDFDEVICE__ *)v6, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
  }
  else
  {
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    v8 = This->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v8->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a2,
      0xCu,
      0xFu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v8->m_DeviceObject.m_DeviceObject,
      This->m_DevicePowerState,
      v7);
    return 833LL;
  }
  return 785LL;
}
