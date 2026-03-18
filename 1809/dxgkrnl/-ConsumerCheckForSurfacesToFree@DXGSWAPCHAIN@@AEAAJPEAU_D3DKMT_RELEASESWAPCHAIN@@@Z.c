/*
 * XREFs of ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C02500C0
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C0251A30 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0250298 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C025032C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree(
        unsigned __int64 this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  UINT DeferredFreeListSize; // ebp
  UINT v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // r8
  DXGSWAPCHAIN *v12; // rcx
  __int64 v13; // rcx
  UINT v14; // eax
  __int64 v16; // rax

  v3 = this;
  if ( *(struct _KTHREAD **)(this + 8) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3392LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DeferredFreeListSize = a2->DeferredFreeListSize;
  a2->DeferredFreeListSize = 0;
  v6 = 0;
  if ( !*(_DWORD *)(v3 + 48) )
    return 0LL;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v3 + 216);
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 )
    {
      this = *(unsigned int *)(v7 + 12);
      while ( (_DWORD)this != *(_DWORD *)(v7 + 8) )
      {
        if ( *(_DWORD *)(v8 + 4LL * (unsigned int)this) == v6 )
          goto LABEL_13;
        v9 = this + 1;
        this = (unsigned int)(this + 1);
        if ( v9 == *(_DWORD *)(v7 + 4) )
          this = 0LL;
      }
    }
    v10 = 96LL * v6;
    v11 = v10 + *(_QWORD *)(v3 + 56);
    if ( *(_DWORD *)(v11 + 8) != 2 )
      goto LABEL_13;
    DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, 1LL, v11);
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
      v12,
      (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v10 + *(_QWORD *)(v3 + 56)));
    memset((void *)(v10 + *(_QWORD *)(v3 + 56)), 0, 0x60uLL);
    v14 = a2->DeferredFreeListSize;
    if ( v14 >= DeferredFreeListSize )
      break;
    this = v14;
    a2->pDeferredFreeList[v14] = v6;
    ++a2->DeferredFreeListSize;
    --*(_DWORD *)(v3 + 52);
LABEL_13:
    if ( ++v6 >= *(_DWORD *)(v3 + 48) )
      return 0LL;
  }
  v16 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v16 + 24) = v3;
  WdLogEvent5_WdError(v16);
  return 3221225625LL;
}
