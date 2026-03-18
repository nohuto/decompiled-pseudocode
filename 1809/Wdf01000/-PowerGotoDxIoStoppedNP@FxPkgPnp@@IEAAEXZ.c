/*
 * XREFs of ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C00804E0
 * Callers:
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080480 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00804C0 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0018854 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006C928 (WPP_IFR_SF_qqLd.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0080C64 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0080E08 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0083AF4 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008DFA8 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedNP(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _WDF_POWER_DEVICE_STATE _a4; // esi
  unsigned __int8 v4; // al
  FxDeviceBase *m_DeviceBase; // rcx
  bool v6; // zf
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  char v8; // bl
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v10; // rcx
  int v11; // r8d
  FxDeviceBase *v12; // rdx
  const void *_a2; // rcx
  int v14; // eax
  FxDeviceBase *v15; // rdx
  unsigned __int16 v16; // ax
  WDFDEVICE__ *v17; // rdx
  __int64 v19; // rdx

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  _a4 = WdfPowerDeviceD3Final;
  if ( CurrentStackLocation->Parameters.Create.EaLength - 4 > 2 )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4 = WdfPowerDevicePrepareForHibernation;
  v4 = FxPkgPnp::PowerDmaPowerDown(this);
  m_DeviceBase = this->m_DeviceBase;
  v6 = v4 == 0;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  v8 = v6;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v10 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v10 = 0LL;
    v11 = m_Method((WDFDEVICE__ *)v10, _a4);
  }
  else
  {
    v11 = 0;
  }
  if ( v11 < 0 )
  {
    v8 = 1;
    v12 = this->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)v12,
      0xCu,
      0x15u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v12->m_DeviceObject.m_DeviceObject,
      _a4,
      v11);
  }
  v14 = FxPkgPnp::NotifyResourceObjectsDx(this, 1u);
  v15 = this->m_DeviceBase;
  if ( v14 < 0 )
    v8 = 1;
  v16 = v15->m_ObjectSize;
  v17 = (WDFDEVICE__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0Exit.m_TargetState = _a4;
  if ( !v16 )
    v17 = 0LL;
  this->m_DeviceD0Exit.m_Device = v17;
  if ( (int)FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit) < 0 )
    v8 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v8 = 1;
  }
  if ( v8 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit);
    LOBYTE(v19) = 1;
    this->PowerReleasePendingDeviceIrp(this, v19);
    return 1;
  }
}
