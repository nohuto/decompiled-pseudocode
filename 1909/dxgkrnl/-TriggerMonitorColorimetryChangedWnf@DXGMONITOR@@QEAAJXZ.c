/*
 * XREFs of ?TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ @ 0x1C02CE084
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01746F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::TriggerMonitorColorimetryChangedWnf(DXGMONITOR *this)
{
  int updated; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax

  updated = ZwUpdateWnfStateData(&WNF_DX_DISPLAY_COLORIMETRY_DATA_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  v5 = updated;
  if ( updated < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
  }
  return (unsigned int)v5;
}
