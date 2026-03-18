/*
 * XREFs of ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00037B4
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C72EC (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00CA810 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D4BBC (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0201D6C (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205304 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     NtDxgkGetProcessList @ 0x1C0205FD0 (NtDxgkGetProcessList.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CA74 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C028CD2C (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     DxgkDispMgrSourceOperation @ 0x1C028D550 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByLuid(DXGADAPTER_REFERENCE *this, struct _LUID *a2)
{
  DXGADAPTER *v4; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v8; // rax

  v4 = *(DXGADAPTER **)this;
  if ( v4 )
    DXGADAPTER::ReleaseReferenceNoTracking(v4);
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, (unsigned __int64 *)this + 1);
  *(_QWORD *)this = v6;
  if ( v6 )
    return 1;
  v8 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v8 + 24) = a2->LowPart;
  *(_QWORD *)(v8 + 32) = a2->HighPart;
  WdLogEvent5_WdWarning(v8);
  return 0;
}
