/*
 * XREFs of imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C004A8F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00831C0 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 */

unsigned int __fastcall imp_WdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  unsigned int _a4; // eax
  _PO_FX_COMPONENT_V1 *Component; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !PowerFrameworkSettings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v7 = -1073741808;
    v8 = 21;
LABEL_13:
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, v8, WPP_FxDeviceApiKm_cpp_Traceguids, Device, v7);
    goto LABEL_14;
  }
  _a4 = PowerFrameworkSettings->Size;
  if ( PowerFrameworkSettings->Size != 72 )
  {
    v7 = -1073741820;
    WPP_IFR_SF_qddd(m_Globals, 0, 0x12u, 0x16u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, 72, _a4, -1073741820);
LABEL_14:
    FxVerifierDbgBreakPoint(m_Globals);
    return v7;
  }
  Component = PowerFrameworkSettings->Component;
  if ( Component )
  {
    if ( !Component->IdleStateCount )
    {
      v8 = 23;
LABEL_12:
      v7 = -1073741811;
      goto LABEL_13;
    }
    if ( !Component->IdleStates )
    {
      v8 = 24;
      goto LABEL_12;
    }
  }
  return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
}
