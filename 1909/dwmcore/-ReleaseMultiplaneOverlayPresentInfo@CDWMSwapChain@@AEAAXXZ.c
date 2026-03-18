/*
 * XREFs of ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800DA38C
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800DA250 (--1CDWMSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800A1220 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(CDWMSwapChain *this)
{
  unsigned int v2; // edi
  _QWORD *i; // rsi
  __int64 v4; // rcx

  (*(void (__fastcall **)(CDWMSwapChain *, _QWORD, _QWORD))(*(_QWORD *)this + 128LL))(this, 0LL, 0LL);
  v2 = 0;
  for ( i = (_QWORD *)((char *)this + 552); v2 < *((_DWORD *)this + 137); ++v2 )
  {
    v4 = *(_QWORD *)(136LL * v2 + *i + 8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)this + 69);
  *i = 0LL;
  *((_DWORD *)this + 137) = 0;
  *((_BYTE *)this + 584) = 0;
}
