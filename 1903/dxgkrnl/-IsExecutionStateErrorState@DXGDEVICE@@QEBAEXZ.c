/*
 * XREFs of ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00CEDA4
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CC5E0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00CEDD4 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 */

bool __fastcall DXGDEVICE::IsExecutionStateErrorState(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rax
  _D3DKMT_DEVICEEXECUTION_STATE v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)DXGDEVICE::GetDeviceExecutionState(this, &v7) >= 0 )
    return v7 != D3DKMT_DEVICEEXECUTION_ACTIVE;
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdError(v6);
  return 1;
}
