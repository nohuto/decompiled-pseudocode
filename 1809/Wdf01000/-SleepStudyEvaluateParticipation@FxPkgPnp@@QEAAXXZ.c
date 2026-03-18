/*
 * XREFs of ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C0088118
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0089E10 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0087F44 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 *     ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1C00941A8 (-MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P.c)
 */

void __fastcall FxPkgPnp::SleepStudyEvaluateParticipation(FxPkgPnp *this)
{
  NTSTATUS _a2; // ebx
  _SLEEP_STUDY_INTERFACE *PoolWithTag; // rax
  _SLEEP_STUDY_INTERFACE *v4; // rbx
  FxDeviceBase *v5; // rcx
  __int64 v6; // rax
  const void *_a1; // rcx
  int (__fastcall *v8)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *); // r8
  FxDeviceBase *v9; // rcx
  unsigned __int16 v10; // ax
  const void *v11; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v14; // rcx
  void *OutputBufferLength; // [rsp+20h] [rbp-48h]
  _POWER_PLATFORM_INFORMATION platformInfo; // [rsp+40h] [rbp-28h] BYREF
  _WNF_STATE_NAME wnfStateName; // [rsp+48h] [rbp-20h] BYREF

  platformInfo.AoAc = 0;
  wnfStateName = WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED;
  if ( !this->m_PowerPolicyMachine.m_Owner || unk_1C00ABEC1 == 1 )
    goto LABEL_17;
  _a2 = ZwPowerInformation(PlatformInformation, 0LL, 0, &platformInfo, 1u);
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v14 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x10u, WPP_FxPkgPnpKM_cpp_Traceguids, v14);
$Done_59:
    if ( _a2 >= 0 )
      return;
    goto LABEL_19;
  }
  if ( !platformInfo.AoAc )
  {
LABEL_17:
    _a2 = -1073741637;
    goto $Done_59;
  }
  PoolWithTag = (_SLEEP_STUDY_INTERFACE *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x20uLL, 0x53535554u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(_SLEEP_STUDY_INTERFACE));
    this->m_SleepStudy = v4;
    _a2 = MxWnf::MxSubscribeWnfStateChange(&v4->WnfContext, &wnfStateName, v8, this, OutputBufferLength);
    if ( _a2 < 0 )
    {
      v9 = this->m_DeviceBase;
      v10 = v9->m_ObjectSize;
      v11 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v10 )
        v11 = 0LL;
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x12u, WPP_FxPkgPnpKM_cpp_Traceguids, v11, _a2);
    }
    else
    {
      FxPkgPnp::SleepStudyEvaluateDripsConstraint(this, 1u);
    }
    goto $Done_59;
  }
  v5 = this->m_DeviceBase;
  v6 = v5->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)v6 )
    _a1 = 0LL;
  WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x11u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
LABEL_19:
  this->m_SleepStudyTrackReferences = 0;
}
