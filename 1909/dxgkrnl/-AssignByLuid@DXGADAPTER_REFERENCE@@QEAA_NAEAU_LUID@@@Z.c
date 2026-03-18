/*
 * XREFs of ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00CB098 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D540C (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01284EC (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02023DC (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     NtDxgkGetProcessList @ 0x1C0206640 (NtDxgkGetProcessList.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CE84 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C028D13C (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     DxgkDispMgrSourceOperation @ 0x1C028D960 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
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
