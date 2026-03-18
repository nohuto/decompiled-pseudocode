/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C0089058
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00823B0 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C008B314 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  char v5; // si
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  unsigned __int16 v7; // r9
  int v8; // ebx
  const void *_a1; // rcx
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // edx
  __int32 v11; // edx
  __int32 v12; // edx

  v5 = 0;
  ComponentIdleConditionCallback = this[-5].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    v7 = 14;
  }
  else
  {
    v5 = 1;
    updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
    if ( updated == IdleTimeoutStatusFlagsUpdated )
    {
      v8 = 0;
      goto $exit_19;
    }
    v11 = updated - 1;
    if ( !v11 )
      goto LABEL_12;
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = 15;
      goto LABEL_3;
    }
    if ( v12 != 1 )
    {
LABEL_12:
      v8 = -1073741595;
      goto $exit_19;
    }
    v7 = 16;
  }
LABEL_3:
  v8 = -1073741808;
  _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*((_WORD *)ComponentIdleConditionCallback + 5) )
    _a1 = 0LL;
  WPP_IFR_SF_qid(
    DriverGlobals,
    2u,
    0xCu,
    v7,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    _a1,
    *((_QWORD *)ComponentIdleConditionCallback + 18),
    -1073741808);
  FxVerifierDbgBreakPoint(DriverGlobals);
$exit_19:
  if ( v8 < 0 && v5 )
    this->m_PoxSettings = 0LL;
  return (unsigned int)v8;
}
