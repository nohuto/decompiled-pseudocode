/*
 * XREFs of ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249B0C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180249748 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x18024A1FC (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x180244DD0 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x180244E34 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802485CC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rdi
  CHolographicExclusiveView *v5; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  CHolographicInteropTaskQueue *AddRef; // rcx

  v3 = (__int64 *)((char *)this + 200);
  v5 = (CHolographicExclusiveView *)*((_QWORD *)this + 25);
  if ( v5 == (CHolographicExclusiveView *)a2 && !*((_BYTE *)v5 + 75) )
  {
    CHolographicExclusiveView::DeactivateView(v5, this);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v3);
  }
  if ( a2[11].lpVtbl )
  {
    CHolographicExclusiveView::DeactivateSwapChain((CHolographicExclusiveView *)a2);
    lpVtbl = a2[7].lpVtbl;
    AddRef = (CHolographicInteropTaskQueue *)lpVtbl[2].AddRef;
    if ( AddRef )
    {
      if ( LOBYTE(lpVtbl[10].QueryInterface) )
        CHolographicInteropTaskQueue::PostMessageW(AddRef, 28, (struct _SLIST_ENTRY *)a2[11].lpVtbl, 0LL, 0LL, 0LL, 0LL);
    }
    (*((void (__fastcall **)(struct IUnknownVtbl *))a2[11].lpVtbl->QueryInterface + 2))(a2[11].lpVtbl);
    a2[11].lpVtbl = 0LL;
    BYTE2(a2[9].lpVtbl) = 0;
  }
}
