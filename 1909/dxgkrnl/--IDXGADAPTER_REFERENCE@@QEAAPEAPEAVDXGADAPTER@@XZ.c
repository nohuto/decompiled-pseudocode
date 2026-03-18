/*
 * XREFs of ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00041EC
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C00DF77C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E032C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C013FD60 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C014BD80 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0156410 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02023DC (DxgkCreateLightweightDeviceAndContext.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0248ACC (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0274834 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplGetDebugInfo @ 0x1C0276778 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0276864 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplPresent @ 0x1C0276950 (OutputDuplPresent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGADAPTER_REFERENCE::operator&(_QWORD *a1)
{
  __int64 v3; // rax

  if ( *a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 5169LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return a1;
}
