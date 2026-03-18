/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54
 * Callers:
 *     DxgkRender @ 0x1C00EAB30 (DxgkRender.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C01109C0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C011CFBC (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C011D3C0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C011E3C0 (DxgkSetContextSchedulingPriority.c)
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01574D0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01DB6D0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@I@Z @ 0x1C01DD480 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@I@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01EA108 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAA20 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA590 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C0202250 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C0202600 (DxgkGetContextSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C02172D8 (DxgkCreateHwQueueInternal.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0225EE8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C023ED14 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     OutputDuplPresent @ 0x1C0241128 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C024D4A0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C024DCA0 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C024E4A0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGCONTEXT **a4,
        bool a5)
{
  __int64 v9; // rax
  struct _KTHREAD *v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct DXGCONTEXT *v14; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v18; // rax
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *((_DWORD *)a3 + 62) )
    goto LABEL_14;
  v10 = a3[29];
  v11 = *((_DWORD *)v10 + 4 * v9 + 2);
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v10 + 16 * v9 + 8) & 0x60) || (v11 & 0x2000) != 0 || (v11 & 0x1F) == 0 )
    goto LABEL_14;
  v12 = v11 & 0x1F;
  if ( (_BYTE)v12 != 7 )
  {
    v18 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v18 + 24) = 316LL;
    WdLogEvent5_WdError(v18);
LABEL_14:
    v13 = 0LL;
    goto LABEL_7;
  }
  v13 = *((_QWORD *)v10 + 2 * (unsigned int)v9);
LABEL_7:
  v14 = (struct DXGCONTEXT *)v13;
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v13;
  if ( v13 && !a5 )
  {
    _m_prefetchw((const void *)(v13 + 32));
    v15 = *(_QWORD *)(v13 + 32);
    while ( v15 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 32), v15 + 1, v15);
      if ( v16 == v15 )
      {
        v14 = *(struct DXGCONTEXT **)this;
        goto LABEL_13;
      }
    }
    *(_QWORD *)this = 0LL;
    v14 = 0LL;
  }
LABEL_13:
  *a4 = v14;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return this;
}
