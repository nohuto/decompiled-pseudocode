/*
 * XREFs of ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x180213348
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180212BD4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x18020C9BC (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x180212414 (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 */

void __fastcall CHolographicClient::ProcessSetActiveExclusiveView(CHolographicClient *this, int a2)
{
  __int64 *v2; // rsi
  struct CHolographicExclusiveView *v3; // rbx

  v2 = (__int64 *)((char *)this + 184);
  *((_DWORD *)this + 42) = a2;
  v3 = (struct CHolographicExclusiveView *)*((_QWORD *)this + 23);
  if ( CHolographicClient::FindExclusiveViewByViewId(this, a2) != v3 )
  {
    if ( v3 )
    {
      if ( *((_BYTE *)v3 + 75) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 104LL))(*((_QWORD *)this + 3), 0LL);
      }
      else
      {
        CHolographicExclusiveView::DeactivateView(v3, this);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v2);
      }
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v2);
  }
}
