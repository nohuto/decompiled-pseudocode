/*
 * XREFs of ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C024FD74
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x1C0252D90 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C0253130 (DxgkCreateSwapChain.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0250298 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C025032C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1C02505FC (-FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02510CC (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AddSurface(const void **this, DXGADAPTER **a2, int a3, void *a4, unsigned int *a5)
{
  __int64 v9; // rax
  BOOL v10; // r14d
  __int64 v11; // rax
  __int64 v13; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rsi
  int v15; // eax
  __int64 v16; // rax
  int v17; // r12d
  unsigned __int64 v18; // rdi
  SIZE_T v19; // rax
  __int64 v20; // rcx
  char *v21; // r15
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  AUTOEXPANDALLOCATION *v28; // rax
  __int64 v29; // rcx
  AUTOEXPANDALLOCATION *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  DXGSWAPCHAIN *v33; // rcx
  struct _OBJECT_HANDLE_INFORMATION *v34; // [rsp+20h] [rbp-A8h]
  _DWORD v35[24]; // [rsp+40h] [rbp-88h] BYREF
  char v36; // [rsp+D0h] [rbp+8h] BYREF

  if ( this[1] != KeGetCurrentThread() || !DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2269LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = a3 == 0;
  if ( *((_DWORD *)this + 13) >= 0x32u )
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = 2277LL;
    WdLogEvent5_WdError(v11);
    return 3221225507LL;
  }
  EmptySlot = DXGSWAPCHAIN::FindEmptySlot((DXGSWAPCHAIN *)this);
  if ( !EmptySlot )
  {
    v15 = *((_DWORD *)this + 12);
    if ( v15 != *((_DWORD *)this + 13) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v16 + 24) = 2285LL;
      WdLogEvent5_WdAssertion(v16);
      v15 = *((_DWORD *)this + 12);
    }
    v17 = v15 + 5;
    v18 = (unsigned int)(v15 + 5);
    v19 = 96 * v18;
    if ( !is_mul_ok(v18, 0x60uLL) )
      v19 = -1LL;
    v21 = (char *)operator new[](v19, 0x4B677844u, PagedPool);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v22 + 24) = v18;
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
    memmove(v21, this[7], 96LL * *((unsigned int *)this + 12));
    memset(&v21[96 * *((unsigned int *)this + 12)], 0, 0x1E0uLL);
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v21[96 * *((unsigned int *)this + 12)];
    operator delete[]((void *)this[7]);
    this[7] = v21;
    *((_DWORD *)this + 12) = v17;
  }
  memset(v35, 0, sizeof(v35));
  v35[3] |= 1u;
  LODWORD(v34) = 13;
  v35[2] = 3;
  v23 = CreateSynchronizationObjectInternal(0LL, 1, (ADAPTER_RENDER *)a2, (__int64)v35, v34, &v36, 0LL, 0LL);
  v25 = v23;
  if ( v23 < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = this;
    *(_QWORD *)(v26 + 32) = v25;
LABEL_16:
    WdLogEvent5_WdError(v26);
    goto LABEL_25;
  }
  *((_DWORD *)EmptySlot + 7) = v35[20];
  v28 = (AUTOEXPANDALLOCATION *)operator new(0x10uLL, 0x4B677844u, PagedPool);
  v30 = v28;
  if ( v28 )
  {
    *((_QWORD *)v28 + 1) = 0LL;
    *(_QWORD *)v28 = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer(v28, 0, 0);
  }
  else
  {
    v30 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v30;
  if ( !v30 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v31 + 24) = 2342LL;
    WdLogEvent5_WdLowResource(v31);
    LODWORD(v25) = -1073741801;
    goto LABEL_26;
  }
  LODWORD(v25) = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
                   (DXGSWAPCHAIN *)this,
                   EmptySlot,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 32 * v10 + 32),
                   a4);
  if ( (int)v25 < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v26 + 24) = 2351LL;
    goto LABEL_16;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  v27 = EmptySlot - (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)this[7];
  *a5 = v27 / 96;
  ++*((_DWORD *)this + 13);
LABEL_25:
  if ( (int)v25 < 0 )
  {
LABEL_26:
    if ( !EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(v27, v10, 0LL);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v33, 0LL);
      MEMORY[0] = 0LL;
    }
  }
  return (unsigned int)v25;
}
