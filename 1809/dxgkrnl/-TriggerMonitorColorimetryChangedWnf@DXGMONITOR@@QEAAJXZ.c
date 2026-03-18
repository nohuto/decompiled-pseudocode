/*
 * XREFs of ?TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ @ 0x1C0297364
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013E8B4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::TriggerMonitorColorimetryChangedWnf(DXGMONITOR *this)
{
  int updated; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax

  updated = ZwUpdateWnfStateData(&WNF_DX_DISPLAY_COLORIMETRY_DATA_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  v3 = updated;
  if ( updated < 0 )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
