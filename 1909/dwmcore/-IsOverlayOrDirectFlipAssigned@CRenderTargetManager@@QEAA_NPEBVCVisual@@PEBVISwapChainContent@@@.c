/*
 * XREFs of ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@@Z @ 0x180015E3C
 * Callers:
 *     ?SuppressPrimayUpdatesForVisual@CCompositionSurfaceBitmap@@UEBA_NPEBVCVisual@@@Z @ 0x180017BF0 (-SuppressPrimayUpdatesForVisual@CCompositionSurfaceBitmap@@UEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x180015EE4 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsAssigned@CDirectFlipInfo@@QEBA_NPEBVCVisual@@PEBVISwapChainContent@@@Z @ 0x180193440 (-IsAssigned@CDirectFlipInfo@@QEBA_NPEBVCVisual@@PEBVISwapChainContent@@@Z.c)
 */

char __fastcall CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
        CRenderTargetManager *this,
        const struct CVisual *a2,
        const struct ISwapChainContent *a3)
{
  char v3; // bl
  unsigned int v7; // edi
  __int64 v8; // rcx
  COverlayContext *v9; // rax
  COverlayContext *v10; // rbp
  CDirectFlipInfo *v11; // rcx

  v3 = 0;
  v7 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v7);
      v9 = (COverlayContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 264LL))(v8);
      v10 = v9;
      if ( v9 )
      {
        if ( COverlayContext::IsOverlayAssigned(v9, a2, a3, 0LL, 0LL, 0LL) )
          break;
        v11 = (CDirectFlipInfo *)*((_QWORD *)v10 + 1663);
        if ( v11 )
        {
          if ( CDirectFlipInfo::IsAssigned(v11, a2, a3) )
            break;
        }
      }
      if ( ++v7 >= *((_DWORD *)this + 12) )
        return v3;
    }
    return 1;
  }
  return v3;
}
