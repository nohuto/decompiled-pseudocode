/*
 * XREFs of ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0285A1C
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x1C0288D40 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C0289110 (DxgkCreateSwapChain.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F4FA4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0285FC8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C028605C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1C0286330 (-FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C0286DFC (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AddSurface(const void **this, DXGADAPTER **a2, int a3, void *a4, unsigned int *a5)
{
  __int64 v9; // r8
  __int64 v10; // rax
  BOOL v11; // ebp
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rsi
  int v17; // eax
  __int64 v18; // rax
  int v19; // r12d
  unsigned __int64 v20; // rdi
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // r15
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  AUTOEXPANDALLOCATION *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  AUTOEXPANDALLOCATION *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  DXGSWAPCHAIN *v45; // rcx
  struct _OBJECT_HANDLE_INFORMATION *v46; // [rsp+20h] [rbp-A8h]
  _DWORD v47[24]; // [rsp+40h] [rbp-88h] BYREF
  DXGSYNCOBJECT *v48; // [rsp+D0h] [rbp+8h] BYREF

  if ( this[2] != KeGetCurrentThread() || !DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 2299LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = a3 == 0;
  if ( *((_DWORD *)this + 13) >= 0x32u )
  {
    v12 = WdLogNewEntry5_WdError(this, a2, v9);
    *(_QWORD *)(v12 + 24) = 2307LL;
    WdLogEvent5_WdError(v12);
    return 3221225507LL;
  }
  EmptySlot = DXGSWAPCHAIN::FindEmptySlot((DXGSWAPCHAIN *)this);
  if ( !EmptySlot )
  {
    v17 = *((_DWORD *)this + 12);
    if ( v17 != *((_DWORD *)this + 13) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v18 + 24) = 2315LL;
      WdLogEvent5_WdAssertion(v18);
      v17 = *((_DWORD *)this + 12);
    }
    v19 = v17 + 5;
    v20 = (unsigned int)(v17 + 5);
    v21 = 112 * v20;
    if ( !is_mul_ok(v20, 0x70uLL) )
      v21 = -1LL;
    v26 = (char *)operator new[](v21, 0x4B677844u, PagedPool);
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
      *(_QWORD *)(v27 + 24) = v20;
      WdLogEvent5_WdLowResource(v27);
      return 3221225495LL;
    }
    memmove(v26, this[7], 112LL * *((unsigned int *)this + 12));
    memset(&v26[112 * *((unsigned int *)this + 12)], 0, 0x230uLL);
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v26[112 * *((unsigned int *)this + 12)];
    operator delete[]((void *)this[7]);
    this[7] = v26;
    *((_DWORD *)this + 12) = v19;
  }
  memset(v47, 0, sizeof(v47));
  v47[3] |= 1u;
  LODWORD(v46) = 13;
  v47[2] = 3;
  v28 = CreateSynchronizationObjectInternal(0LL, 1, (__int64)a2, (__int64)v47, v46, &v48, 0LL, 0LL);
  v32 = v28;
  if ( v28 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v33 + 24) = this;
    *(_QWORD *)(v33 + 32) = v32;
LABEL_16:
    WdLogEvent5_WdError(v33);
    goto LABEL_25;
  }
  *((_DWORD *)EmptySlot + 7) = v47[20];
  v35 = (AUTOEXPANDALLOCATION *)operator new[](0x10uLL, 0x4B677844u, PagedPool);
  v40 = v35;
  if ( v35 )
  {
    *((_QWORD *)v35 + 1) = 0LL;
    *(_QWORD *)v35 = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer(v35, 0, 0);
  }
  else
  {
    v40 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v40;
  if ( !v40 )
  {
    v41 = WdLogNewEntry5_WdLowResource(v37, v36, v38, v39);
    *(_QWORD *)(v41 + 24) = 2372LL;
    WdLogEvent5_WdLowResource(v41);
    LODWORD(v32) = -1073741801;
    goto LABEL_26;
  }
  LODWORD(v32) = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
                   (DXGSWAPCHAIN *)this,
                   EmptySlot,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 32 * v11 + 48),
                   a4);
  if ( (int)v32 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v43, v42, v44);
    *(_QWORD *)(v33 + 24) = 2381LL;
    goto LABEL_16;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  v34 = EmptySlot - (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)this[7];
  *a5 = v34 / 112;
  ++*((_DWORD *)this + 13);
LABEL_25:
  if ( (int)v32 < 0 )
  {
LABEL_26:
    if ( !EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(v34, v11, 0LL);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v45, 0LL);
      MEMORY[0] = 0LL;
    }
  }
  return (unsigned int)v32;
}
