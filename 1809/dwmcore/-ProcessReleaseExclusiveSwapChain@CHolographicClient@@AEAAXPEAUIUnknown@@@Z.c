/*
 * XREFs of ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212F58
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180212BD4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212FFC (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x18020C958 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x18020C9BC (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rdi
  CHolographicExclusiveView *v5; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  CHolographicInteropTaskQueue *QueryInterface; // rcx

  v3 = (__int64 *)((char *)this + 184);
  v5 = (CHolographicExclusiveView *)*((_QWORD *)this + 23);
  if ( v5 == (CHolographicExclusiveView *)a2 && !*((_BYTE *)v5 + 75) )
  {
    CHolographicExclusiveView::DeactivateView(v5, this);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v3);
  }
  if ( a2[11].lpVtbl )
  {
    CHolographicExclusiveView::DeactivateSwapChain((CHolographicExclusiveView *)a2);
    lpVtbl = a2[7].lpVtbl;
    QueryInterface = (CHolographicInteropTaskQueue *)lpVtbl[2].QueryInterface;
    if ( QueryInterface )
    {
      if ( LOBYTE(lpVtbl[9].QueryInterface) )
        CHolographicInteropTaskQueue::PostMessageW(
          QueryInterface,
          28,
          (struct _SLIST_ENTRY *)a2[11].lpVtbl,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    (*((void (__fastcall **)(struct IUnknownVtbl *))a2[11].lpVtbl->QueryInterface + 2))(a2[11].lpVtbl);
    a2[11].lpVtbl = 0LL;
    BYTE2(a2[9].lpVtbl) = 0;
  }
}
