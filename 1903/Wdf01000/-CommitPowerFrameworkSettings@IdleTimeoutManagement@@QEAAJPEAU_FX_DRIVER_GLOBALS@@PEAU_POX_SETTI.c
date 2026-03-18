/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C008A1D4
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00831C0 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C008C910 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  char v5; // si
  __int64 v6; // r10
  unsigned __int16 v7; // r9
  unsigned int v8; // ebx
  const void *_a1; // rcx
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // edx
  __int32 v11; // edx
  __int32 v12; // edx

  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)&this[-3].m_IdleTimeoutStatus + 96LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    v7 = 14;
LABEL_3:
    v8 = -1073741808;
    _a1 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v6 + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qid(
      DriverGlobals,
      2u,
      0xCu,
      v7,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(_QWORD *)(v6 + 144),
      -1073741808);
    FxVerifierDbgBreakPoint(DriverGlobals);
    goto LABEL_13;
  }
  v5 = 1;
  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
  if ( updated == IdleTimeoutStatusFlagsUpdated )
    return 0;
  v11 = updated - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = 15;
      goto LABEL_3;
    }
    if ( v12 == 1 )
    {
      v7 = 16;
      goto LABEL_3;
    }
  }
  v8 = -1073741595;
LABEL_13:
  if ( v5 )
    this->m_PoxSettings = 0LL;
  return v8;
}
