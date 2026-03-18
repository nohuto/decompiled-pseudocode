/*
 * XREFs of ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0086890
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D070 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0089238 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C001A6A8 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C005C064 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 */

void __fastcall FxPowerIdleMachine::Reset(FxPowerIdleMachine *this)
{
  _SINGLE_LIST_ENTRY *Next; // r8
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  FxTrackPowerOption TrackPower; // cl

  this->m_IoCount = 0;
  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_Flags = 0;
  v3 = (_FX_DRIVER_GLOBALS *)Next[2].Next;
  DebugExtension = v3->DebugExtension;
  if ( DebugExtension )
  {
    TrackPower = DebugExtension->TrackPower;
    if ( TrackPower )
      FxTagTracker::CreateAndInitialize(
        &this->m_TagTracker,
        v3,
        FxTagTrackerTypePower,
        TrackPower == FxTrackPowerRefsAndStack,
        (FxObject *)Next[12].Next);
  }
  FxPowerIdleMachine::SendD0Notification(this);
}
