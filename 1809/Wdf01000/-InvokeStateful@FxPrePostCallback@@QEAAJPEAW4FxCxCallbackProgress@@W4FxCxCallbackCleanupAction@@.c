/*
 * XREFs of ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C00187C4
 * Callers:
 *     ?Restarting@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C0019150 (-Restarting@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C007E24C (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007FDD0 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081550 (-PowerWakingNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DD10 (-Init@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@.c)
 * Callees:
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C00887EC (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C008887C (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0088910 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateful(
        FxPrePostCallback *this,
        FxCxCallbackProgress *Progress,
        FxCxCallbackCleanupAction CleanupAction)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxCxCallbackProgress v5; // si
  FxDevice *m_Device; // rbp
  FxCompanionTarget *m_CompanionTarget; // rdx
  int v10; // ebx
  FxPrePostCallback *v12; // rcx

  m_PkgPnp = this->m_PkgPnp;
  v5 = FxCxCallbackProgressInitialized;
  m_Device = m_PkgPnp->m_Device;
  m_CompanionTarget = m_PkgPnp->m_CompanionTarget;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    if ( !m_CompanionTarget
      || (v10 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this), v10 >= 0) )
    {
      v10 = this->InvokeClient(this);
      v5 = FxCxCallbackProgressClientCalled;
      if ( v10 >= 0 )
        v5 = FxCxCallbackProgressClientSucceeded;
    }
    goto $exit;
  }
  if ( m_CompanionTarget )
  {
    v10 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v10 < 0 )
      goto $exit;
  }
  v10 = FxPrePostCallback::IssuePreCxCallbacksStateful(this, m_Device);
  v12 = this;
  if ( v10 < 0 )
    goto LABEL_17;
  v10 = this->InvokeClient(this);
  v5 = FxCxCallbackProgressClientCalled;
  if ( v10 >= 0 )
  {
    v5 = FxCxCallbackProgressClientSucceeded;
    goto LABEL_18;
  }
  if ( CleanupAction == FxCxCleanupAfterPreOrClientFailure )
  {
    v12 = this;
LABEL_17:
    FxPrePostCallback::IssueCleanupCxCallbacks(v12, m_Device);
  }
LABEL_18:
  if ( v10 >= 0 )
    v10 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
$exit:
  if ( Progress )
    *Progress = v5;
  return (unsigned int)v10;
}
