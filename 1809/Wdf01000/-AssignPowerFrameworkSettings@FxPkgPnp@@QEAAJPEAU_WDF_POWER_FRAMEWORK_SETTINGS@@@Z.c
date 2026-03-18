/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00823B0
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C004B120 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C0089058 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned int v4; // r14d
  unsigned int v5; // edi
  char *v6; // r15
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdx
  _PO_FX_COMPONENT_V1 *Component; // rax
  SIZE_T v12; // rdx
  unsigned __int64 v13; // rcx
  int _a3; // ebx
  FxDeviceBase *v15; // rdx
  unsigned __int16 v16; // r9
  const void *v17; // rcx
  bool v18; // zf
  unsigned int v19; // eax
  unsigned int v20; // eax
  char *PoolWithTag; // rax
  FxDeviceBase *v22; // rax
  const void *v23; // rdx
  __int64 _a2; // rax
  int (__fastcall **v25)(WDFDEVICE__ *, POHANDLE__ *); // rbx
  _GUID *v26; // rcx
  _PO_FX_COMPONENT_V1 *v27; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( !WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      4u,
      0xCu,
      0x52u,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
    return 0LL;
  }
  Component = PowerFrameworkSettings->Component;
  v12 = 0xFFFFFFFFLL;
  if ( Component )
  {
    v4 = -1;
    v13 = 24LL * Component->IdleStateCount;
    if ( v13 <= 0xFFFFFFFF )
      v4 = 24 * Component->IdleStateCount;
    _a3 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v13 > 0xFFFFFFFF )
    {
      v15 = this->m_DeviceBase;
      v16 = 83;
      v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = v15->m_ObjectSize == 0;
      goto LABEL_10;
    }
    v19 = v4 + 32;
    v5 = -1;
    if ( v4 + 32 >= v4 )
      v5 = v4 + 32;
    _a3 = v19 < v4 ? 0xC0000095 : 0;
    if ( v19 < v4 )
    {
      v15 = this->m_DeviceBase;
      v16 = 84;
      v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = v15->m_ObjectSize == 0;
      goto LABEL_10;
    }
  }
  v20 = v5 + 64;
  if ( v5 + 64 >= v5 )
    v12 = v20;
  _a3 = v20 < v5 ? 0xC0000095 : 0;
  if ( v20 >= v5 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v12, this->m_Globals->Tag);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v25 = (int (__fastcall **)(WDFDEVICE__ *, POHANDLE__ *))&PoolWithTag[v5];
      *v25 = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
      v25[1] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
      v25[2] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))PowerFrameworkSettings->Component;
      v25[3] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))PowerFrameworkSettings->ComponentActiveConditionCallback;
      v25[4] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))PowerFrameworkSettings->ComponentIdleConditionCallback;
      v25[5] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))PowerFrameworkSettings->ComponentIdleStateCallback;
      v25[6] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))PowerFrameworkSettings->PowerControlCallback;
      v25[7] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))PowerFrameworkSettings->PoFxDeviceContext;
      if ( PowerFrameworkSettings->Component )
      {
        v26 = (_GUID *)&PoolWithTag[v4];
        v25[2] = (int (__fastcall *)(WDFDEVICE__ *, POHANDLE__ *))v26;
        v27 = PowerFrameworkSettings->Component;
        *v26 = v27->Id;
        v26[1] = *(_GUID *)&v27->IdleStateCount;
        *((_QWORD *)v25[2] + 3) = v6;
        memmove(*((void **)v25[2] + 3), PowerFrameworkSettings->Component->IdleStates, v4);
      }
      _a3 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
              &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
              this->m_Globals,
              (_POX_SETTINGS *)&v6[v5]);
      if ( _a3 >= 0 )
        _a3 = 0;
    }
    else
    {
      _a3 = -1073741670;
      v22 = this->m_DeviceBase;
      v23 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = v22->m_ObjectSize == 0;
      _a2 = (__int64)v22->m_DeviceObject.m_DeviceObject;
      if ( v18 )
        v23 = 0LL;
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x56u, WPP_FxPkgPnp_cpp_Traceguids, v23, _a2, -1073741670);
    }
    goto $exit_16;
  }
  v15 = this->m_DeviceBase;
  v16 = 85;
  v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
  v18 = v15->m_ObjectSize == 0;
LABEL_10:
  if ( v18 )
    v17 = 0LL;
  WPP_IFR_SF_qid(
    this->m_Globals,
    2u,
    0xCu,
    v16,
    WPP_FxPkgPnp_cpp_Traceguids,
    v17,
    (__int64)v15->m_DeviceObject.m_DeviceObject,
    _a3);
$exit_16:
  if ( _a3 < 0 && v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)_a3;
}
