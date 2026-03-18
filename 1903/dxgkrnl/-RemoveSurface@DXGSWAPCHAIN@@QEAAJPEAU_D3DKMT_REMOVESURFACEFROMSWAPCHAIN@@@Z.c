/*
 * XREFs of ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C0287D08
 * Callers:
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C028A6E0 (DxgkRemoveSurfaceFromSwapChain.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0285FC8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C028605C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0286BFC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::RemoveSurface(
        struct _KTHREAD **this,
        struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 BufferIdx; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  const GUID *v12; // r8
  __int64 v13; // rdi
  DXGSWAPCHAIN *v14; // rcx

  if ( this[2] != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 2420LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    v6 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v6 + 24) = 2426LL;
    WdLogEvent5_WdError(v6);
    return 3221225659LL;
  }
  BufferIdx = a2->BufferIdx;
  if ( (unsigned int)BufferIdx >= *((_DWORD *)this + 12) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v9[3] = a2->BufferIdx;
    v10 = *((unsigned int *)this + 12);
LABEL_7:
    v9[4] = v10;
LABEL_8:
    WdLogEvent5_WdError(v9);
    DXGSWAPCHAIN::MarkAbandoned(this, v11, v12);
    return 3221225485LL;
  }
  v13 = (__int64)this[7] + 112 * BufferIdx;
  if ( !*(_DWORD *)(v13 + 8) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v9[3] = a2->BufferIdx;
    v10 = *(int *)(v13 + 8);
    goto LABEL_7;
  }
  if ( *(HANDLE *)(v13 + 64) != a2->hNtSurfaceHandle )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v9[3] = a2->hNtSurfaceHandle;
    v9[4] = *((_QWORD *)this[7] + 8);
    v9[5] = a2->BufferIdx;
    goto LABEL_8;
  }
  DXGSWAPCHAIN::DestroySurfacesResourcesLocal((__int64)this, 0LL, v13);
  if ( *(_BYTE *)(v13 + 80) )
  {
    *(_DWORD *)(v13 + 8) = 2;
  }
  else
  {
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v14, (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)v13);
    memset((void *)v13, 0, 0x70uLL);
    --*((_DWORD *)this + 13);
  }
  return 0LL;
}
