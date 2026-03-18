/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C025032C
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C024FD74 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C02500C0 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C0250590 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0250F90 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C0251DE4 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  void *v5; // rcx
  unsigned int v6; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // rsi
  char *v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // rax
  struct DXGSYNCOBJECT *v14; // rsi
  __int64 v15; // rcx
  PERESOURCE *Global; // rax

  v4 = 32LL * a2;
  v5 = *(void **)(v4 + a3 + 56);
  if ( v5 )
  {
    ObCloseHandle(v5, 1);
    *(_QWORD *)(v4 + a3 + 56) = 0LL;
    *(_QWORD *)(v4 + a3 + 48) = 0LL;
  }
  v6 = *(_DWORD *)(v4 + a3 + 40);
  if ( v6 )
  {
    Current = DXGPROCESS::GetCurrent();
    v8 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(v4 + a3 + 40) = 0;
      return;
    }
    v9 = (char *)Current + 208;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v10 = (v6 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)v8 + 62) )
    {
      v11 = *((_QWORD *)v8 + 29);
      v12 = *(_DWORD *)(v11 + 16LL * v10 + 8);
      if ( ((v6 >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
      {
        if ( (v12 & 0x1F) == 8 )
        {
          v14 = *(struct DXGSYNCOBJECT **)(v11 + 16LL * v10);
LABEL_12:
          ExReleasePushLockSharedEx(v9, 0LL);
          KeLeaveCriticalRegion();
          if ( v14 )
          {
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v15);
            DXGGLOBAL::DestroySyncObject(Global, v14, v6);
          }
          goto LABEL_14;
        }
        v13 = WdLogNewEntry5_WdError((v6 >> 25) & 0x60);
        *(_QWORD *)(v13 + 24) = 316LL;
        WdLogEvent5_WdError(v13);
      }
    }
    v14 = 0LL;
    goto LABEL_12;
  }
}
