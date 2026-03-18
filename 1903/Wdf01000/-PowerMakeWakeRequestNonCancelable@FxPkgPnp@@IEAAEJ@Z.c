/*
 * XREFs of ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C0081688
 * Callers:
 *     ?PowerDxStoppedArmForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080CF0 (-PowerDxStoppedArmForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080D40 (-PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080E50 (-PowerEnablingWakeAtBus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080EA0 (-PowerEnablingWakeAtBusNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C0081464 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxPkgPnp::PowerMakeWakeRequestNonCancelable(FxPkgPnp *this, int WaitWakeStatus)
{
  unsigned __int64 *p_m_Lock; // rbp
  char v5; // di
  KIRQL v6; // al
  _IRP *m_WaitWakeIrp; // rbx
  KIRQL v8; // r15
  __int64 v9; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_ListEntry; // rbx

  p_m_Lock = &this->m_PowerMachine.m_WaitWakeLock.m_Lock;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_WaitWakeLock.m_Lock);
  m_WaitWakeIrp = this->m_SharedPower.m_WaitWakeIrp;
  v8 = v6;
  if ( m_WaitWakeIrp && _InterlockedExchange64((volatile __int64 *)&m_WaitWakeIrp->CancelRoutine, 0LL) )
  {
    if ( WaitWakeStatus >= 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 888LL);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 544) )
        {
          PoSetSystemWake(m_WaitWakeIrp);
          if ( this->m_PowerPolicyMachine.m_Owner )
          {
            m_DeviceBase = this->m_DeviceBase;
            _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_DeviceBase->m_ObjectSize )
              _a1 = 0LL;
            WPP_IFR_SF_qqq(
              this->m_Globals,
              4u,
              0xCu,
              0x1Du,
              WPP_PowerStateMachine_cpp_Traceguids,
              _a1,
              m_DeviceBase->m_DeviceObject.m_DeviceObject,
              this->m_SharedPower.m_WaitWakeIrp);
            this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = 1;
          }
        }
      }
    }
    m_WaitWakeIrp->IoStatus.Status = WaitWakeStatus;
    Blink = this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink;
    p_ListEntry = &m_WaitWakeIrp->Tail.Overlay.ListEntry;
    if ( Blink->Flink != &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList )
      __fastfail(3u);
    p_ListEntry->Flink = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
    p_ListEntry->Blink = Blink;
    Blink->Flink = p_ListEntry;
    this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink = p_ListEntry;
    this->m_SharedPower.m_WaitWakeIrp = 0LL;
    v5 = 1;
  }
  KeReleaseSpinLock(p_m_Lock, v8);
  return v5;
}
