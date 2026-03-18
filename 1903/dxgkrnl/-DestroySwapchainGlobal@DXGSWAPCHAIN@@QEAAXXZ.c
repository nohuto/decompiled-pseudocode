/*
 * XREFs of ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C02861AC
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C028534C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0285FC8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainGlobal(DXGSWAPCHAIN *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int i; // ebx
  void *v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( *((_QWORD *)this + 19) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 1735LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_QWORD *)this + 13) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 1736LL;
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = 0; i < *((_DWORD *)this + 12); ++i )
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
      this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 7) + 112LL * i));
  v6 = (void *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    operator delete[](v6);
    *((_QWORD *)this + 7) = 0LL;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 27);
  if ( v7 )
  {
    v8 = (void *)v7[2];
    if ( v8 )
    {
      operator delete[](v8);
      v7[2] = 0LL;
    }
    operator delete(v7);
    *((_QWORD *)this + 27) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 28);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 28) = 0LL;
  }
  v10 = WdLogNewEntry5_WdEvent(v9);
  *(_QWORD *)(v10 + 24) = this;
  *(_QWORD *)(v10 + 32) = DXGPROCESS::GetCurrent(v12, v11);
  WdLogEvent5_WdEvent(v10);
}
