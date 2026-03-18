/*
 * XREFs of ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0018854
 * Callers:
 *     ?Suspending@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C00196F0 (-Suspending@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 *     ?PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007CCF0 (-PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D800 (-PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DB20 (-PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DBF0 (-PnpEventSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C007E88C (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C007FC40 (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00802D0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C00804E0 (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerInitialPowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00808E0 (-PowerInitialPowerUpFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00811B0 (-PowerUpFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedPowerDownNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081200 (-PowerUpFailedPowerDownNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Cleanup@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DC90 (-Cleanup@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgres.c)
 *     ?Flushing@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DCD0 (-Flushing@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgre.c)
 *     ?InitStartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DDA0 (-InitStartedFailedPost@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxC.c)
 *     ?RestartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DE80 (-RestartedFailedPost@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCal.c)
 * Callees:
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C008887C (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00889AC (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateless(FxPrePostCallback *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxDevice *m_Device; // rbp
  FxCompanionTarget *m_CompanionTarget; // rsi
  int v5; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax

  m_PkgPnp = this->m_PkgPnp;
  m_Device = m_PkgPnp->m_Device;
  m_CompanionTarget = m_PkgPnp->m_CompanionTarget;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v5 = this->InvokeClient(this);
    if ( m_CompanionTarget )
    {
      v7 = this->InvokeCompanionCallback(this, m_CompanionTarget);
      if ( v5 >= 0 )
        return v7;
    }
  }
  else
  {
    v5 = FxPrePostCallback::IssuePreCxCallbacksStateless(this, m_Device);
    v8 = this->InvokeClient(this);
    if ( v5 >= 0 )
      v5 = v8;
    v9 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    if ( v5 >= 0 )
      v5 = v9;
    if ( m_CompanionTarget )
    {
      v10 = this->InvokeCompanionCallback(this, m_CompanionTarget);
      if ( v5 >= 0 )
        return v10;
    }
  }
  return (unsigned int)v5;
}
