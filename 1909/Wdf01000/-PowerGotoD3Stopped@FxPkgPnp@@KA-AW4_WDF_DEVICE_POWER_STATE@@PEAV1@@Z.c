/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C001772C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00188C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006CF68 (WPP_IFR_SF_qqLd.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0077F1C (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0081964 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0081B08 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0084B84 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008F758 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v5; // bl
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  unsigned __int8 v8; // al
  FxDeviceBase *m_DeviceBase; // rcx
  bool v10; // zf
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v13; // rcx
  int v14; // edx
  FxDeviceBase *v15; // r10
  const void *v16; // rcx
  int v17; // eax
  FxDeviceBase *v18; // r8
  unsigned __int16 v19; // ax
  WDFDEVICE__ *v20; // r8

  v5 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x10u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v5 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1u, a3, a4);
  v8 = FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  v10 = v8 == 0;
  m_Method = This->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( v10 )
    v5 = 1;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v13 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v13 = 0LL;
    v14 = m_Method((WDFDEVICE__ *)v13, WdfPowerDeviceD3Final);
  }
  else
  {
    v14 = 0;
  }
  if ( v14 < 0 )
  {
    v5 = 1;
    v15 = This->m_DeviceBase;
    v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v14,
      0xCu,
      0x11u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v16,
      v15->m_DeviceObject.m_DeviceObject,
      5u,
      v14);
  }
  v17 = FxPkgPnp::NotifyResourceObjectsDx(This, 4u);
  v18 = This->m_DeviceBase;
  if ( v17 < 0 )
    v5 = 1;
  v19 = v18->m_ObjectSize;
  v20 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
  This->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  if ( !v19 )
    v20 = 0LL;
  This->m_DeviceD0Exit.m_Device = v20;
  if ( (int)FxPrePostCallback::InvokeStateless(&This->m_DeviceD0Exit) < 0 )
    v5 = 1;
  FxPkgPnp::PowerSetDevicePowerState(This, WdfPowerDeviceD3Final);
  This->PowerParentPowerDereference(This);
  if ( v5 )
    return 848LL;
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}
