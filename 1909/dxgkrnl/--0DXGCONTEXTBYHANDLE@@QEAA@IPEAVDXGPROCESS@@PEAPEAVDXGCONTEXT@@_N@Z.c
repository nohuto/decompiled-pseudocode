/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C00C5A70 (DxgkGetContextSchedulingPriority.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010FE00 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011EBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     DxgkRender @ 0x1C0120C10 (DxgkRender.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C01266E0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C014A030 (DxgkSetContextSchedulingPriority.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0172810 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C020A220 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C020C6A0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C021A0A8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021A9D0 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021AD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022AE20 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C0233050 (DxgkGetContextInProcessSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C024BD08 (DxgkCreateHwQueueInternal.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C025AE2C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     OutputDuplPresent @ 0x1C0276950 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C02830D0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C02838D0 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02840D0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
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
  __int64 v14; // rax
  struct DXGCONTEXT *v15; // rax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *((_DWORD *)a3 + 56) )
    goto LABEL_8;
  v10 = a3[26];
  v11 = *((_DWORD *)v10 + 4 * v9 + 2);
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v10 + 16 * v9 + 8) & 0x60) || (v11 & 0x2000) != 0 || (v11 & 0x1F) == 0 )
    goto LABEL_8;
  v12 = v11 & 0x1F;
  if ( (_BYTE)v12 != 7 )
  {
    v14 = WdLogNewEntry5_WdError(v12, 2LL * (unsigned int)v9, v10);
    *(_QWORD *)(v14 + 24) = 267LL;
    WdLogEvent5_WdError(v14);
LABEL_8:
    v13 = 0LL;
    goto LABEL_9;
  }
  v13 = *((_QWORD *)v10 + 2 * (unsigned int)v9);
LABEL_9:
  v15 = (struct DXGCONTEXT *)v13;
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v13;
  if ( v13 && !a5 )
  {
    _m_prefetchw((const void *)(v13 + 32));
    v16 = *(_QWORD *)(v13 + 32);
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 32), v16 + 1, v16);
      if ( v17 == v16 )
      {
        v15 = *(struct DXGCONTEXT **)this;
        goto LABEL_16;
      }
    }
    *(_QWORD *)this = 0LL;
    v15 = 0LL;
  }
LABEL_16:
  *a4 = v15;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return this;
}
