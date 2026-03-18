/*
 * XREFs of ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x1C0045320
 * Callers:
 *     ?SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z @ 0x1C00455BC (-SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0083530 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxCompanionTarget::IncrementPendingTaskCountWithFloor(FxCompanionTarget *this)
{
  signed __int32 m_PendingTaskCount; // eax
  signed __int32 v2; // r8d

  m_PendingTaskCount = this->m_PendingTaskCount;
  while ( m_PendingTaskCount > 0 )
  {
    v2 = m_PendingTaskCount;
    m_PendingTaskCount = _InterlockedCompareExchange(
                           &this->m_PendingTaskCount,
                           m_PendingTaskCount + 1,
                           m_PendingTaskCount);
    if ( v2 == m_PendingTaskCount )
    {
      m_PendingTaskCount = v2 + 1;
      return m_PendingTaskCount == 0 ? 0xC0000056 : 0;
    }
  }
  return m_PendingTaskCount == 0 ? 0xC0000056 : 0;
}
