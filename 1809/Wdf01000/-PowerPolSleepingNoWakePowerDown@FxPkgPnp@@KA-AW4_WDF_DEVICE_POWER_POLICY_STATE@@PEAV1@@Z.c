/*
 * XREFs of ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0016D90
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C0016E74 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingNoWakePowerDown(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // r8
  _DEVICE_POWER_STATE m_IdealDxStateForSx; // edi
  FxEnumerationInfo *m_EnumInfo; // rsi
  FxEnumerationInfo *v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_IdealDxStateForSx = m_Owner->m_IdealDxStateForSx;
  if ( m_IdealDxStateForSx != PowerDeviceD3
    && m_IdealDxStateForSx < (int)((m_Owner->m_SystemToDeviceStateMap & (15 << (4
                                                                              * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF)))) >> (4 * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF))) )
  {
    m_IdealDxStateForSx = (m_Owner->m_SystemToDeviceStateMap & (15 << (4
                                                                     * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF)))) >> (4 * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF));
  }
  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo )
  {
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    This->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 0;
    v5 = This->m_EnumInfo;
    v5->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v5->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  v6 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, m_IdealDxStateForSx, Retry);
  v7 = 1433;
  if ( v6 < 0 )
    return 1321;
  return v7;
}
