/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00831C0
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C004A8F0 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C008A1D4 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  _PO_FX_COMPONENT_IDLE_STATE *v6; // r14
  FxDeviceBase *v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdx
  _PO_FX_COMPONENT_V1 *Component; // rax
  unsigned __int16 v12; // r9
  SIZE_T v13; // rdx
  _PO_FX_COMPONENT_IDLE_STATE *PoolWithTag; // rax
  int v15; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v17; // rdx
  bool v18; // zf
  __int64 _a2; // rax
  _POX_SETTINGS *v20; // rdi
  _PO_FX_COMPONENT_V1 *v21; // rcx
  _PO_FX_COMPONENT_V1 *v22; // rax
  FxDeviceBase *v23; // rdx
  const void *v24; // rcx

  LODWORD(v4) = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject )
  {
    Component = PowerFrameworkSettings->Component;
    if ( !Component )
      goto LABEL_10;
    v4 = 24LL * Component->IdleStateCount;
    if ( v4 > 0xFFFFFFFF )
    {
      v12 = 84;
      goto LABEL_22;
    }
    v5 = (unsigned int)(v4 + 32);
    if ( (unsigned int)v5 < (unsigned int)v4 )
    {
      v12 = 85;
    }
    else
    {
LABEL_10:
      v13 = (unsigned int)(v5 + 64);
      if ( (unsigned int)v13 >= (unsigned int)v5 )
      {
        PoolWithTag = (_PO_FX_COMPONENT_IDLE_STATE *)ExAllocatePoolWithTag(
                                                       ExDefaultNonPagedPoolType,
                                                       v13,
                                                       this->m_Globals->Tag);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v20 = (_POX_SETTINGS *)((char *)PoolWithTag + v5);
          v20->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
          v20->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
          v20->Component = PowerFrameworkSettings->Component;
          v20->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
          v20->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
          v20->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
          v20->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
          v20->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
          if ( PowerFrameworkSettings->Component )
          {
            v21 = (_PO_FX_COMPONENT_V1 *)((char *)PoolWithTag + (unsigned int)v4);
            v20->Component = v21;
            v22 = PowerFrameworkSettings->Component;
            v21->Id = v22->Id;
            *(_OWORD *)&v21->IdleStateCount = *(_OWORD *)&v22->IdleStateCount;
            v20->Component->IdleStates = v6;
            memmove(v20->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v4);
          }
          v15 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
                  &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                  this->m_Globals,
                  v20);
          if ( v15 >= 0 )
            v15 = 0;
          if ( v15 >= 0 )
            return (unsigned int)v15;
        }
        else
        {
          v15 = -1073741670;
          m_DeviceBase = this->m_DeviceBase;
          v17 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          v18 = m_DeviceBase->m_ObjectSize == 0;
          _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
          if ( v18 )
            v17 = 0LL;
          WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x57u, WPP_FxPkgPnp_cpp_Traceguids, v17, _a2, -1073741670);
        }
LABEL_25:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        return (unsigned int)v15;
      }
      v12 = 86;
    }
LABEL_22:
    v15 = -1073741675;
    v23 = this->m_DeviceBase;
    v24 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23->m_ObjectSize )
      v24 = 0LL;
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xCu,
      v12,
      WPP_FxPkgPnp_cpp_Traceguids,
      v24,
      (__int64)v23->m_DeviceObject.m_DeviceObject,
      -1073741675);
    goto LABEL_25;
  }
  v7 = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  _a1 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v7->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x53u, WPP_FxPkgPnp_cpp_Traceguids, _a1, v7->m_DeviceObject.m_DeviceObject);
  return 0LL;
}
