/*
 * XREFs of ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01574D0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA590 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0216634 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0217C78 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGHWQUEUEBYHANDLE *__fastcall DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        DXGHWQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGHWQUEUE **a4,
        bool a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  struct DXGHWQUEUE *v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGHWQUEUE *v17; // rtt
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 62) )
  {
    v10 = *((_QWORD *)a3 + 29);
    v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
    {
      v15 = v11 & 0x1F;
      if ( (_BYTE)v15 == 15 )
      {
        v12 = *(_QWORD *)(v10 + 16LL * (unsigned int)v9);
        goto LABEL_4;
      }
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = 316LL;
      WdLogEvent5_WdError(v16);
    }
  }
  v12 = 0LL;
LABEL_4:
  v13 = (struct DXGHWQUEUE *)v12;
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v12;
  if ( v12 && !a5 )
  {
    _m_prefetchw((const void *)(v12 + 72));
    v13 = *(struct DXGHWQUEUE **)(v12 + 72);
    do
    {
      if ( !v13 )
      {
        *(_QWORD *)this = 0LL;
        goto LABEL_5;
      }
      v17 = v13;
      v13 = (struct DXGHWQUEUE *)_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v12 + 72),
                                   (signed __int64)v13 + 1,
                                   (signed __int64)v13);
    }
    while ( v17 != v13 );
    v13 = *(struct DXGHWQUEUE **)this;
  }
LABEL_5:
  *a4 = v13;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return this;
}
