/*
 * XREFs of ResumeIdleWorker @ 0x1C00486AC
 * Callers:
 *     imp_WdfDeviceResumeIdleNoTrack @ 0x1C004A120 (imp_WdfDeviceResumeIdleNoTrack.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0012670 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 */

void __fastcall ResumeIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        int Line,
        char *File)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPkgPnp *v8; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  FxDevice *pDevice; // [rsp+30h] [rbp-18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    FxPowerIdleMachine::IoDecrement(&m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, Tag, Line, File);
    v8 = pDevice->m_PkgPnp;
    if ( v8->m_SleepStudyTrackReferences == 1
      && _InterlockedExchangeAdd(&v8->m_SleepStudyPowerRefIoCount, 0xFFFFFFFF) == 1 )
    {
      m_SleepStudy = v8->m_SleepStudy;
      if ( m_SleepStudy )
      {
        if ( m_SleepStudy->ComponentPowerRef )
          SleepstudyHelper_ComponentInactive();
      }
    }
  }
  else
  {
    WPP_IFR_SF_(pDevice->m_Globals, 2u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids);
  }
}
