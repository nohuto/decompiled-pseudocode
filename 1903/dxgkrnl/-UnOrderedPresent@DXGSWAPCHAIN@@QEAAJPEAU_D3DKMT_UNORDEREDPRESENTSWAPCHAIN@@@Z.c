/*
 * XREFs of ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C0288384
 * Callers:
 *     DxgkUnOrderedPresentSwapChain @ 0x1C028A990 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02857EC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0286BFC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C028778C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::UnOrderedPresent(
        struct _KTHREAD **this,
        struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *v8; // rbx
  __int64 hNtSwapChain_low; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  const GUID *v13; // r8
  __int64 v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rdx
  const GUID *v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  BOOL bProducer; // ebx
  __int64 CurrentProcess; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  void *v32; // r8
  int v33; // eax
  __int64 v34; // rax
  char v35; // [rsp+38h] [rbp-C0h]
  _BYTE v36[64]; // [rsp+40h] [rbp-B8h] BYREF
  struct _D3DKMT_ACQUIRESWAPCHAIN v37; // [rsp+80h] [rbp-78h] BYREF
  __int64 v38; // [rsp+100h] [rbp+8h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 2518LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    v6 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v6 + 24) = 2523LL;
    WdLogEvent5_WdError(v6);
    return 3221225659LL;
  }
  v8 = a2 + 1;
  hNtSwapChain_low = LODWORD(a2[1].hNtSwapChain);
  if ( (unsigned int)hNtSwapChain_low >= *((_DWORD *)this + 12) )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v10 + 24) = LODWORD(v8->hNtSwapChain);
    v11 = *((unsigned int *)this + 12);
LABEL_7:
    *(_QWORD *)(v10 + 32) = v11;
    WdLogEvent5_WdError(v10);
    DXGSWAPCHAIN::MarkAbandoned(this, v12, v13);
    return 3221225485LL;
  }
  v14 = (__int64)this[7] + 112 * hNtSwapChain_low;
  if ( !*(_DWORD *)(v14 + 8) )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v10 + 24) = LODWORD(v8->hNtSwapChain);
    v11 = *(int *)(v14 + 8);
    goto LABEL_7;
  }
  if ( *(PVOID *)(v14 + 64) == a2->pMetaData )
  {
    memset(&v37, 0, 0x68uLL);
    v37.bProducer = a2->bProducer;
    v18 = DXGSWAPCHAIN::AcquireBuffer(this, &v37, (const GUID *)&a2[1]);
    v8 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)v18;
    if ( v18 >= 0 )
    {
      result = 259LL;
      if ( (_DWORD)v8 == 259 )
        return result;
      bProducer = a2->bProducer;
      if ( bProducer && a2->hNtPresentSurfaceHandle )
      {
        CurrentProcess = PsGetCurrentProcess(v20, v19);
        v26 = PsGetCurrentProcess(v25, v24);
        v35 = 1;
        v27 = ObDuplicateObject(v26, a2->hNtPresentSurfaceHandle, CurrentProcess, &v38, 0, 0, 6, v35);
        v8 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)v27;
        if ( v27 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v29, v28, v30);
          *(_QWORD *)(v31 + 24) = a2->hNtPresentSurfaceHandle;
          *(_QWORD *)(v31 + 32) = v8;
          WdLogEvent5_WdError(v31);
          goto LABEL_18;
        }
        *(_QWORD *)(v14 + 32) = v38;
        *(_QWORD *)(v14 + 40) = *(_QWORD *)&a2->PresentBufferIdx;
        bProducer = a2->bProducer;
      }
      memset(v36, 0, sizeof(v36));
      v32 = *(void **)&a2[1].bProducer;
      *(_DWORD *)&v36[32] = HIDWORD(a2[1].hNtSwapChain);
      *(_DWORD *)&v36[8] = bProducer;
      v33 = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)this, (struct _D3DKMT_RELEASESWAPCHAIN *)v36, v32, 1);
      v8 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)v33;
      if ( v33 >= 0 )
        return (unsigned int)v8;
    }
    v34 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v34 + 24) = v8;
    WdLogEvent5_WdError(v34);
    return (unsigned int)v8;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
  v15[3] = a2->pMetaData;
  v15[4] = *((_QWORD *)this[7] + 8);
  v15[5] = LODWORD(v8->hNtSwapChain);
  WdLogEvent5_WdError(v15);
  LODWORD(v8) = -1073741811;
LABEL_18:
  DXGSWAPCHAIN::MarkAbandoned(this, v16, v17);
  return (unsigned int)v8;
}
