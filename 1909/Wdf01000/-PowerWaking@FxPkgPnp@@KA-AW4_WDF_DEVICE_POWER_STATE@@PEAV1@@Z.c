/*
 * XREFs of ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0017100
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C008995C (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00899EC (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0089A80 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWaking(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPnpDeviceD0Entry *p_m_DeviceD0Entry; // rbx
  char v4; // di
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v6; // rdx
  bool v7; // zf
  FxPkgPnp *m_PkgPnp; // rax
  FxDevice *m_Device; // rsi
  FxCompanionTarget *m_CompanionTarget; // rdx
  int v11; // eax
  __int64 result; // rax
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  int v14; // ebp
  FxPrePostCallback *v15; // rcx

  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceD0Entry = &This->m_DeviceD0Entry;
  v4 = 0;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = m_ObjectSize == 0;
  This->m_DeviceD0Entry.m_PreviousState = This->m_DevicePowerState;
  m_PkgPnp = This->m_DeviceD0Entry.m_PkgPnp;
  if ( v7 )
    v6 = 0LL;
  This->m_DeviceD0Entry.m_Device = v6;
  m_Device = m_PkgPnp->m_Device;
  m_CompanionTarget = m_PkgPnp->m_CompanionTarget;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    if ( m_CompanionTarget
      && ((int (__fastcall *)(FxPnpDeviceD0Entry *))p_m_DeviceD0Entry->InvokeCompanionCallback)(&This->m_DeviceD0Entry) < 0 )
    {
      return 852LL;
    }
    v11 = p_m_DeviceD0Entry->InvokeClient(p_m_DeviceD0Entry);
    if ( v11 < 0 )
      return 852LL;
    v4 = 2;
    goto LABEL_7;
  }
  if ( m_CompanionTarget
    && ((int (__fastcall *)(FxPnpDeviceD0Entry *))p_m_DeviceD0Entry->InvokeCompanionCallback)(&This->m_DeviceD0Entry) < 0 )
  {
    return 852LL;
  }
  v14 = FxPrePostCallback::IssuePreCxCallbacksStateful(p_m_DeviceD0Entry, m_Device);
  v15 = p_m_DeviceD0Entry;
  if ( v14 < 0 )
    goto LABEL_22;
  v14 = p_m_DeviceD0Entry->InvokeClient(p_m_DeviceD0Entry);
  v4 = 1;
  if ( v14 < 0 )
  {
    v15 = p_m_DeviceD0Entry;
LABEL_22:
    FxPrePostCallback::IssueCleanupCxCallbacks(v15, m_Device);
    goto LABEL_23;
  }
  v4 = 2;
LABEL_23:
  if ( v14 < 0 )
  {
LABEL_27:
    result = 862LL;
    if ( (unsigned __int8)v4 >= 2u )
      return result;
    return 852LL;
  }
  v11 = FxPrePostCallback::IssuePostCxCallbacks(p_m_DeviceD0Entry, m_Device);
LABEL_7:
  if ( v11 < 0 )
    goto LABEL_27;
  if ( This->m_SleepStudyTrackReferences == 1 )
  {
    m_SleepStudy = This->m_SleepStudy;
    if ( m_SleepStudy )
    {
      if ( m_SleepStudy->ComponentPowerRef )
        SleepstudyHelper_ResetComponentsStartTime();
    }
  }
  return 858LL;
}
