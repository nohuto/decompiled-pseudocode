/*
 * XREFs of ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0250F90
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C0253B80 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C025032C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02513E4 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  BOOL bProducer; // eax
  __int64 v13; // rsi
  __int64 v14; // rdi
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v5 = *((_DWORD *)this + 13);
  if ( a2->SurfaceCount != v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 2225LL;
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_DWORD *)this + 13);
  }
  v7 = 0;
  v8 = 0LL;
  if ( v5 )
  {
    while ( (unsigned int)v8 < a2->SurfaceCount )
    {
      v9 = *((_QWORD *)this + 7);
      if ( !*(_DWORD *)(96 * v8 + v9 + 8) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v10 + 24) = 2233LL;
        WdLogEvent5_WdAssertion(v10);
        v9 = *((_QWORD *)this + 7);
      }
      v7 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
             this,
             (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(96 * v8 + v9),
             a2->bProducer,
             &a2->pNtSurfaceHandles[v8]);
      if ( v7 < 0 )
      {
        bProducer = a2->bProducer;
        v13 = 0LL;
        if ( *((_DWORD *)this + 12) )
        {
          v14 = bProducer ? 0x30 : 0;
          do
          {
            DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
              v11,
              *(_DWORD *)((char *)this + v14 + 116),
              *((_QWORD *)this + 7) + 96 * v13);
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *((_DWORD *)this + 12) );
        }
        break;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 13) )
        break;
    }
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return (unsigned int)v7;
}
