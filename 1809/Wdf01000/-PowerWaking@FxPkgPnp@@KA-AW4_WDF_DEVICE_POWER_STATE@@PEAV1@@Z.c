/*
 * XREFs of ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0017540
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C00887EC (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C008887C (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0088910 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWaking(FxPkgPnp *This)
{
  FxPnpDeviceD0Entry *p_m_DeviceD0Entry; // rbx
  WDFDEVICE__ *v2; // r8
  unsigned __int64 v3; // rdx
  bool v5; // zf
  FxPkgPnp *m_PkgPnp; // rax
  char v7; // si
  FxDevice *m_Device; // rbp
  FxCompanionTarget *m_CompanionTarget; // rdx
  int v10; // eax
  __int64 result; // rax
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  int v13; // r14d
  FxPrePostCallback *v14; // rcx

  p_m_DeviceD0Entry = &This->m_DeviceD0Entry;
  v2 = 0LL;
  v3 = (unsigned __int64)This->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  v5 = This->m_DeviceBase->m_ObjectSize == 0;
  This->m_DeviceD0Entry.m_PreviousState = This->m_DevicePowerState;
  if ( !v5 )
    v2 = (WDFDEVICE__ *)v3;
  m_PkgPnp = This->m_DeviceD0Entry.m_PkgPnp;
  v7 = 0;
  This->m_DeviceD0Entry.m_Device = v2;
  m_Device = m_PkgPnp->m_Device;
  m_CompanionTarget = m_PkgPnp->m_CompanionTarget;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    if ( m_CompanionTarget
      && ((int (__fastcall *)(FxPnpDeviceD0Entry *))p_m_DeviceD0Entry->InvokeCompanionCallback)(&This->m_DeviceD0Entry) < 0 )
    {
      return 852LL;
    }
    v10 = p_m_DeviceD0Entry->InvokeClient(p_m_DeviceD0Entry);
    if ( v10 < 0 )
      return 852LL;
    v7 = 2;
    goto LABEL_7;
  }
  if ( m_CompanionTarget
    && ((int (__fastcall *)(FxPnpDeviceD0Entry *))p_m_DeviceD0Entry->InvokeCompanionCallback)(&This->m_DeviceD0Entry) < 0 )
  {
    return 852LL;
  }
  v13 = FxPrePostCallback::IssuePreCxCallbacksStateful(p_m_DeviceD0Entry, m_Device);
  v14 = p_m_DeviceD0Entry;
  if ( v13 < 0 )
    goto LABEL_22;
  v13 = p_m_DeviceD0Entry->InvokeClient(p_m_DeviceD0Entry);
  v7 = 1;
  if ( v13 < 0 )
  {
    v14 = p_m_DeviceD0Entry;
LABEL_22:
    FxPrePostCallback::IssueCleanupCxCallbacks(v14, m_Device);
    goto LABEL_23;
  }
  v7 = 2;
LABEL_23:
  if ( v13 < 0 )
  {
LABEL_27:
    result = 862LL;
    if ( (unsigned __int8)v7 >= 2u )
      return result;
    return 852LL;
  }
  v10 = FxPrePostCallback::IssuePostCxCallbacks(p_m_DeviceD0Entry, m_Device);
LABEL_7:
  if ( v10 < 0 )
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
