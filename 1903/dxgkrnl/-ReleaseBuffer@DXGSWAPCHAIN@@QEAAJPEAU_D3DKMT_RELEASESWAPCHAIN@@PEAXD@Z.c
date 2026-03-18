/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C028778C
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02857EC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02882B4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C0288384 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C0047C9C (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0047DFC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0047E84 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0047FF8 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     McTemplateK0pqddqqqqq @ 0x1C00480FC (McTemplateK0pqddqqqqq.c)
 *     McTemplateK0pqdqp @ 0x1C00481E8 (McTemplateK0pqdqp.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C0285DF4 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0286954 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0286BFC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C0287E6C (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  BOOL bProducer; // r12d
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // r8
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  const GUID *v20; // r8
  __int64 v21; // rdx
  __int64 pDeferredFreeList_low; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  PVOID *v25; // r12
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _WORK_QUEUE_ITEM *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _WORK_QUEUE_ITEM *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v41; // r14
  struct AUTOEXPANDALLOCATION *v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  int v45; // ecx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  void *Src; // [rsp+28h] [rbp-81h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v50; // [rsp+30h] [rbp-79h]
  char v51[8]; // [rsp+38h] [rbp-71h]
  BOOL v53; // [rsp+70h] [rbp-39h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v54; // [rsp+78h] [rbp-31h] BYREF
  void *v55; // [rsp+80h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v56; // [rsp+88h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v57; // [rsp+90h] [rbp-19h] BYREF
  void *v58; // [rsp+98h] [rbp-11h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v59; // [rsp+A0h] [rbp-9h] BYREF
  BOOL v60; // [rsp+A8h] [rbp-1h] BYREF
  int v61; // [rsp+ACh] [rbp+3h]
  __int128 v62; // [rsp+B0h] [rbp+7h]
  int v63; // [rsp+C0h] [rbp+17h]

  v58 = a3;
  if ( *((struct _KTHREAD **)this + 2) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 2836LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0LL;
  if ( a2[1].hNtSwapChain )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2843LL;
    WdLogEvent5_WdAssertion(v8);
  }
  bProducer = a2->bProducer;
  v53 = bProducer;
  v10 = (char *)this + (bProducer ? 136LL : 88LL);
  if ( *((_DWORD *)this + 58) && !bProducer && LODWORD(a2->pDeferredFreeList) )
  {
    v11 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v11 + 24) = 2851LL;
    WdLogEvent5_WdError(v11);
    return 3221225659LL;
  }
  v13 = *((unsigned int *)v10 + 10);
  if ( (_DWORD)v13 == -1
    || (DXGSWAPCHAIN::GetClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10, v13, &v54, &v59),
        v14 = v54,
        *(_DWORD *)v54 != 1)
    || *((_DWORD *)v54 + 1) != *((_DWORD *)v10 + 7) )
  {
    v47 = WdLogNewEntry5_WdError(this, a2, v13);
    *(_QWORD *)(v47 + 24) = *((_QWORD *)v10 + 2);
    *(_QWORD *)(v47 + 32) = this;
    WdLogEvent5_WdError(v47);
    LODWORD(v16) = -1073741811;
    goto LABEL_50;
  }
  LODWORD(v16) = DXGSWAPCHAIN::InsertGPUSignal(
                   this,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
                   v54,
                   *((_DWORD *)this + 46));
  if ( (int)v16 >= 0 )
  {
    if ( *((_DWORD *)v10 + 7) == 1 )
    {
      if ( *((_DWORD *)this + 58) )
      {
        v24 = *((_QWORD *)v14 + 4);
        if ( v24 )
        {
          v25 = (PVOID *)((char *)this + (-(__int64)bProducer & 0xFFFFFFFFFFFFFFD0uLL) + 152);
          v26 = ObDuplicateObject(*v25, v24, *((_QWORD *)v10 + 2), &v55, 0, 0, 6, 1);
          v16 = v26;
          if ( v26 < 0 )
          {
            v18 = WdLogNewEntry5_WdError(v28, v27, v29);
            *(_QWORD *)(v18 + 24) = *((_QWORD *)v14 + 4);
            *(_QWORD *)(v18 + 32) = v16;
            goto LABEL_14;
          }
          a2->pMetaData = v55;
          *(_QWORD *)&a2->DeferredFreeListSize = *((_QWORD *)v14 + 5);
          v30 = (struct _WORK_QUEUE_ITEM *)operator new[](0x30uLL, 0x4B677844u, (POOL_TYPE)512);
          v34 = v30;
          if ( v30 )
            memset(v30, 0, 0x30uLL);
          else
            v34 = 0LL;
          if ( !v34 )
          {
            v35 = WdLogNewEntry5_WdError(v32, v31, v33);
            *(_QWORD *)(v35 + 24) = *((_QWORD *)v14 + 4);
            WdLogEvent5_WdError(v35);
LABEL_25:
            DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v21, (const GUID *)v23);
            v7 = 0LL;
            goto LABEL_50;
          }
          LODWORD(v16) = ObReferenceObjectByPointer(*v25, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
          if ( (int)v16 < 0 )
          {
            v39 = WdLogNewEntry5_WdError(v37, v36, v38);
            *(_QWORD *)(v39 + 24) = *v25;
            WdLogEvent5_WdError(v39);
            operator delete(v34);
            goto LABEL_25;
          }
          v34[1].List.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v14 + 4);
          v34[1].List.Flink = (struct _LIST_ENTRY *)*v25;
          v34->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
          v34->Parameter = v34;
          v34->List.Flink = 0LL;
          ExQueueWorkItem(v34, DelayedWorkQueue);
          *((_QWORD *)v14 + 4) = 0LL;
          *((_QWORD *)v14 + 5) = 0LL;
          bProducer = v53;
        }
      }
    }
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
      this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
      *((_DWORD *)v10 + 10),
      &v57,
      &v56);
    v40 = *((unsigned int *)this + 46);
    v41 = v57;
    *((_DWORD *)v56 + 1) = v40;
    ++*((_DWORD *)this + 46);
    *(_DWORD *)v41 = 2;
    *((_DWORD *)v41 + 1) = DXGSWAPCHAIN::SwitchClient(v40, *((unsigned int *)v10 + 7));
    pDeferredFreeList_low = LODWORD(a2->pDeferredFreeList);
    if ( (_DWORD)pDeferredFreeList_low )
    {
      v42 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v41 + 2);
      v60 = a2->bProducer;
      LODWORD(Size) = pDeferredFreeList_low;
      v62 = 0LL;
      v63 = 0;
      v61 = 0;
      LODWORD(v16) = DXGSWAPCHAIN::SetMetaDataInternal(
                       this,
                       v42,
                       (int *)v41 + 6,
                       0,
                       Size,
                       v58,
                       (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v60,
                       a4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
      {
        *(_DWORD *)v51 = v62;
        LODWORD(v50) = v61;
        LODWORD(Src) = v60;
        LODWORD(Size) = v16;
        McTemplateK0pqddqqqqq(
          pDeferredFreeList_low,
          &EventIndirectSwapChainSetMetaData,
          (const GUID *)v23,
          this,
          Size,
          Src,
          v50,
          *(_QWORD *)v51,
          DWORD1(v62),
          DWORD2(v62),
          HIDWORD(v62),
          v63);
      }
      if ( (int)v16 < 0 )
      {
        v43 = WdLogNewEntry5_WdError(pDeferredFreeList_low, v21, v23);
        *(_QWORD *)(v43 + 24) = *((_QWORD *)v10 + 2);
        *(_QWORD *)(v43 + 32) = this;
LABEL_34:
        WdLogEvent5_WdError(v43);
        goto LABEL_25;
      }
    }
    if ( !*((_DWORD *)v41 + 6) )
      AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)v41 + 2), 0, 0);
    v44 = *((_DWORD *)this + 58);
    if ( *((_DWORD *)v10 + 7) )
    {
      if ( v44 )
      {
        LODWORD(v16) = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree((unsigned __int64)this, a2);
        if ( (int)v16 < 0 )
          goto LABEL_25;
      }
    }
    else
    {
      if ( !v44 )
      {
        v23 = *((_QWORD *)this + 28);
        v45 = *(_DWORD *)v23 + 1;
        if ( *(_DWORD *)v23 == *(_DWORD *)(v23 + 4) )
          v45 = 0;
        *(_DWORD *)v23 = v45;
      }
      LODWORD(v16) = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 27), *((unsigned int *)v10 + 10), v23);
      if ( (int)v16 < 0 )
      {
        v43 = WdLogNewEntry5_WdError(pDeferredFreeList_low, v21, v23);
        *(_QWORD *)(v43 + 24) = this;
        goto LABEL_34;
      }
    }
    *((_DWORD *)v10 + 10) = -1;
    v46 = -(__int64)bProducer & 0xFFFFFFFFFFFFFFD0uLL;
    v7 = *(_QWORD *)((char *)this + v46 + 168);
    if ( v7 )
      KeSetEvent(*(PRKEVENT *)((char *)this + v46 + 168), 2, 0);
    goto LABEL_50;
  }
  v18 = WdLogNewEntry5_WdError(0LL, v15, v17);
  *(_QWORD *)(v18 + 24) = this;
LABEL_14:
  WdLogEvent5_WdError(v18);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v19, v20);
LABEL_50:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
  {
    LODWORD(v50) = a2->pDeferredFreeList;
    LODWORD(Src) = a2->bProducer;
    LODWORD(Size) = v16;
    McTemplateK0pqdqp(pDeferredFreeList_low, v21, (const GUID *)v23, this, Size, Src, v50, v7);
  }
  return (unsigned int)v16;
}
