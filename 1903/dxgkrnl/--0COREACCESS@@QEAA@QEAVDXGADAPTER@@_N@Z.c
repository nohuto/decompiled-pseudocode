/*
 * XREFs of ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC
 * Callers:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C004325C (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00E7750 (DxgkGetMonitorInternalInfo.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C00EE430 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00FEDD0 (DxgkGetPresentHistoryInternal.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C011E214 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0121764 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C012FC70 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkUnlock @ 0x1C0130ED0 (DxgkUnlock.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C013CD60 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C013EB78 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C014A9B0 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C020F510 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C024EBE0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     DxgkDestroyOverlay @ 0x1C02546C0 (DxgkDestroyOverlay.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025D6D8 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02853AC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     <none>
 */

COREACCESS *__fastcall COREACCESS::COREACCESS(COREACCESS *this, struct DXGADAPTER *const a2)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 7) = -1;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 1) = -1LL;
  }
  return this;
}
