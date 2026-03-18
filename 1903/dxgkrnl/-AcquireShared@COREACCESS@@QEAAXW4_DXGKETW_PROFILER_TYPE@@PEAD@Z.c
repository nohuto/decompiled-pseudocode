/*
 * XREFs of ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C
 * Callers:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0043290 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     DxgkLock @ 0x1C00E0860 (DxgkLock.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00EEBA0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F3D3C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00F66B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00F6C90 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00F8460 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100A10 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0101DA0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0102D10 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkUnlock2 @ 0x1C0103EA0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C0104A40 (DxgkLock2.c)
 *     DxgkPresent @ 0x1C010A090 (DxgkPresent.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010ACB0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkOfferAllocations @ 0x1C010BA10 (DxgkOfferAllocations.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010EAF0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C010FA90 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113C70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114D80 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0115460 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01160D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011A5A0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     DxgkRender @ 0x1C011C610 (DxgkRender.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0121764 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01305C0 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkReclaimAllocations @ 0x1C0131850 (DxgkReclaimAllocations.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0131DD0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C0135570 (DxgkSetQueuedLimit.c)
 *     DxgkReclaimAllocations2 @ 0x1C01359B0 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0135D50 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C0136B40 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0137790 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C014A9B0 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetScanLine @ 0x1C014DB80 (DxgkGetScanLine.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C020F510 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C024EBE0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     DxgkDestroyOverlay @ 0x1C02546C0 (DxgkDestroyOverlay.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025D6D8 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02853AC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 */

struct _KTHREAD *__fastcall COREACCESS::AcquireShared(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KEVENT *v6; // rcx
  struct _KTHREAD *result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rdi
  char v13; // al

  if ( *(_BYTE *)(a1 + 24) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[5] = a1;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v6 = *(struct _KEVENT **)(a1 + 16);
  result = KeGetCurrentThread();
  if ( result != (struct _KTHREAD *)v6[6].Header.WaitListHead.Blink )
  {
    if ( !KeReadStateEvent(v6 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v8, &EventBlockThread);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 16) + 48LL), Executive, 0, 0, 0LL);
    }
    result = (struct _KTHREAD *)DXGADAPTER::AcquireCoreResourceShared(*(_QWORD *)(a1 + 16), a2, a3);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 28) = a2;
  if ( a3 )
  {
    v10 = 17LL;
    v11 = (struct _KTHREAD *)(a1 + 40);
    v12 = a3 - (a1 + 40);
    do
    {
      if ( v10 == -2147483629 )
        break;
      v13 = *((_BYTE *)v11 + v12);
      if ( !v13 )
        break;
      *(_BYTE *)v11 = v13;
      v11 = (struct _KTHREAD *)((char *)v11 + 1);
      --v10;
    }
    while ( v10 );
    result = (struct _KTHREAD *)((char *)v11 - 1);
    if ( v10 )
      result = v11;
    *(_BYTE *)result = 0;
    if ( v10 )
      *(_QWORD *)(a1 + 32) = a1 + 40;
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}
