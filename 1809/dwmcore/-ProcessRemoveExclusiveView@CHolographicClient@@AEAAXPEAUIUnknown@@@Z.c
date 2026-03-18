/*
 * XREFs of ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18021315C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180212BD4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212FFC (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18015C90C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x18020C9BC (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  CHolographicExclusiveView **v2; // rsi
  struct IUnknown *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CHolographicExclusiveView **)((char *)this + 184);
  v5 = a2;
  if ( *((struct IUnknown **)this + 23) == a2 )
  {
    CHolographicExclusiveView::DeactivateView(*v2, this);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v2);
  }
  if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 9, &v5) )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->Release)(a2);
}
