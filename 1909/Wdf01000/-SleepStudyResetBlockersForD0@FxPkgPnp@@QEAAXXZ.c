/*
 * XREFs of ?SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ @ 0x1C00822D8
 * Callers:
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080990 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SleepStudyResetBlockersForD0(FxPkgPnp *this)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx

  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    if ( m_SleepStudy->ComponentPowerRef )
      SleepstudyHelper_ResetComponentsStartTime();
  }
}
