/*
 * XREFs of StopIdleWorker @ 0x1C0048778
 * Callers:
 *     imp_WdfDeviceStopIdleNoTrack @ 0x1C004A7C0 (imp_WdfDeviceStopIdleNoTrack.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0011C80 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall StopIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  FxDevice *v9; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  FxPowerIdleMachine *p_m_PowerIdleMachine; // rcx
  int v13; // ebx
  unsigned int _a3; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  v9 = pDevice;
  m_Globals = pDevice->m_Globals;
  if ( WaitForD0 )
  {
    result = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
    if ( (int)result < 0 )
      return result;
    v9 = pDevice;
  }
  p_m_PowerIdleMachine = &v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine;
  if ( p_m_PowerIdleMachine )
  {
    _a3 = FxPowerIdleMachine::PowerReferenceWorker(
            p_m_PowerIdleMachine,
            WaitForD0,
            FxPowerReferenceDefault,
            Tag,
            Line,
            File);
    v13 = _a3;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, Device, WaitForD0, _a3);
    if ( v13 >= 0 )
    {
      m_PkgPnp = pDevice->m_PkgPnp;
      if ( m_PkgPnp->m_SleepStudyTrackReferences == 1
        && _InterlockedIncrement(&m_PkgPnp->m_SleepStudyPowerRefIoCount) == 1 )
      {
        m_SleepStudy = m_PkgPnp->m_SleepStudy;
        if ( m_SleepStudy )
        {
          if ( m_SleepStudy->ComponentPowerRef )
            SleepstudyHelper_ComponentActive();
        }
      }
    }
  }
  else
  {
    v13 = -1073741436;
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0x24u, WPP_FxDeviceApi_cpp_Traceguids, Device, 0xC0000184);
  }
  return (unsigned int)v13;
}
