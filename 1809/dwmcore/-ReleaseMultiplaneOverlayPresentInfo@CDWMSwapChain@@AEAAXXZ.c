/*
 * XREFs of ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800E8860
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800E8968 (--1CDWMSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180073378 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(CDWMSwapChain *this)
{
  unsigned int v2; // edi
  _QWORD *i; // rsi
  __int64 v4; // rcx

  (*(void (__fastcall **)(CDWMSwapChain *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(this, 0LL, 0LL);
  v2 = 0;
  for ( i = (_QWORD *)((char *)this + 544); v2 < *((_DWORD *)this + 135); ++v2 )
  {
    v4 = *(_QWORD *)(136LL * v2 + *i + 8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)this + 68);
  *i = 0LL;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 576) = 0;
}
