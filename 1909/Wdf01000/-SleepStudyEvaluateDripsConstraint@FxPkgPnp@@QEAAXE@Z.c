/*
 * XREFs of ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0089074
 * Callers:
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C0089248 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?_SleepStudyWnfCallback@FxPkgPnp@@SAJPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAX@Z @ 0x1C00898C0 (-_SleepStudyWnfCallback@FxPkgPnp@@SAJPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0089460 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 */

void __fastcall FxPkgPnp::SleepStudyEvaluateDripsConstraint(FxPkgPnp *this, unsigned __int8 IgnoreWnfQueryFailure)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  signed int _a2; // eax
  NTSTATUS v6; // edi
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *_a1; // rdx
  FxDeviceBase *v10; // rax
  signed int v11; // eax
  FxDeviceBase *v12; // rdx
  unsigned __int16 v13; // cx
  const void *v14; // rdx
  FxDeviceBase *v15; // rcx
  unsigned __int16 v16; // ax
  const void *v17; // rcx
  int initLib[14]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 constraintsRegistered; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 isDripsConstraint; // [rsp+90h] [rbp+18h] BYREF
  unsigned int bufferSize; // [rsp+98h] [rbp+20h] BYREF

  m_SleepStudy = this->m_SleepStudy;
  constraintsRegistered = 0;
  bufferSize = 1;
  _a2 = ExQueryWnfStateData(m_SleepStudy->WnfContext->Handle, initLib, &constraintsRegistered, &bufferSize);
  v6 = _a2;
  if ( _a2 < 0 )
  {
    if ( IgnoreWnfQueryFailure == 1 )
      return;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
$Done_59:
    if ( v6 >= 0 )
      return;
    goto LABEL_22;
  }
  if ( constraintsRegistered )
  {
    v10 = this->m_DeviceBase;
    isDripsConstraint = 0;
    v6 = ZwPowerInformation(
           QueryPotentialDripsConstraint,
           v10->m_PhysicalDevice.m_DeviceObject,
           0x150u,
           &isDripsConstraint,
           1u);
    if ( v6 < 0 )
    {
      v15 = this->m_DeviceBase;
      v16 = v15->m_ObjectSize;
      v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v16 )
        v17 = 0LL;
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x14u, WPP_FxPkgPnpKM_cpp_Traceguids, v17, v6);
    }
    else if ( isDripsConstraint )
    {
      if ( !_InterlockedCompareExchange(&this->m_SleepStudy->LibInitializing, 1, 0) )
      {
        v11 = SleepstudyHelper_Initialize(this->m_SleepStudy, this->m_DeviceBase);
        if ( v11 < 0 )
        {
          v12 = this->m_DeviceBase;
          v13 = v12->m_ObjectSize;
          v14 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v13 )
            v14 = 0LL;
          WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x15u, WPP_FxPkgPnpKM_cpp_Traceguids, v14, v11);
        }
        v6 = FxPkgPnp::SleepStudyRegisterBlockingComponents(this);
      }
      goto $Done_59;
    }
    v6 = -1073741637;
    goto $Done_59;
  }
  if ( IgnoreWnfQueryFailure == 1 )
    goto $Done_59;
LABEL_22:
  this->m_SleepStudyTrackReferences = 0;
}
